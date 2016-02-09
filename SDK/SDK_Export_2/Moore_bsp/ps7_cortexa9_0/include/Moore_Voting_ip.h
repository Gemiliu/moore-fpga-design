
#ifndef MOORE_VOTING_IP_H
#define MOORE_VOTING_IP_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define MOORE_VOTING_IP_S_AXI_SLV_REG0_OFFSET 0
#define MOORE_VOTING_IP_S_AXI_SLV_REG1_OFFSET 4
#define MOORE_VOTING_IP_S_AXI_SLV_REG2_OFFSET 8
#define MOORE_VOTING_IP_S_AXI_SLV_REG3_OFFSET 12
#define MOORE_VOTING_IP_S_AXI_SLV_REG4_OFFSET 16
#define MOORE_VOTING_IP_S_AXI_SLV_REG5_OFFSET 20
#define MOORE_VOTING_IP_S_AXI_SLV_REG6_OFFSET 24
#define MOORE_VOTING_IP_S_AXI_SLV_REG7_OFFSET 28
#define MOORE_VOTING_IP_S_AXI_SLV_REG8_OFFSET 32
#define MOORE_VOTING_IP_S_AXI_SLV_REG9_OFFSET 36
#define MOORE_VOTING_IP_S_AXI_SLV_REG10_OFFSET 40
#define MOORE_VOTING_IP_S_AXI_SLV_REG11_OFFSET 44
#define MOORE_VOTING_IP_S_AXI_SLV_REG12_OFFSET 48
#define MOORE_VOTING_IP_S_AXI_SLV_REG13_OFFSET 52
#define MOORE_VOTING_IP_S_AXI_SLV_REG14_OFFSET 56
#define MOORE_VOTING_IP_S_AXI_SLV_REG15_OFFSET 60
#define MOORE_VOTING_IP_S_AXI_SLV_REG16_OFFSET 64
#define MOORE_VOTING_IP_S_AXI_SLV_REG17_OFFSET 68
#define MOORE_VOTING_IP_S_AXI_SLV_REG18_OFFSET 72
#define MOORE_VOTING_IP_S_AXI_SLV_REG19_OFFSET 76
#define MOORE_VOTING_IP_S_AXI_SLV_REG20_OFFSET 80
#define MOORE_VOTING_IP_S_AXI_SLV_REG21_OFFSET 84
#define MOORE_VOTING_IP_S_AXI_SLV_REG22_OFFSET 88
#define MOORE_VOTING_IP_S_AXI_SLV_REG23_OFFSET 92
#define MOORE_VOTING_IP_S_AXI_SLV_REG24_OFFSET 96
#define MOORE_VOTING_IP_S_AXI_SLV_REG25_OFFSET 100
#define MOORE_VOTING_IP_S_AXI_SLV_REG26_OFFSET 104
#define MOORE_VOTING_IP_S_AXI_SLV_REG27_OFFSET 108
#define MOORE_VOTING_IP_S_AXI_SLV_REG28_OFFSET 112
#define MOORE_VOTING_IP_S_AXI_SLV_REG29_OFFSET 116
#define MOORE_VOTING_IP_S_AXI_SLV_REG30_OFFSET 120
#define MOORE_VOTING_IP_S_AXI_SLV_REG31_OFFSET 124
#define MOORE_VOTING_IP_S_AXI_SLV_REG32_OFFSET 128
#define MOORE_VOTING_IP_S_AXI_SLV_REG33_OFFSET 132
#define MOORE_VOTING_IP_S_AXI_SLV_REG34_OFFSET 136
#define MOORE_VOTING_IP_S_AXI_SLV_REG35_OFFSET 140
#define MOORE_VOTING_IP_S_AXI_SLV_REG36_OFFSET 144
#define MOORE_VOTING_IP_S_AXI_SLV_REG37_OFFSET 148
#define MOORE_VOTING_IP_S_AXI_SLV_REG38_OFFSET 152
#define MOORE_VOTING_IP_S_AXI_SLV_REG39_OFFSET 156
#define MOORE_VOTING_IP_S_AXI_SLV_REG40_OFFSET 160
#define MOORE_VOTING_IP_S_AXI_SLV_REG41_OFFSET 164
#define MOORE_VOTING_IP_S_AXI_SLV_REG42_OFFSET 168
#define MOORE_VOTING_IP_S_AXI_SLV_REG43_OFFSET 172
#define MOORE_VOTING_IP_S_AXI_SLV_REG44_OFFSET 176
#define MOORE_VOTING_IP_S_AXI_SLV_REG45_OFFSET 180
#define MOORE_VOTING_IP_S_AXI_SLV_REG46_OFFSET 184
#define MOORE_VOTING_IP_S_AXI_SLV_REG47_OFFSET 188
#define MOORE_VOTING_IP_S_AXI_SLV_REG48_OFFSET 192
#define MOORE_VOTING_IP_S_AXI_SLV_REG49_OFFSET 196
#define MOORE_VOTING_IP_S_AXI_SLV_REG50_OFFSET 200
#define MOORE_VOTING_IP_S_AXI_SLV_REG51_OFFSET 204
#define MOORE_VOTING_IP_S_AXI_SLV_REG52_OFFSET 208
#define MOORE_VOTING_IP_S_AXI_SLV_REG53_OFFSET 212
#define MOORE_VOTING_IP_S_AXI_SLV_REG54_OFFSET 216
#define MOORE_VOTING_IP_S_AXI_SLV_REG55_OFFSET 220
#define MOORE_VOTING_IP_S_AXI_SLV_REG56_OFFSET 224
#define MOORE_VOTING_IP_S_AXI_SLV_REG57_OFFSET 228
#define MOORE_VOTING_IP_S_AXI_SLV_REG58_OFFSET 232
#define MOORE_VOTING_IP_S_AXI_SLV_REG59_OFFSET 236
#define MOORE_VOTING_IP_S_AXI_SLV_REG60_OFFSET 240
#define MOORE_VOTING_IP_S_AXI_SLV_REG61_OFFSET 244
#define MOORE_VOTING_IP_S_AXI_SLV_REG62_OFFSET 248
#define MOORE_VOTING_IP_S_AXI_SLV_REG63_OFFSET 252
#define MOORE_VOTING_IP_S_AXI_SLV_REG64_OFFSET 256
#define MOORE_VOTING_IP_S_AXI_SLV_REG65_OFFSET 260
#define MOORE_VOTING_IP_S_AXI_SLV_REG66_OFFSET 264
#define MOORE_VOTING_IP_S_AXI_SLV_REG67_OFFSET 268
#define MOORE_VOTING_IP_S_AXI_SLV_REG68_OFFSET 272
#define MOORE_VOTING_IP_S_AXI_SLV_REG69_OFFSET 276
#define MOORE_VOTING_IP_S_AXI_SLV_REG70_OFFSET 280
#define MOORE_VOTING_IP_S_AXI_SLV_REG71_OFFSET 284
#define MOORE_VOTING_IP_S_AXI_SLV_REG72_OFFSET 288
#define MOORE_VOTING_IP_S_AXI_SLV_REG73_OFFSET 292
#define MOORE_VOTING_IP_S_AXI_SLV_REG74_OFFSET 296
#define MOORE_VOTING_IP_S_AXI_SLV_REG75_OFFSET 300
#define MOORE_VOTING_IP_S_AXI_SLV_REG76_OFFSET 304
#define MOORE_VOTING_IP_S_AXI_SLV_REG77_OFFSET 308
#define MOORE_VOTING_IP_S_AXI_SLV_REG78_OFFSET 312
#define MOORE_VOTING_IP_S_AXI_SLV_REG79_OFFSET 316
#define MOORE_VOTING_IP_S_AXI_SLV_REG80_OFFSET 320
#define MOORE_VOTING_IP_S_AXI_SLV_REG81_OFFSET 324
#define MOORE_VOTING_IP_S_AXI_SLV_REG82_OFFSET 328
#define MOORE_VOTING_IP_S_AXI_SLV_REG83_OFFSET 332
#define MOORE_VOTING_IP_S_AXI_SLV_REG84_OFFSET 336
#define MOORE_VOTING_IP_S_AXI_SLV_REG85_OFFSET 340
#define MOORE_VOTING_IP_S_AXI_SLV_REG86_OFFSET 344
#define MOORE_VOTING_IP_S_AXI_SLV_REG87_OFFSET 348
#define MOORE_VOTING_IP_S_AXI_SLV_REG88_OFFSET 352
#define MOORE_VOTING_IP_S_AXI_SLV_REG89_OFFSET 356
#define MOORE_VOTING_IP_S_AXI_SLV_REG90_OFFSET 360
#define MOORE_VOTING_IP_S_AXI_SLV_REG91_OFFSET 364
#define MOORE_VOTING_IP_S_AXI_SLV_REG92_OFFSET 368
#define MOORE_VOTING_IP_S_AXI_SLV_REG93_OFFSET 372
#define MOORE_VOTING_IP_S_AXI_SLV_REG94_OFFSET 376
#define MOORE_VOTING_IP_S_AXI_SLV_REG95_OFFSET 380
#define MOORE_VOTING_IP_S_AXI_SLV_REG96_OFFSET 384
#define MOORE_VOTING_IP_S_AXI_SLV_REG97_OFFSET 388
#define MOORE_VOTING_IP_S_AXI_SLV_REG98_OFFSET 392
#define MOORE_VOTING_IP_S_AXI_SLV_REG99_OFFSET 396
#define MOORE_VOTING_IP_S_AXI_SLV_REG100_OFFSET 400
#define MOORE_VOTING_IP_S_AXI_SLV_REG101_OFFSET 404
#define MOORE_VOTING_IP_S_AXI_SLV_REG102_OFFSET 408
#define MOORE_VOTING_IP_S_AXI_SLV_REG103_OFFSET 412
#define MOORE_VOTING_IP_S_AXI_SLV_REG104_OFFSET 416
#define MOORE_VOTING_IP_S_AXI_SLV_REG105_OFFSET 420
#define MOORE_VOTING_IP_S_AXI_SLV_REG106_OFFSET 424
#define MOORE_VOTING_IP_S_AXI_SLV_REG107_OFFSET 428
#define MOORE_VOTING_IP_S_AXI_SLV_REG108_OFFSET 432
#define MOORE_VOTING_IP_S_AXI_SLV_REG109_OFFSET 436
#define MOORE_VOTING_IP_S_AXI_SLV_REG110_OFFSET 440
#define MOORE_VOTING_IP_S_AXI_SLV_REG111_OFFSET 444
#define MOORE_VOTING_IP_S_AXI_SLV_REG112_OFFSET 448
#define MOORE_VOTING_IP_S_AXI_SLV_REG113_OFFSET 452
#define MOORE_VOTING_IP_S_AXI_SLV_REG114_OFFSET 456
#define MOORE_VOTING_IP_S_AXI_SLV_REG115_OFFSET 460
#define MOORE_VOTING_IP_S_AXI_SLV_REG116_OFFSET 464
#define MOORE_VOTING_IP_S_AXI_SLV_REG117_OFFSET 468
#define MOORE_VOTING_IP_S_AXI_SLV_REG118_OFFSET 472
#define MOORE_VOTING_IP_S_AXI_SLV_REG119_OFFSET 476
#define MOORE_VOTING_IP_S_AXI_SLV_REG120_OFFSET 480
#define MOORE_VOTING_IP_S_AXI_SLV_REG121_OFFSET 484
#define MOORE_VOTING_IP_S_AXI_SLV_REG122_OFFSET 488
#define MOORE_VOTING_IP_S_AXI_SLV_REG123_OFFSET 492
#define MOORE_VOTING_IP_S_AXI_SLV_REG124_OFFSET 496
#define MOORE_VOTING_IP_S_AXI_SLV_REG125_OFFSET 500
#define MOORE_VOTING_IP_S_AXI_SLV_REG126_OFFSET 504
#define MOORE_VOTING_IP_S_AXI_SLV_REG127_OFFSET 508
#define MOORE_VOTING_IP_S_AXI_SLV_REG128_OFFSET 512
#define MOORE_VOTING_IP_S_AXI_SLV_REG129_OFFSET 516
#define MOORE_VOTING_IP_S_AXI_SLV_REG130_OFFSET 520
#define MOORE_VOTING_IP_S_AXI_SLV_REG131_OFFSET 524
#define MOORE_VOTING_IP_S_AXI_SLV_REG132_OFFSET 528
#define MOORE_VOTING_IP_S_AXI_SLV_REG133_OFFSET 532
#define MOORE_VOTING_IP_S_AXI_SLV_REG134_OFFSET 536
#define MOORE_VOTING_IP_S_AXI_SLV_REG135_OFFSET 540
#define MOORE_VOTING_IP_S_AXI_SLV_REG136_OFFSET 544
#define MOORE_VOTING_IP_S_AXI_SLV_REG137_OFFSET 548
#define MOORE_VOTING_IP_S_AXI_SLV_REG138_OFFSET 552
#define MOORE_VOTING_IP_S_AXI_SLV_REG139_OFFSET 556
#define MOORE_VOTING_IP_S_AXI_SLV_REG140_OFFSET 560
#define MOORE_VOTING_IP_S_AXI_SLV_REG141_OFFSET 564
#define MOORE_VOTING_IP_S_AXI_SLV_REG142_OFFSET 568
#define MOORE_VOTING_IP_S_AXI_SLV_REG143_OFFSET 572
#define MOORE_VOTING_IP_S_AXI_SLV_REG144_OFFSET 576
#define MOORE_VOTING_IP_S_AXI_SLV_REG145_OFFSET 580
#define MOORE_VOTING_IP_S_AXI_SLV_REG146_OFFSET 584
#define MOORE_VOTING_IP_S_AXI_SLV_REG147_OFFSET 588
#define MOORE_VOTING_IP_S_AXI_SLV_REG148_OFFSET 592
#define MOORE_VOTING_IP_S_AXI_SLV_REG149_OFFSET 596
#define MOORE_VOTING_IP_S_AXI_SLV_REG150_OFFSET 600
#define MOORE_VOTING_IP_S_AXI_SLV_REG151_OFFSET 604
#define MOORE_VOTING_IP_S_AXI_SLV_REG152_OFFSET 608
#define MOORE_VOTING_IP_S_AXI_SLV_REG153_OFFSET 612
#define MOORE_VOTING_IP_S_AXI_SLV_REG154_OFFSET 616
#define MOORE_VOTING_IP_S_AXI_SLV_REG155_OFFSET 620
#define MOORE_VOTING_IP_S_AXI_SLV_REG156_OFFSET 624
#define MOORE_VOTING_IP_S_AXI_SLV_REG157_OFFSET 628
#define MOORE_VOTING_IP_S_AXI_SLV_REG158_OFFSET 632
#define MOORE_VOTING_IP_S_AXI_SLV_REG159_OFFSET 636
#define MOORE_VOTING_IP_S_AXI_SLV_REG160_OFFSET 640
#define MOORE_VOTING_IP_S_AXI_SLV_REG161_OFFSET 644
#define MOORE_VOTING_IP_S_AXI_SLV_REG162_OFFSET 648
#define MOORE_VOTING_IP_S_AXI_SLV_REG163_OFFSET 652
#define MOORE_VOTING_IP_S_AXI_SLV_REG164_OFFSET 656
#define MOORE_VOTING_IP_S_AXI_SLV_REG165_OFFSET 660
#define MOORE_VOTING_IP_S_AXI_SLV_REG166_OFFSET 664
#define MOORE_VOTING_IP_S_AXI_SLV_REG167_OFFSET 668
#define MOORE_VOTING_IP_S_AXI_SLV_REG168_OFFSET 672
#define MOORE_VOTING_IP_S_AXI_SLV_REG169_OFFSET 676
#define MOORE_VOTING_IP_S_AXI_SLV_REG170_OFFSET 680
#define MOORE_VOTING_IP_S_AXI_SLV_REG171_OFFSET 684
#define MOORE_VOTING_IP_S_AXI_SLV_REG172_OFFSET 688
#define MOORE_VOTING_IP_S_AXI_SLV_REG173_OFFSET 692
#define MOORE_VOTING_IP_S_AXI_SLV_REG174_OFFSET 696
#define MOORE_VOTING_IP_S_AXI_SLV_REG175_OFFSET 700
#define MOORE_VOTING_IP_S_AXI_SLV_REG176_OFFSET 704
#define MOORE_VOTING_IP_S_AXI_SLV_REG177_OFFSET 708
#define MOORE_VOTING_IP_S_AXI_SLV_REG178_OFFSET 712
#define MOORE_VOTING_IP_S_AXI_SLV_REG179_OFFSET 716
#define MOORE_VOTING_IP_S_AXI_SLV_REG180_OFFSET 720
#define MOORE_VOTING_IP_S_AXI_SLV_REG181_OFFSET 724
#define MOORE_VOTING_IP_S_AXI_SLV_REG182_OFFSET 728
#define MOORE_VOTING_IP_S_AXI_SLV_REG183_OFFSET 732
#define MOORE_VOTING_IP_S_AXI_SLV_REG184_OFFSET 736
#define MOORE_VOTING_IP_S_AXI_SLV_REG185_OFFSET 740
#define MOORE_VOTING_IP_S_AXI_SLV_REG186_OFFSET 744
#define MOORE_VOTING_IP_S_AXI_SLV_REG187_OFFSET 748
#define MOORE_VOTING_IP_S_AXI_SLV_REG188_OFFSET 752
#define MOORE_VOTING_IP_S_AXI_SLV_REG189_OFFSET 756
#define MOORE_VOTING_IP_S_AXI_SLV_REG190_OFFSET 760
#define MOORE_VOTING_IP_S_AXI_SLV_REG191_OFFSET 764
#define MOORE_VOTING_IP_S_AXI_SLV_REG192_OFFSET 768
#define MOORE_VOTING_IP_S_AXI_SLV_REG193_OFFSET 772
#define MOORE_VOTING_IP_S_AXI_SLV_REG194_OFFSET 776
#define MOORE_VOTING_IP_S_AXI_SLV_REG195_OFFSET 780
#define MOORE_VOTING_IP_S_AXI_SLV_REG196_OFFSET 784
#define MOORE_VOTING_IP_S_AXI_SLV_REG197_OFFSET 788
#define MOORE_VOTING_IP_S_AXI_SLV_REG198_OFFSET 792
#define MOORE_VOTING_IP_S_AXI_SLV_REG199_OFFSET 796
#define MOORE_VOTING_IP_S_AXI_SLV_REG200_OFFSET 800
#define MOORE_VOTING_IP_S_AXI_SLV_REG201_OFFSET 804
#define MOORE_VOTING_IP_S_AXI_SLV_REG202_OFFSET 808
#define MOORE_VOTING_IP_S_AXI_SLV_REG203_OFFSET 812
#define MOORE_VOTING_IP_S_AXI_SLV_REG204_OFFSET 816
#define MOORE_VOTING_IP_S_AXI_SLV_REG205_OFFSET 820
#define MOORE_VOTING_IP_S_AXI_SLV_REG206_OFFSET 824
#define MOORE_VOTING_IP_S_AXI_SLV_REG207_OFFSET 828
#define MOORE_VOTING_IP_S_AXI_SLV_REG208_OFFSET 832
#define MOORE_VOTING_IP_S_AXI_SLV_REG209_OFFSET 836


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a MOORE_VOTING_IP register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the MOORE_VOTING_IPdevice.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void MOORE_VOTING_IP_mWriteReg(u32 BaseAddress, unsigned RegOffset, u32 Data)
 *
 */
#define MOORE_VOTING_IP_mWriteReg(BaseAddress, RegOffset, Data) \
  	Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

/**
 *
 * Read a value from a MOORE_VOTING_IP register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the MOORE_VOTING_IP device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	u32 MOORE_VOTING_IP_mReadReg(u32 BaseAddress, unsigned RegOffset)
 *
 */
#define MOORE_VOTING_IP_mReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes ****************************/
/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MOORE_VOTING_IP instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus MOORE_VOTING_IP_Reg_SelfTest(void * baseaddr_p);

#endif // MOORE_VOTING_IP_H
