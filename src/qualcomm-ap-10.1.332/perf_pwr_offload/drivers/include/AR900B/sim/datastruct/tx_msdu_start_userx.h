// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _TX_MSDU_START_USERX_H_
#define _TX_MSDU_START_USERX_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	msdu_len[13:0], first_msdu[14], last_msdu[15], l4_chksum_en[16], l3_chksum_en[17], encap_type[19:18], wds[20], use_ad_b[21], toggle_eosp[22], toggle_power_mgmt[23], toggle_more_data[24], strip_vlan[25], replace_qos_ctl[26], reserved_0[27], raw_update_seqnum[28], raw_update_iv[29], raw_update_retry[30], sw_msdu_param[31]
//	1	tso_enable[0], reserved_1a[6:1], tcp_flag[15:7], tcp_flag_mask[23:16], reserved_1b[31:24]
//	2	l2_length[15:0], ip_length[31:16]
//	3	tcp_seq_number[31:0]
//	4	ip_identification[15:0], reserved_4a[31:16]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_TX_MSDU_START_USERX 5

struct tx_msdu_start_userx {
    volatile uint32_t msdu_len                        : 14, //[13:0]
                      first_msdu                      :  1, //[14]
                      last_msdu                       :  1, //[15]
                      l4_chksum_en                    :  1, //[16]
                      l3_chksum_en                    :  1, //[17]
                      encap_type                      :  2, //[19:18]
                      wds                             :  1, //[20]
                      use_ad_b                        :  1, //[21]
                      toggle_eosp                     :  1, //[22]
                      toggle_power_mgmt               :  1, //[23]
                      toggle_more_data                :  1, //[24]
                      strip_vlan                      :  1, //[25]
                      replace_qos_ctl                 :  1, //[26]
                      reserved_0                      :  1, //[27]
                      raw_update_seqnum               :  1, //[28]
                      raw_update_iv                   :  1, //[29]
                      raw_update_retry                :  1, //[30]
                      sw_msdu_param                   :  1; //[31]
    volatile uint32_t tso_enable                      :  1, //[0]
                      reserved_1a                     :  6, //[6:1]
                      tcp_flag                        :  9, //[15:7]
                      tcp_flag_mask                   :  8, //[23:16]
                      reserved_1b                     :  8; //[31:24]
    volatile uint32_t l2_length                       : 16, //[15:0]
                      ip_length                       : 16; //[31:16]
    volatile uint32_t tcp_seq_number                  : 32; //[31:0]
    volatile uint32_t ip_identification               : 16, //[15:0]
                      reserved_4a                     : 16; //[31:16]
};

/*

msdu_len
			
			MSDU length before encapsulation. It is the same value
			as the length in the MSDU packet TLV

first_msdu
			
			If set the current MSDU is the first MSDU in MPDU.  Used
			by the OLE during encapsulation.

last_msdu
			
			If set the current MSDU is the last MSDU in MPDU.  Used
			by the OLE during encapsulation.

l4_chksum_en
			
			If set the TCP/UDP checksum will be updated by HW.  Used
			by the OLE during encapsulation.

l3_chksum_en
			
			If set the IP checksum will be updated by HW.  Used by
			the OLE during encapsulation.  Unsupported in WiFi 1

encap_type
			
			Indicates the encapsulation that HW will perform:
			
			0: RAW: no encapsulation
			
			1: Native WiFi
			
			2: Ethernet 2 (DIX)
			
			3: 802.3 (uses SNAP/LLC)
			
			Used by the OLE during encapsulation.

wds
			
			If set the current packet is 4-address frame.  Required
			because an aggregate can include some frames with 3 address
			format and other frames with 4 address format.  The wds bit
			is only valid when first_msdu bit is set.  Used by the OLE
			during encapsulation.  Used by the PCU to determine offset
			of IV for encryption and to strip MAC header padding for
			transmission.

use_ad_b
			
			Normally in AP mode the DA address is used as the RA. 
			This is normally fine but the use_ad_b bit should be set
			when DA is a multicast/broadcast address but we want to send
			this packet using the destination STA address which will be
			held in the mac_addr_b field of the peer descriptor.

toggle_eosp
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the EOSP bit in the QoS control field of the
			tx_ppdu_start descriptor.  Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>

toggle_power_mgmt
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the power management bit in the frame control
			field of the tx_ppdu_start descriptor.  Used by the OLE
			during encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>

toggle_more_data
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the A-MSDU bit in the QoS control field of the
			tx_ppdu_start descriptor.  Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>

strip_vlan
			
			Strip the VLAN during encapsulation.  Used by the OLE.
			
			<legal all>

replace_qos_ctl
			
			If set the OLE will insert/replace the QoS control field
			in the MPDU.
			
			<legal all>

reserved_0
			
			FW will set to 0, MAC will ignore.  <legal 0>

raw_update_seqnum
			
			If set the tx_ppdu_start seqnum mechanism is used to
			update the sequence number if the MPDU is in RAW format. 
			If clear, the sequence number in the MPDU is unchanged if
			the MPDU is in RAW format.
			
			<legal all>

raw_update_iv
			
			If set the tx_ppdu_start IV mechanism is used to update
			the IV if the MPDU is in RAW format.  If clear, the IV in
			the MPDU is unchanged if the MPDU is in RAW format.
			
			<legal all>

raw_update_retry
			
			If set the tx_ppdu_retry  mechanism is used to update
			the retry bit  if  the MPDU is in RAW format.  If clear,
			the retry bit  in the MPDU is unchanged if the MPDU is in
			RAW format.
			
			<legal all>

sw_msdu_param
			
			These bits are part of the sw_msdu_param.
			
			
			
			They are the remaining SW MSDU parameters and are not
			evaluated by HW. They could be used by SW.
			
			<legal all>

tso_enable
			
			Enable transmit segmentation offload <legal all>

reserved_1a
			
			FW will set to 0, MAC will ignore.  <legal 0>

tcp_flag
			
			TCP flags
			
			{NS,CWR,ECE,URG,ACK,PSH, RST ,SYN,FIN}<legal all>

tcp_flag_mask
			
			TCP flag mask. Tcp_flag is inserted into the header
			based on the mask, if tso is enabled

reserved_1b
			
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

reserved_4a
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/


/* Description		TX_MSDU_START_USERX_0_MSDU_LEN
			
			MSDU length before encapsulation. It is the same value
			as the length in the MSDU packet TLV
*/
#define TX_MSDU_START_USERX_0_MSDU_LEN_OFFSET                        0x00000000
#define TX_MSDU_START_USERX_0_MSDU_LEN_LSB                           0
#define TX_MSDU_START_USERX_0_MSDU_LEN_MASK                          0x00003fff

/* Description		TX_MSDU_START_USERX_0_FIRST_MSDU
			
			If set the current MSDU is the first MSDU in MPDU.  Used
			by the OLE during encapsulation.
*/
#define TX_MSDU_START_USERX_0_FIRST_MSDU_OFFSET                      0x00000000
#define TX_MSDU_START_USERX_0_FIRST_MSDU_LSB                         14
#define TX_MSDU_START_USERX_0_FIRST_MSDU_MASK                        0x00004000

/* Description		TX_MSDU_START_USERX_0_LAST_MSDU
			
			If set the current MSDU is the last MSDU in MPDU.  Used
			by the OLE during encapsulation.
*/
#define TX_MSDU_START_USERX_0_LAST_MSDU_OFFSET                       0x00000000
#define TX_MSDU_START_USERX_0_LAST_MSDU_LSB                          15
#define TX_MSDU_START_USERX_0_LAST_MSDU_MASK                         0x00008000

/* Description		TX_MSDU_START_USERX_0_L4_CHKSUM_EN
			
			If set the TCP/UDP checksum will be updated by HW.  Used
			by the OLE during encapsulation.
*/
#define TX_MSDU_START_USERX_0_L4_CHKSUM_EN_OFFSET                    0x00000000
#define TX_MSDU_START_USERX_0_L4_CHKSUM_EN_LSB                       16
#define TX_MSDU_START_USERX_0_L4_CHKSUM_EN_MASK                      0x00010000

/* Description		TX_MSDU_START_USERX_0_L3_CHKSUM_EN
			
			If set the IP checksum will be updated by HW.  Used by
			the OLE during encapsulation.  Unsupported in WiFi 1
*/
#define TX_MSDU_START_USERX_0_L3_CHKSUM_EN_OFFSET                    0x00000000
#define TX_MSDU_START_USERX_0_L3_CHKSUM_EN_LSB                       17
#define TX_MSDU_START_USERX_0_L3_CHKSUM_EN_MASK                      0x00020000

/* Description		TX_MSDU_START_USERX_0_ENCAP_TYPE
			
			Indicates the encapsulation that HW will perform:
			
			0: RAW: no encapsulation
			
			1: Native WiFi
			
			2: Ethernet 2 (DIX)
			
			3: 802.3 (uses SNAP/LLC)
			
			Used by the OLE during encapsulation.
*/
#define TX_MSDU_START_USERX_0_ENCAP_TYPE_OFFSET                      0x00000000
#define TX_MSDU_START_USERX_0_ENCAP_TYPE_LSB                         18
#define TX_MSDU_START_USERX_0_ENCAP_TYPE_MASK                        0x000c0000

/* Description		TX_MSDU_START_USERX_0_WDS
			
			If set the current packet is 4-address frame.  Required
			because an aggregate can include some frames with 3 address
			format and other frames with 4 address format.  The wds bit
			is only valid when first_msdu bit is set.  Used by the OLE
			during encapsulation.  Used by the PCU to determine offset
			of IV for encryption and to strip MAC header padding for
			transmission.
*/
#define TX_MSDU_START_USERX_0_WDS_OFFSET                             0x00000000
#define TX_MSDU_START_USERX_0_WDS_LSB                                20
#define TX_MSDU_START_USERX_0_WDS_MASK                               0x00100000

/* Description		TX_MSDU_START_USERX_0_USE_AD_B
			
			Normally in AP mode the DA address is used as the RA. 
			This is normally fine but the use_ad_b bit should be set
			when DA is a multicast/broadcast address but we want to send
			this packet using the destination STA address which will be
			held in the mac_addr_b field of the peer descriptor.
*/
#define TX_MSDU_START_USERX_0_USE_AD_B_OFFSET                        0x00000000
#define TX_MSDU_START_USERX_0_USE_AD_B_LSB                           21
#define TX_MSDU_START_USERX_0_USE_AD_B_MASK                          0x00200000

/* Description		TX_MSDU_START_USERX_0_TOGGLE_EOSP
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the EOSP bit in the QoS control field of the
			tx_ppdu_start descriptor.  Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_TOGGLE_EOSP_OFFSET                     0x00000000
#define TX_MSDU_START_USERX_0_TOGGLE_EOSP_LSB                        22
#define TX_MSDU_START_USERX_0_TOGGLE_EOSP_MASK                       0x00400000

/* Description		TX_MSDU_START_USERX_0_TOGGLE_POWER_MGMT
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the power management bit in the frame control
			field of the tx_ppdu_start descriptor.  Used by the OLE
			during encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_TOGGLE_POWER_MGMT_OFFSET               0x00000000
#define TX_MSDU_START_USERX_0_TOGGLE_POWER_MGMT_LSB                  23
#define TX_MSDU_START_USERX_0_TOGGLE_POWER_MGMT_MASK                 0x00800000

/* Description		TX_MSDU_START_USERX_0_TOGGLE_MORE_DATA
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			Toggle the A-MSDU bit in the QoS control field of the
			tx_ppdu_start descriptor.  Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_TOGGLE_MORE_DATA_OFFSET                0x00000000
#define TX_MSDU_START_USERX_0_TOGGLE_MORE_DATA_LSB                   24
#define TX_MSDU_START_USERX_0_TOGGLE_MORE_DATA_MASK                  0x01000000

/* Description		TX_MSDU_START_USERX_0_STRIP_VLAN
			
			Strip the VLAN during encapsulation.  Used by the OLE.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_STRIP_VLAN_OFFSET                      0x00000000
#define TX_MSDU_START_USERX_0_STRIP_VLAN_LSB                         25
#define TX_MSDU_START_USERX_0_STRIP_VLAN_MASK                        0x02000000

/* Description		TX_MSDU_START_USERX_0_REPLACE_QOS_CTL
			
			If set the OLE will insert/replace the QoS control field
			in the MPDU.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_REPLACE_QOS_CTL_OFFSET                 0x00000000
#define TX_MSDU_START_USERX_0_REPLACE_QOS_CTL_LSB                    26
#define TX_MSDU_START_USERX_0_REPLACE_QOS_CTL_MASK                   0x04000000

/* Description		TX_MSDU_START_USERX_0_RESERVED_0
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define TX_MSDU_START_USERX_0_RESERVED_0_OFFSET                      0x00000000
#define TX_MSDU_START_USERX_0_RESERVED_0_LSB                         27
#define TX_MSDU_START_USERX_0_RESERVED_0_MASK                        0x08000000

/* Description		TX_MSDU_START_USERX_0_RAW_UPDATE_SEQNUM
			
			If set the tx_ppdu_start seqnum mechanism is used to
			update the sequence number if the MPDU is in RAW format. 
			If clear, the sequence number in the MPDU is unchanged if
			the MPDU is in RAW format.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_RAW_UPDATE_SEQNUM_OFFSET               0x00000000
#define TX_MSDU_START_USERX_0_RAW_UPDATE_SEQNUM_LSB                  28
#define TX_MSDU_START_USERX_0_RAW_UPDATE_SEQNUM_MASK                 0x10000000

/* Description		TX_MSDU_START_USERX_0_RAW_UPDATE_IV
			
			If set the tx_ppdu_start IV mechanism is used to update
			the IV if the MPDU is in RAW format.  If clear, the IV in
			the MPDU is unchanged if the MPDU is in RAW format.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_RAW_UPDATE_IV_OFFSET                   0x00000000
#define TX_MSDU_START_USERX_0_RAW_UPDATE_IV_LSB                      29
#define TX_MSDU_START_USERX_0_RAW_UPDATE_IV_MASK                     0x20000000

/* Description		TX_MSDU_START_USERX_0_RAW_UPDATE_RETRY
			
			If set the tx_ppdu_retry  mechanism is used to update
			the retry bit  if  the MPDU is in RAW format.  If clear,
			the retry bit  in the MPDU is unchanged if the MPDU is in
			RAW format.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_RAW_UPDATE_RETRY_OFFSET                0x00000000
#define TX_MSDU_START_USERX_0_RAW_UPDATE_RETRY_LSB                   30
#define TX_MSDU_START_USERX_0_RAW_UPDATE_RETRY_MASK                  0x40000000

/* Description		TX_MSDU_START_USERX_0_SW_MSDU_PARAM
			
			These bits are part of the sw_msdu_param.
			
			
			
			They are the remaining SW MSDU parameters and are not
			evaluated by HW. They could be used by SW.
			
			<legal all>
*/
#define TX_MSDU_START_USERX_0_SW_MSDU_PARAM_OFFSET                   0x00000000
#define TX_MSDU_START_USERX_0_SW_MSDU_PARAM_LSB                      31
#define TX_MSDU_START_USERX_0_SW_MSDU_PARAM_MASK                     0x80000000

/* Description		TX_MSDU_START_USERX_1_TSO_ENABLE
			
			Enable transmit segmentation offload <legal all>
*/
#define TX_MSDU_START_USERX_1_TSO_ENABLE_OFFSET                      0x00000004
#define TX_MSDU_START_USERX_1_TSO_ENABLE_LSB                         0
#define TX_MSDU_START_USERX_1_TSO_ENABLE_MASK                        0x00000001

/* Description		TX_MSDU_START_USERX_1_RESERVED_1A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define TX_MSDU_START_USERX_1_RESERVED_1A_OFFSET                     0x00000004
#define TX_MSDU_START_USERX_1_RESERVED_1A_LSB                        1
#define TX_MSDU_START_USERX_1_RESERVED_1A_MASK                       0x0000007e

/* Description		TX_MSDU_START_USERX_1_TCP_FLAG
			
			TCP flags
			
			{NS,CWR,ECE,URG,ACK,PSH, RST ,SYN,FIN}<legal all>
*/
#define TX_MSDU_START_USERX_1_TCP_FLAG_OFFSET                        0x00000004
#define TX_MSDU_START_USERX_1_TCP_FLAG_LSB                           7
#define TX_MSDU_START_USERX_1_TCP_FLAG_MASK                          0x0000ff80

/* Description		TX_MSDU_START_USERX_1_TCP_FLAG_MASK
			
			TCP flag mask. Tcp_flag is inserted into the header
			based on the mask, if tso is enabled
*/
#define TX_MSDU_START_USERX_1_TCP_FLAG_MASK_OFFSET                   0x00000004
#define TX_MSDU_START_USERX_1_TCP_FLAG_MASK_LSB                      16
#define TX_MSDU_START_USERX_1_TCP_FLAG_MASK_MASK                     0x00ff0000

/* Description		TX_MSDU_START_USERX_1_RESERVED_1B
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define TX_MSDU_START_USERX_1_RESERVED_1B_OFFSET                     0x00000004
#define TX_MSDU_START_USERX_1_RESERVED_1B_LSB                        24
#define TX_MSDU_START_USERX_1_RESERVED_1B_MASK                       0xff000000

/* Description		TX_MSDU_START_USERX_2_L2_LENGTH
			
			L2 length for the msdu, if tso is enabled <legal all>
*/
#define TX_MSDU_START_USERX_2_L2_LENGTH_OFFSET                       0x00000008
#define TX_MSDU_START_USERX_2_L2_LENGTH_LSB                          0
#define TX_MSDU_START_USERX_2_L2_LENGTH_MASK                         0x0000ffff

/* Description		TX_MSDU_START_USERX_2_IP_LENGTH
			
			Ip length for the msdu, if tso is enabled <legal all>
*/
#define TX_MSDU_START_USERX_2_IP_LENGTH_OFFSET                       0x00000008
#define TX_MSDU_START_USERX_2_IP_LENGTH_LSB                          16
#define TX_MSDU_START_USERX_2_IP_LENGTH_MASK                         0xffff0000

/* Description		TX_MSDU_START_USERX_3_TCP_SEQ_NUMBER
			
			Tcp_seq_number for the msdu, if tso is enabled <legal
			all>
*/
#define TX_MSDU_START_USERX_3_TCP_SEQ_NUMBER_OFFSET                  0x0000000c
#define TX_MSDU_START_USERX_3_TCP_SEQ_NUMBER_LSB                     0
#define TX_MSDU_START_USERX_3_TCP_SEQ_NUMBER_MASK                    0xffffffff

/* Description		TX_MSDU_START_USERX_4_IP_IDENTIFICATION
			
			Ip_identification for the msdu, if tso is enabled <legal
			all>
*/
#define TX_MSDU_START_USERX_4_IP_IDENTIFICATION_OFFSET               0x00000010
#define TX_MSDU_START_USERX_4_IP_IDENTIFICATION_LSB                  0
#define TX_MSDU_START_USERX_4_IP_IDENTIFICATION_MASK                 0x0000ffff

/* Description		TX_MSDU_START_USERX_4_RESERVED_4A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define TX_MSDU_START_USERX_4_RESERVED_4A_OFFSET                     0x00000010
#define TX_MSDU_START_USERX_4_RESERVED_4A_LSB                        16
#define TX_MSDU_START_USERX_4_RESERVED_4A_MASK                       0xffff0000


#endif // _TX_MSDU_START_USERX_H_
