// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// EDIT WITH CAUTION!  These definitions are tied to a particular hardware layout

#ifndef _HWSCHED_DESC_H_
#define _HWSCHED_DESC_H_
#if !defined(__ASSEMBLER__)
#endif

#include <datastruct/tx_cv_start.h>
#include <tlv/tx_buffers_setup.h>
#include <tlv/queue_head.h>
#include <datastruct/mpdu_queue_ext_common.h>
#include <datastruct/tx_rate_setting.h>
#include <datastruct/pdg_setup_userx.h>
#include <tlv/pdg_fes_setup.h>
#include <tlv/pdg_bypass.h>
#include <tlv/pcu_ppdu_setup.h>
#include <interface/tx_service.h>
#include <datastruct/vht_sig_b_mac_su40.h>
#include <datastruct/vht_sig_b_mac_su80.h>
#include <datastruct/vht_sig_b_mac_mu40.h>
#include <datastruct/vht_sig_b_mac_mu80.h>
#include <interface/l_sig_b.h>
#include <interface/l_sig_a.h>
#include <interface/ht_sig.h>
#include <interface/vht_sig_b_su20.h>
#include <interface/vht_sig_b_su40.h>
#include <interface/vht_sig_b_su80.h>
#include <interface/vht_sig_b_mu20.h>
#include <interface/vht_sig_b_mu40.h>
#include <interface/vht_sig_b_mu80.h>
#include <interface/vht_sig_a.h>
#include <datastruct/pre_tx_phy_desc.h>
#include <tlv/mprot_tx_phy_desc.h>
#include <tlv/ppdu_tx_phy_desc.h>
#include <datastruct/tx_pcu_info.h>
#include <tlv/mprot_ss_11b_info.h>
#include <tlv/mprot_ss_11a_info.h>
#include <tlv/mprot_ss_11n_info.h>
#include <tlv/mprot_ss_11ac_su_info.h>
#include <tlv/ppdu_ss_11b_info.h>
#include <tlv/ppdu_ss_11a_info.h>
#include <tlv/ppdu_ss_11n_info.h>
#include <tlv/ppdu_ss_11ac_su_info.h>
#include <tlv/ppdu_ss_11ac_mu_info.h>
#include <tlv/mpdu_length.h>
#include <command/scheduler_cmd.h>
#include <tlv/tx_fes_setup.h>

/** Software cb/private/meta data structure.
 * Tag it with DUMMY_TLV so hardware will ignore this TLV.
 */
struct hwdesc_info {
    volatile uint32_t tag;
    volatile uint32_t desc_type;
    volatile uint32_t num_user;
    struct scheduler_cmd hwsch_cmd; /** this will be copied over to hw ring buffer.*/
};

/** Software uses this TLV to pad th bytes that needs to be skipped by the hardware.
 * Tag it with DUMMY_TLV so hardware will ignore this TLV.
 */ 
struct sched_pad_tlv {
    volatile uint32_t tag;
};

struct tx_fes_setup_tlv {
    volatile uint32_t tag;
    struct tx_fes_setup fes_setup;
};

struct tx_cv_start_tlv {
    volatile uint32_t tag;
    struct tx_cv_start tx_cv;
};

struct tx_buffers_setup_tlv {
    volatile uint32_t tag;
    struct tx_buffers_setup tx_setup;
};

struct queue_head_tlv {
    volatile uint32_t tag;
    struct queue_head qhead;
};

struct q_ext_ref_tlv {
    volatile uint32_t tag;
    volatile uint32_t q_ext_ref;
};

struct pdg_fes_setup_tlv {
    volatile uint32_t tag;
    struct pdg_fes_setup pdg_fes;
};

struct pdg_setup_user_tlv {
    volatile uint32_t tag;
    struct pdg_setup_userx pdg_setup;
};

struct mpdu_length_tlv {
    volatile uint32_t tag;
    struct mpdu_length mpdu_len[64]; // MAX MPDU in AMPDU
};

struct tx_fes_setup_complete_tlv {
    volatile uint32_t tag;
};

struct hwsched_su_ext {
    struct mpdu_queue_ext_common qext_user;
};

struct hwsched_mu_ext {
    struct mpdu_queue_ext_common qext_user0;
    struct mpdu_queue_ext_common qext_user1;
    struct mpdu_queue_ext_common qext_user2;
};

struct pcu_ppdu_setup_tlv {
    volatile uint32_t tag;
    struct pcu_ppdu_setup ppdu_setup;
};

struct mprot_tx_phy_desc_tlv {
    volatile uint32_t tag;
    struct mprot_tx_phy_desc tx_phy_desc;
};

struct ppdu_tx_phy_desc_tlv {
    volatile uint32_t tag;
    struct ppdu_tx_phy_desc tx_phy_desc;
};

struct mprot_ss_11b_info_tlv {
    volatile uint32_t tag;
    struct mprot_ss_11b_info mproto_11b_info;
    struct sched_pad_tlv pad_tlv; 
};

struct mprot_ss_11a_info_tlv {
    volatile uint32_t tag;
    struct mprot_ss_11a_info mproto_11a_info;
    struct sched_pad_tlv pad_tlv; 
};

struct mprot_ss_11n_info_tlv {
    volatile uint32_t tag;
    struct mprot_ss_11n_info mproto_11n_info;
    struct sched_pad_tlv pad_tlv; 
};

struct mprot_ss_11ac_su_info_tlv {
    volatile uint32_t tag;
    struct mprot_ss_11ac_su_info mproto_11ac_info;
    struct sched_pad_tlv pad_tlv; 
};

struct ppdu_ss_11b_info_tlv {
    volatile uint32_t tag;
    struct ppdu_ss_11b_info ppdu_11b_info;
    struct sched_pad_tlv pad_tlv; 
};

struct ppdu_ss_11a_info_tlv {
    volatile uint32_t tag;
    struct ppdu_ss_11a_info ppdu_11a_info;
    struct sched_pad_tlv pad_tlv; 
};

struct ppdu_ss_11n_info_tlv {
    volatile uint32_t tag;
    struct ppdu_ss_11n_info ppdu_11n_info;
    struct sched_pad_tlv pad_tlv; 
};

struct ppdu_ss_11ac_su_info_tlv {
    volatile uint32_t tag;
    struct ppdu_ss_11ac_su_info ppdu_11ac_su_info;
    struct sched_pad_tlv pad_tlv; 
};

struct ppdu_ss_11ac_mu_info_tlv {
    volatile uint32_t tag;
    struct ppdu_ss_11ac_mu_info ppdu_11ac_mu_info;
    struct sched_pad_tlv pad_tlv; 
};

struct pdg_bypass_su_tlv {
    volatile uint32_t tag;
    struct pdg_bypass bypass;
    struct pcu_ppdu_setup_tlv ppdu_setup_tlv;
    struct mprot_tx_phy_desc_tlv mproto_phy_desc_tlv;
    struct ppdu_tx_phy_desc_tlv tx_phy_desc_tlv;
    union {
        struct mprot_ss_11b_info_tlv mproto_11b_info_tlv;
        struct mprot_ss_11a_info_tlv mproto_11a_info_tlv;
        struct mprot_ss_11n_info_tlv mproto_11n_info_tlv;
        struct mprot_ss_11ac_su_info_tlv mproto_11ac_info_tlv;
    } mproto_info;
    union {
        struct ppdu_ss_11b_info_tlv ppdu_11b_info_tlv;
        struct ppdu_ss_11a_info_tlv ppdu_11a_info_tlv;
        struct ppdu_ss_11n_info_tlv ppdu_11n_info_tlv;
        struct ppdu_ss_11ac_su_info_tlv ppdu_11ac_info_tlv;
    } ppdu_info;
};

struct pdg_bypass_mu_tlv {
    volatile uint32_t tag;
    struct pdg_bypass bypass;
    struct pcu_ppdu_setup_tlv ppdu_setup_tlv;
    struct mprot_tx_phy_desc_tlv mproto_phy_desc_tlv;
    struct ppdu_tx_phy_desc_tlv tx_phy_desc_tlv;
    union {
        struct mprot_ss_11b_info_tlv mproto_11b_info_tlv;
        struct mprot_ss_11a_info_tlv mproto_11a_info_tlv;
        struct mprot_ss_11n_info_tlv mproto_11n_info_tlv;
        struct mprot_ss_11ac_su_info_tlv mproto_11ac_info_tlv;
    } mproto_info;
    union {
        struct ppdu_ss_11b_info_tlv ppdu_11b_info_tlv;
        struct ppdu_ss_11a_info_tlv ppdu_11a_info_tlv;
        struct ppdu_ss_11n_info_tlv ppdu_11n_info_tlv;
        struct ppdu_ss_11ac_mu_info_tlv ppdu_11ac_info_tlv;
    } ppdu_info;
};

struct hwsched_su_pdg_desc {
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_cv_start_tlv tx_cv_tlv;
    struct tx_buffers_setup_tlv tx_setup_tlv;
    struct queue_head qhead_tlv;
    struct q_ext_ref_tlv q_ext_ref_tlv;
    struct pdg_fes_setup_tlv pdg_fes_tlv;
    struct pdg_setup_user_tlv pdg_setup_tlv;
    struct mpdu_length_tlv mpdu_len_user_tlv;
    struct tx_fes_setup_complete_tlv fes_complete_tlv;
    struct hwsched_su_ext su_ext;
};

struct hwsched_mu_pdg_desc {
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_cv_start_tlv tx_cv_user0_tlv;
    struct tx_cv_start_tlv tx_cv_user1_tlv;
    struct tx_cv_start_tlv tx_cv_user2_tlv;
    struct tx_buffers_setup_tlv tx_setup_tlv;
    struct queue_head qhead_user0_tlv;
    struct queue_head qhead_user1_tlv;
    struct queue_head qhead_user2_tlv;
    struct q_ext_ref_tlv q_ext_ref_user0_tlv;
    struct q_ext_ref_tlv q_ext_ref_user1_tlv;
    struct q_ext_ref_tlv q_ext_ref_user2_tlv;
    struct pdg_fes_setup_tlv pdg_fes_tlv;
    struct pdg_setup_user_tlv pdg_setup_tlv;
    struct mpdu_length_tlv mpdu_len_user0_tlv;
    struct mpdu_length_tlv mpdu_len_user1_tlv;
    struct mpdu_length_tlv mpdu_len_user2_tlv;
    struct tx_fes_setup_complete_tlv fes_complete_tlv;
    struct hwsched_mu_ext mu_ext;
};

struct hwsched_su_desc {
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_cv_start_tlv tx_cv_tlv;
    struct tx_buffers_setup_tlv tx_setup_tlv;
    struct queue_head qhead_tlv;
    struct q_ext_ref_tlv q_ext_ref_tlv;
    struct pdg_bypass_su_tlv pdg_bypass_tlv;
    struct tx_fes_setup_complete_tlv fes_complete_tlv;
    struct hwsched_su_ext su_ext;
};

struct hwsched_mu_desc {
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_fes_setup_tlv fes_setup_tlv;
    struct tx_cv_start_tlv tx_cv_user0_tlv;
    struct tx_cv_start_tlv tx_cv_user1_tlv;
    struct tx_cv_start_tlv tx_cv_user2_tlv;
    struct tx_buffers_setup_tlv tx_setup_tlv;
    struct queue_head qhead_user0_tlv;
    struct queue_head qhead_user1_tlv;
    struct queue_head qhead_user2_tlv;
    struct q_ext_ref_tlv q_ext_ref_user0_tlv;
    struct q_ext_ref_tlv q_ext_ref_user1_tlv;
    struct q_ext_ref_tlv q_ext_ref_user2_tlv;
    struct pdg_bypass_mu_tlv pdg_bypass_tlv;
    struct tx_fes_setup_complete_tlv fes_complete_tlv;
    struct hwsched_mu_ext mu_ext;
};

struct hwsched_desc {
    volatile uint32_t sched_tlv_tag;
    struct hwdesc_info info;
    union {
        struct hwsched_su_desc su_desc;
        struct hwsched_su_pdg_desc su_pdg_desc;
        struct hwsched_mu_desc mu_desc;
        struct hwsched_mu_pdg_desc mu_pdg_desc;
    } desc;
};

#endif // _HWSCHED_DESC_H_
