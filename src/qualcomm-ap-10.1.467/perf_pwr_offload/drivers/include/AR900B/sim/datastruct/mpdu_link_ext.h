// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MPDU_LINK_EXT_H_
#define _MPDU_LINK_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	head_msdu_index[15:0], end_of_lifetime[31:16]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MPDU_LINK_EXT 1

struct mpdu_link_ext {
    volatile uint32_t head_msdu_index                 : 16, //[15:0]
                      end_of_lifetime                 : 16; //[31:16]
};

/*

head_msdu_index
			
			The index of the first MSDU frame  in the MPDU.
			
			Note that in case of a single MSDU in a MPDU or RAW
			frame format, this MSDU index will be the only index
			associated with this frame.  <legal 1-65535>

end_of_lifetime
			
			End of lifetime
			
			The units of this value is programmed in a global
			register in the common register block.
			
			The value is the absolute time (using the Always running
			clock) that indicates till when the frame is allowed to
			remain in the queue. After this time, the frame should be
			removed and not transmitted anymore. <legal all>
*/


/* Description		MPDU_LINK_EXT_0_HEAD_MSDU_INDEX
			
			The index of the first MSDU frame  in the MPDU.
			
			Note that in case of a single MSDU in a MPDU or RAW
			frame format, this MSDU index will be the only index
			associated with this frame.  <legal 1-65535>
*/
#define MPDU_LINK_EXT_0_HEAD_MSDU_INDEX_OFFSET                       0x00000000
#define MPDU_LINK_EXT_0_HEAD_MSDU_INDEX_LSB                          0
#define MPDU_LINK_EXT_0_HEAD_MSDU_INDEX_MASK                         0x0000ffff

/* Description		MPDU_LINK_EXT_0_END_OF_LIFETIME
			
			End of lifetime
			
			The units of this value is programmed in a global
			register in the common register block.
			
			The value is the absolute time (using the Always running
			clock) that indicates till when the frame is allowed to
			remain in the queue. After this time, the frame should be
			removed and not transmitted anymore. <legal all>
*/
#define MPDU_LINK_EXT_0_END_OF_LIFETIME_OFFSET                       0x00000000
#define MPDU_LINK_EXT_0_END_OF_LIFETIME_LSB                          16
#define MPDU_LINK_EXT_0_END_OF_LIFETIME_MASK                         0xffff0000


#endif // _MPDU_LINK_EXT_H_
