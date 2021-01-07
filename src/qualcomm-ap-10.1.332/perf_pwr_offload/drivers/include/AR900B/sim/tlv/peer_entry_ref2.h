// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _PEER_ENTRY_REF2_H_
#define _PEER_ENTRY_REF2_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	peer_address[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_PEER_ENTRY_REF2 1

struct peer_entry_ref2 {
    volatile uint32_t peer_address                    : 32; //[31:0]
};

/*

peer_address
			
			The physical address of the peer data in memory.
*/


/* Description		PEER_ENTRY_REF2_0_PEER_ADDRESS
			
			The physical address of the peer data in memory.
*/
#define PEER_ENTRY_REF2_0_PEER_ADDRESS_OFFSET                        0x00000000
#define PEER_ENTRY_REF2_0_PEER_ADDRESS_LSB                           0
#define PEER_ENTRY_REF2_0_PEER_ADDRESS_MASK                          0xffffffff


#endif // _PEER_ENTRY_REF2_H_
