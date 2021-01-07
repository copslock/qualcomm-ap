// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MSDU_LINK_EXT_H_
#define _MSDU_LINK_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	tso_enable[0], reserved_0a[6:1], tcp_flag[15:7], tcp_flag_mask[23:16], reserved_0b[31:24]
//	1	l2_length[15:0], ip_length[31:16]
//	2	tcp_seq_number[31:0]
//	3	ip_identification[15:0], reserved_3a[31:16]
//	4	buf0_ptr_31_0[31:0]
//	5	buf0_ptr_47_32[15:0], buf0_len[31:16]
//	6	buf1_ptr_31_0[31:0]
//	7	buf1_ptr_47_32[15:0], buf1_len[31:16]
//	8	buf2_ptr_31_0[31:0]
//	9	buf2_ptr_47_32[15:0], buf2_len[31:16]
//	10	buf3_ptr_31_0[31:0]
//	11	buf3_ptr_47_32[15:0], buf3_len[31:16]
//	12	buf4_ptr_31_0[31:0]
//	13	buf4_ptr_47_32[15:0], buf4_len[31:16]
//	14	buf5_ptr_31_0[31:0]
//	15	buf5_ptr_47_32[15:0], buf5_len[31:16]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MSDU_LINK_EXT 16

struct msdu_link_ext {
    volatile uint32_t tso_enable                      :  1, //[0]
                      reserved_0a                     :  6, //[6:1]
                      tcp_flag                        :  9, //[15:7]
                      tcp_flag_mask                   :  8, //[23:16]
                      reserved_0b                     :  8; //[31:24]
    volatile uint32_t l2_length                       : 16, //[15:0]
                      ip_length                       : 16; //[31:16]
    volatile uint32_t tcp_seq_number                  : 32; //[31:0]
    volatile uint32_t ip_identification               : 16, //[15:0]
                      reserved_3a                     : 16; //[31:16]
    volatile uint32_t buf0_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf0_ptr_47_32                  : 16, //[15:0]
                      buf0_len                        : 16; //[31:16]
    volatile uint32_t buf1_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf1_ptr_47_32                  : 16, //[15:0]
                      buf1_len                        : 16; //[31:16]
    volatile uint32_t buf2_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf2_ptr_47_32                  : 16, //[15:0]
                      buf2_len                        : 16; //[31:16]
    volatile uint32_t buf3_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf3_ptr_47_32                  : 16, //[15:0]
                      buf3_len                        : 16; //[31:16]
    volatile uint32_t buf4_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf4_ptr_47_32                  : 16, //[15:0]
                      buf4_len                        : 16; //[31:16]
    volatile uint32_t buf5_ptr_31_0                   : 32; //[31:0]
    volatile uint32_t buf5_ptr_47_32                  : 16, //[15:0]
                      buf5_len                        : 16; //[31:16]
};

/*

tso_enable
			
			Enable transmit segmentation offload <legal all>

reserved_0a
			
			FW will set to 0, MAC will ignore.  <legal 0>

tcp_flag
			
			TCP flags
			
			{NS,CWR,ECE,URG,ACK,PSH, RST ,SYN,FIN}<legal all>

tcp_flag_mask
			
			TCP flag mask. Tcp_flag is inserted into the header
			based on the mask, if tso is enabled

reserved_0b
			
			FW will set to 0, MAC will ignore.  <legal 0>

l2_length
			
			L2 length for the msdu, if tso is enabled <legal all>

ip_length
			
			Ip length for the msdu, if tso is enabled <legal all>

tcp_seq_number
			
			Tcp_seq_number for the msdu, if tso is enabled <legal
			all>

ip_identification
			
			Ip_identification for the msdu, if tso is enabled <legal
			all>

reserved_3a
			
			FW will set to 0, MAC will ignore.  <legal 0>

buf0_ptr_31_0
			
			Lower 32 bits of the first buffer pointer <legal all>

buf0_ptr_47_32
			
			Upper 16 bits of the first buffer pointer <legal all>

buf0_len
			
			Length of the first buffer <legal all>

buf1_ptr_31_0
			
			Lower 32 bits of the second buffer pointer <legal all>

buf1_ptr_47_32
			
			Upper 16 bits of the second buffer pointer <legal all>

buf1_len
			
			Length of the second buffer <legal all>

buf2_ptr_31_0
			
			Lower 32 bits of the third buffer pointer <legal all>

buf2_ptr_47_32
			
			Upper 16 bits of the third buffer pointer <legal all>

buf2_len
			
			Length of the third buffer <legal all>

buf3_ptr_31_0
			
			Lower 32 bits of the fourth buffer pointer <legal all>

buf3_ptr_47_32
			
			Upper 16 bits of the fourth buffer pointer <legal all>

buf3_len
			
			Length of the fourth buffer <legal all>

buf4_ptr_31_0
			
			Lower 32 bits of the fifth buffer pointer <legal all>

buf4_ptr_47_32
			
			Upper 16 bits of the fifth buffer pointer <legal all>

buf4_len
			
			Length of the fifth buffer <legal all>

buf5_ptr_31_0
			
			Lower 32 bits of the sixth buffer pointer <legal all>

buf5_ptr_47_32
			
			Upper 16 bits of the sixth buffer pointer <legal all>

buf5_len
			
			Length of the sixth buffer <legal all>
*/


/* Description		MSDU_LINK_EXT_0_TSO_ENABLE
			
			Enable transmit segmentation offload <legal all>
*/
#define MSDU_LINK_EXT_0_TSO_ENABLE_OFFSET                            0x00000000
#define MSDU_LINK_EXT_0_TSO_ENABLE_LSB                               0
#define MSDU_LINK_EXT_0_TSO_ENABLE_MASK                              0x00000001

/* Description		MSDU_LINK_EXT_0_RESERVED_0A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define MSDU_LINK_EXT_0_RESERVED_0A_OFFSET                           0x00000000
#define MSDU_LINK_EXT_0_RESERVED_0A_LSB                              1
#define MSDU_LINK_EXT_0_RESERVED_0A_MASK                             0x0000007e

/* Description		MSDU_LINK_EXT_0_TCP_FLAG
			
			TCP flags
			
			{NS,CWR,ECE,URG,ACK,PSH, RST ,SYN,FIN}<legal all>
*/
#define MSDU_LINK_EXT_0_TCP_FLAG_OFFSET                              0x00000000
#define MSDU_LINK_EXT_0_TCP_FLAG_LSB                                 7
#define MSDU_LINK_EXT_0_TCP_FLAG_MASK                                0x0000ff80

/* Description		MSDU_LINK_EXT_0_TCP_FLAG_MASK
			
			TCP flag mask. Tcp_flag is inserted into the header
			based on the mask, if tso is enabled
*/
#define MSDU_LINK_EXT_0_TCP_FLAG_MASK_OFFSET                         0x00000000
#define MSDU_LINK_EXT_0_TCP_FLAG_MASK_LSB                            16
#define MSDU_LINK_EXT_0_TCP_FLAG_MASK_MASK                           0x00ff0000

/* Description		MSDU_LINK_EXT_0_RESERVED_0B
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define MSDU_LINK_EXT_0_RESERVED_0B_OFFSET                           0x00000000
#define MSDU_LINK_EXT_0_RESERVED_0B_LSB                              24
#define MSDU_LINK_EXT_0_RESERVED_0B_MASK                             0xff000000

/* Description		MSDU_LINK_EXT_1_L2_LENGTH
			
			L2 length for the msdu, if tso is enabled <legal all>
*/
#define MSDU_LINK_EXT_1_L2_LENGTH_OFFSET                             0x00000004
#define MSDU_LINK_EXT_1_L2_LENGTH_LSB                                0
#define MSDU_LINK_EXT_1_L2_LENGTH_MASK                               0x0000ffff

/* Description		MSDU_LINK_EXT_1_IP_LENGTH
			
			Ip length for the msdu, if tso is enabled <legal all>
*/
#define MSDU_LINK_EXT_1_IP_LENGTH_OFFSET                             0x00000004
#define MSDU_LINK_EXT_1_IP_LENGTH_LSB                                16
#define MSDU_LINK_EXT_1_IP_LENGTH_MASK                               0xffff0000

/* Description		MSDU_LINK_EXT_2_TCP_SEQ_NUMBER
			
			Tcp_seq_number for the msdu, if tso is enabled <legal
			all>
*/
#define MSDU_LINK_EXT_2_TCP_SEQ_NUMBER_OFFSET                        0x00000008
#define MSDU_LINK_EXT_2_TCP_SEQ_NUMBER_LSB                           0
#define MSDU_LINK_EXT_2_TCP_SEQ_NUMBER_MASK                          0xffffffff

/* Description		MSDU_LINK_EXT_3_IP_IDENTIFICATION
			
			Ip_identification for the msdu, if tso is enabled <legal
			all>
*/
#define MSDU_LINK_EXT_3_IP_IDENTIFICATION_OFFSET                     0x0000000c
#define MSDU_LINK_EXT_3_IP_IDENTIFICATION_LSB                        0
#define MSDU_LINK_EXT_3_IP_IDENTIFICATION_MASK                       0x0000ffff

/* Description		MSDU_LINK_EXT_3_RESERVED_3A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define MSDU_LINK_EXT_3_RESERVED_3A_OFFSET                           0x0000000c
#define MSDU_LINK_EXT_3_RESERVED_3A_LSB                              16
#define MSDU_LINK_EXT_3_RESERVED_3A_MASK                             0xffff0000

/* Description		MSDU_LINK_EXT_4_BUF0_PTR_31_0
			
			Lower 32 bits of the first buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_4_BUF0_PTR_31_0_OFFSET                         0x00000010
#define MSDU_LINK_EXT_4_BUF0_PTR_31_0_LSB                            0
#define MSDU_LINK_EXT_4_BUF0_PTR_31_0_MASK                           0xffffffff

/* Description		MSDU_LINK_EXT_5_BUF0_PTR_47_32
			
			Upper 16 bits of the first buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_5_BUF0_PTR_47_32_OFFSET                        0x00000014
#define MSDU_LINK_EXT_5_BUF0_PTR_47_32_LSB                           0
#define MSDU_LINK_EXT_5_BUF0_PTR_47_32_MASK                          0x0000ffff

/* Description		MSDU_LINK_EXT_5_BUF0_LEN
			
			Length of the first buffer <legal all>
*/
#define MSDU_LINK_EXT_5_BUF0_LEN_OFFSET                              0x00000014
#define MSDU_LINK_EXT_5_BUF0_LEN_LSB                                 16
#define MSDU_LINK_EXT_5_BUF0_LEN_MASK                                0xffff0000

/* Description		MSDU_LINK_EXT_6_BUF1_PTR_31_0
			
			Lower 32 bits of the second buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_6_BUF1_PTR_31_0_OFFSET                         0x00000018
#define MSDU_LINK_EXT_6_BUF1_PTR_31_0_LSB                            0
#define MSDU_LINK_EXT_6_BUF1_PTR_31_0_MASK                           0xffffffff

/* Description		MSDU_LINK_EXT_7_BUF1_PTR_47_32
			
			Upper 16 bits of the second buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_7_BUF1_PTR_47_32_OFFSET                        0x0000001c
#define MSDU_LINK_EXT_7_BUF1_PTR_47_32_LSB                           0
#define MSDU_LINK_EXT_7_BUF1_PTR_47_32_MASK                          0x0000ffff

/* Description		MSDU_LINK_EXT_7_BUF1_LEN
			
			Length of the second buffer <legal all>
*/
#define MSDU_LINK_EXT_7_BUF1_LEN_OFFSET                              0x0000001c
#define MSDU_LINK_EXT_7_BUF1_LEN_LSB                                 16
#define MSDU_LINK_EXT_7_BUF1_LEN_MASK                                0xffff0000

/* Description		MSDU_LINK_EXT_8_BUF2_PTR_31_0
			
			Lower 32 bits of the third buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_8_BUF2_PTR_31_0_OFFSET                         0x00000020
#define MSDU_LINK_EXT_8_BUF2_PTR_31_0_LSB                            0
#define MSDU_LINK_EXT_8_BUF2_PTR_31_0_MASK                           0xffffffff

/* Description		MSDU_LINK_EXT_9_BUF2_PTR_47_32
			
			Upper 16 bits of the third buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_9_BUF2_PTR_47_32_OFFSET                        0x00000024
#define MSDU_LINK_EXT_9_BUF2_PTR_47_32_LSB                           0
#define MSDU_LINK_EXT_9_BUF2_PTR_47_32_MASK                          0x0000ffff

/* Description		MSDU_LINK_EXT_9_BUF2_LEN
			
			Length of the third buffer <legal all>
*/
#define MSDU_LINK_EXT_9_BUF2_LEN_OFFSET                              0x00000024
#define MSDU_LINK_EXT_9_BUF2_LEN_LSB                                 16
#define MSDU_LINK_EXT_9_BUF2_LEN_MASK                                0xffff0000

/* Description		MSDU_LINK_EXT_10_BUF3_PTR_31_0
			
			Lower 32 bits of the fourth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_10_BUF3_PTR_31_0_OFFSET                        0x00000028
#define MSDU_LINK_EXT_10_BUF3_PTR_31_0_LSB                           0
#define MSDU_LINK_EXT_10_BUF3_PTR_31_0_MASK                          0xffffffff

/* Description		MSDU_LINK_EXT_11_BUF3_PTR_47_32
			
			Upper 16 bits of the fourth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_11_BUF3_PTR_47_32_OFFSET                       0x0000002c
#define MSDU_LINK_EXT_11_BUF3_PTR_47_32_LSB                          0
#define MSDU_LINK_EXT_11_BUF3_PTR_47_32_MASK                         0x0000ffff

/* Description		MSDU_LINK_EXT_11_BUF3_LEN
			
			Length of the fourth buffer <legal all>
*/
#define MSDU_LINK_EXT_11_BUF3_LEN_OFFSET                             0x0000002c
#define MSDU_LINK_EXT_11_BUF3_LEN_LSB                                16
#define MSDU_LINK_EXT_11_BUF3_LEN_MASK                               0xffff0000

/* Description		MSDU_LINK_EXT_12_BUF4_PTR_31_0
			
			Lower 32 bits of the fifth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_12_BUF4_PTR_31_0_OFFSET                        0x00000030
#define MSDU_LINK_EXT_12_BUF4_PTR_31_0_LSB                           0
#define MSDU_LINK_EXT_12_BUF4_PTR_31_0_MASK                          0xffffffff

/* Description		MSDU_LINK_EXT_13_BUF4_PTR_47_32
			
			Upper 16 bits of the fifth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_13_BUF4_PTR_47_32_OFFSET                       0x00000034
#define MSDU_LINK_EXT_13_BUF4_PTR_47_32_LSB                          0
#define MSDU_LINK_EXT_13_BUF4_PTR_47_32_MASK                         0x0000ffff

/* Description		MSDU_LINK_EXT_13_BUF4_LEN
			
			Length of the fifth buffer <legal all>
*/
#define MSDU_LINK_EXT_13_BUF4_LEN_OFFSET                             0x00000034
#define MSDU_LINK_EXT_13_BUF4_LEN_LSB                                16
#define MSDU_LINK_EXT_13_BUF4_LEN_MASK                               0xffff0000

/* Description		MSDU_LINK_EXT_14_BUF5_PTR_31_0
			
			Lower 32 bits of the sixth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_14_BUF5_PTR_31_0_OFFSET                        0x00000038
#define MSDU_LINK_EXT_14_BUF5_PTR_31_0_LSB                           0
#define MSDU_LINK_EXT_14_BUF5_PTR_31_0_MASK                          0xffffffff

/* Description		MSDU_LINK_EXT_15_BUF5_PTR_47_32
			
			Upper 16 bits of the sixth buffer pointer <legal all>
*/
#define MSDU_LINK_EXT_15_BUF5_PTR_47_32_OFFSET                       0x0000003c
#define MSDU_LINK_EXT_15_BUF5_PTR_47_32_LSB                          0
#define MSDU_LINK_EXT_15_BUF5_PTR_47_32_MASK                         0x0000ffff

/* Description		MSDU_LINK_EXT_15_BUF5_LEN
			
			Length of the sixth buffer <legal all>
*/
#define MSDU_LINK_EXT_15_BUF5_LEN_OFFSET                             0x0000003c
#define MSDU_LINK_EXT_15_BUF5_LEN_LSB                                16
#define MSDU_LINK_EXT_15_BUF5_LEN_MASK                               0xffff0000


#endif // _MSDU_LINK_EXT_H_
