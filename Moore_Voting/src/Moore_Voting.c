/*
 * Copyright (c) 2009-2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "platform.h"
#include "xil_io.h"
#include "xparameters.h"
#define bool int

int findCandidate(int *, int);
bool isMajority(int *, int, int);

#define NUM_BLOCK 100 //Modify to test. maximum 100
#define MAX_LENGTH_ARRAY 1024
#define FREQUENCE_CHANGE_DATA_LENGTH 3 //Modify to test change from 1 to 3

u32 *dram_addr = XPAR_PS7_DDR_0_S_AXI_BASEADDR;
u32 index_ram = 0;

int memory_data[80] = {0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,
0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,
0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,
0x02030500,0x01030701,0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,0x08030206,0x04030301,0x07030301,0x08040804,0x0a050205,
0x04030306,0x05030308,0x02030500,0x01030701,0x07030902,0x08030206};


//0x00000006200D1014
u64 inst_data[] = {
	0x000000032007100a,//in the instruction data: I have 00a is the length. the information 320071 is for the interruption in hardware, not for software so we don't care when calculate by software.
	0x00000006200D1014,
	0x0000000C201A1028,
};

/* Function to print Majority Element */
void printMajority(int a[], int size)
{
  /* Find the candidate for Majority*/
  int cand = findCandidate(a, size);

  /* Print the candidate if it is Majority*/
  //When finishing the calculation, I write it to an array called dram.
  //If it has the majority, the bit 9 = 1, bit 7:0 = candidate.
  if(isMajority(a, size, cand)){
	  *(dram_addr + index_ram) = 0x1 | cand;
	  index_ram++;
  }
  else{///If it has not the majority, the bit 9 = 0, bit 7:0 = candidate.
	  *(dram_addr + index_ram) = cand;
	  index_ram++;
  }

}

/* Function to find the candidate for Majority */
int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    int i;
    for(i = 1; i < size; i++)
    {
        if(a[maj_index] == a[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    //xil_printf("a[%d] = %x \n",maj_index, a[maj_index]);
    return a[maj_index];
}

/* Function to check if the candidate occurs more than n/2 times */
bool isMajority(int a[], int size, int cand)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
      if(a[i] == cand)
         count++;
    if (count > size/2)
       return 1;
    else
       return 0;
}

int main()
{
    init_platform();



    u32 *memory_addr, *result_addr;
    int complete;
    u32 timer;
    int i,j, m,k;
    int array[MAX_LENGTH_ARRAY];

    memory_addr = (u32 *) XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR;
    result_addr = (u32 *) XPAR_AXI_BRAM_CTRL_1_S_AXI_BASEADDR;

    //Calculate the majority by software//
    //I write the input into a array named array. The input is random from a predefined array.
    m = 0;
    k = 0;
    for (j = 0; j < NUM_BLOCK;j++){
		for (i = 0; i < (inst_data[j%FREQUENCE_CHANGE_DATA_LENGTH] & 0x3ff); i++){
			if ((i+m) % 4 == 0){
				array[i] = memory_data[((m+i) >> 2)%80] & 0xff;
				k++;
				//xil_printf("array[%d] = %x \n",i, array[i]);
			}
			else if ((i+m) % 4 == 1){
				array[i] = (memory_data[((m+i) >> 2)%80] >> 8) & 0xff;
				k++;
				//xil_printf("array[%d] = %x \n",i, array[i]);
			}
			else if ((i+m) % 4 == 2){
				array[i] = (memory_data[((m+i) >> 2)%80] >> 16) & 0xff;
				k++;
				//xil_printf("array[%d] = %x \n",i, array[i]);
			}
			else {
				array[i] = (memory_data[((m+i) >> 2)%80] >> 24) & 0xff;
				k++;
				//xil_printf("array[%d] = %x \n",i, array[i]);
			}
		}

		m = m + (inst_data[j%FREQUENCE_CHANGE_DATA_LENGTH] & 0x3ff);
		printMajority(array, inst_data[j%FREQUENCE_CHANGE_DATA_LENGTH] & 0x3ff);
		//After having the enough data of the array, I calculate the majority. Inst_data will define the length of the array
    }
    ///////////////////////////////////////
    //Result checking//
    //You can view it by this by open a comment
    for (i = 0; i < NUM_BLOCK; i++){
    	//xil_printf("majority[%d] = %x \n",i, dram_addr[i] >> 8);
    	//xil_printf("cand[%d] = %x \n",i, dram_addr[i] & 0xff);
    }
    ///////////////////////////////////////
    int length_data = 0;
    for (i = 0; i < NUM_BLOCK; i++){
    	length_data = length_data + (inst_data[i%FREQUENCE_CHANGE_DATA_LENGTH] & 0x3ff);
    }
    xil_printf("length_data = %d byte | ", length_data);

    //This part I transfer the input data for hardware part. input is the same software
    for (i = 0; i < (length_data/4 + 1); i++){
    	memory_addr[i] = memory_data[i%80];
    	//xil_printf("memory_addr[%d] = %x \n",i, memory_addr[i]);
    }

    //establish instruction for hardware
    for (i = 0; i < NUM_BLOCK; i++){
    	Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+4*2*i, inst_data[i%FREQUENCE_CHANGE_DATA_LENGTH]);
    	Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+4*2*i + 4, inst_data[i%FREQUENCE_CHANGE_DATA_LENGTH] >> 32);
    }



    //Setup Number of block data
    Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+200*4, NUM_BLOCK);

    //Reset
    Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+204*4, 0x1);
    Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+204*4, 0x0);

    //Enable
    Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+201*4, 0x1);

	//Reset
	Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+204*4, 0x1);
	Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+204*4, 0x0);

    //Wait for Complete
	//After enable hardware, I wait for complete
    complete = Xil_In32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+203*4);
    while (complete == 0){
    	complete = Xil_In32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+203*4);
    }


    //I compare with the result of hardware and software

    for (i = 0; i < NUM_BLOCK; i++){
    	if (result_addr[i] != dram_addr[i]){
    		xil_printf("FAILED");
    		break;
    	}
    }

    //Print timer value
    timer = Xil_In32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+202*4);
    xil_printf("timer = %d 50M clock cycles|", timer);

    int  throughput = length_data*8*50/timer;
    xil_printf("throughput = %d Mb/s\n", throughput);
    //Not Enable
    Xil_Out32(XPAR_MOORE_VOTING_IP_0_S_AXI_BASEADDR+201*4, 0x0);

    return 0;
}
