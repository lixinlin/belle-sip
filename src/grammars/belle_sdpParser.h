/*
 * Copyright (c) 2012-2019 Belledonne Communications SARL.
 *
 * This file is part of belle-sip.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_belle_sdpParser_H
#define _belle_sdpParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#include "belle-sip/defs.h"
#include "belle-sip/types.h"
#include "belle-sip/belle-sdp.h"
#include "parserutils.h"


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct belle_sdpParser_Ctx_struct belle_sdpParser, * pbelle_sdpParser;



/*
    belle-sip - SIP (RFC3261) library.
    Copyright (C) 2010  Belledonne Communications SARL

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma GCC diagnostic ignored "-Wparentheses"
#pragma GCC diagnostic ignored "-Wunused"
#ifndef __clang__
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */

typedef struct belle_sdpParser_session_description_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_session_description_t* ret;
}
    belle_sdpParser_session_description_return;



typedef struct belle_sdpParser_version_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_version_return;



typedef struct belle_sdpParser_origin_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_origin_t* ret;
}
    belle_sdpParser_origin_return;



typedef struct belle_sdpParser_session_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_session_name_return;



typedef struct belle_sdpParser_info_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_info_t* ret;
}
    belle_sdpParser_info_return;



typedef struct belle_sdpParser_info_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_info_value_return;



typedef struct belle_sdpParser_uri_field_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_uri_field_return;



typedef struct belle_sdpParser_email_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_email_t* ret;
}
    belle_sdpParser_email_return;



typedef struct belle_sdpParser_phone_field_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_phone_field_return;



typedef struct belle_sdpParser_connection_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_connection_t* ret;
}
    belle_sdpParser_connection_return;



typedef struct belle_sdpParser_bandwidth_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_bandwidth_t* ret;
}
    belle_sdpParser_bandwidth_return;



typedef struct belle_sdpParser_time_field_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_time_field_return;



typedef struct belle_sdpParser_repeat_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_repeat_time_return;



typedef struct belle_sdpParser_zone_adjustments_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_zone_adjustments_return;



typedef struct belle_sdpParser_key_field_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_key_field_return;



typedef struct belle_sdpParser_key_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_key_value_return;



typedef struct belle_sdpParser_attribute_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_attribute_t* ret;
}
    belle_sdpParser_attribute_return;



typedef struct belle_sdpParser_attribute_content_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_attribute_t* ret;
}
    belle_sdpParser_attribute_content_return;



typedef struct belle_sdpParser_rtcp_xr_attribute_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_rtcp_xr_attribute_t* ret;
}
    belle_sdpParser_rtcp_xr_attribute_return;



typedef struct belle_sdpParser_rtcp_xr_attribute_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_attribute_value_return;



typedef struct belle_sdpParser_pkt_loss_rle_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_pkt_loss_rle_return;



typedef struct belle_sdpParser_pkt_dup_rle_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_pkt_dup_rle_return;



typedef struct belle_sdpParser_pkt_rcpt_times_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_pkt_rcpt_times_return;



typedef struct belle_sdpParser_rcvr_rtt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rcvr_rtt_return;



typedef struct belle_sdpParser_stat_summary_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_stat_summary_return;



typedef struct belle_sdpParser_voip_metrics_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_voip_metrics_return;



typedef struct belle_sdpParser_rtcp_xr_stat_summary_flag_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_stat_summary_flag_return;



typedef struct belle_sdpParser_rtcp_xr_max_size_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_max_size_return;



typedef struct belle_sdpParser_rtcp_fb_attribute_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_rtcp_fb_attribute_t* ret;
}
    belle_sdpParser_rtcp_fb_attribute_return;



typedef struct belle_sdpParser_rtcp_fb_pt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_pt_return;



typedef struct belle_sdpParser_rtcp_fb_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_val_return;



typedef struct belle_sdpParser_rtcp_fb_ack_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_ack_val_return;



typedef struct belle_sdpParser_rtcp_fb_nack_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_nack_val_return;



typedef struct belle_sdpParser_rtcp_fb_trr_int_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_trr_int_val_return;



typedef struct belle_sdpParser_rtcp_fb_ccm_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_ccm_val_return;



typedef struct belle_sdpParser_rtcp_fb_id_val_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_id_val_return;



typedef struct belle_sdpParser_rtcp_fb_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_param_return;



typedef struct belle_sdpParser_rtcp_fb_ack_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_ack_param_return;



typedef struct belle_sdpParser_rtcp_fb_nack_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_nack_param_return;



typedef struct belle_sdpParser_rtcp_fb_pli_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_pli_param_return;



typedef struct belle_sdpParser_rtcp_fb_sli_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_sli_param_return;



typedef struct belle_sdpParser_rtcp_fb_rpsi_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_rpsi_param_return;



typedef struct belle_sdpParser_rtcp_fb_app_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_app_param_return;



typedef struct belle_sdpParser_rtcp_fb_ccm_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_ccm_param_return;



typedef struct belle_sdpParser_rtcp_fb_fir_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_fir_param_return;



typedef struct belle_sdpParser_rtcp_fb_tmmbr_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_tmmbr_param_return;



typedef struct belle_sdpParser_rtcp_fb_tmmbr_smaxpr_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_tmmbr_smaxpr_param_return;



typedef struct belle_sdpParser_rtcp_fb_tmmbr_smaxpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_tmmbr_smaxpr_return;



typedef struct belle_sdpParser_rtcp_fb_token_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_token_param_return;



typedef struct belle_sdpParser_media_description_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_media_description_t* ret;
}
    belle_sdpParser_media_description_return;



typedef struct belle_sdpParser_media_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

    belle_sdp_media_t* ret;
}
    belle_sdpParser_media_return;



typedef struct belle_sdpParser_media_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_media_value_return;



typedef struct belle_sdpParser_fmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_fmt_return;



typedef struct belle_sdpParser_proto_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_proto_return;



typedef struct belle_sdpParser_port_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_port_return;



typedef struct belle_sdpParser_attribute_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_attribute_name_return;



typedef struct belle_sdpParser_attribute_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_attribute_value_return;



typedef struct belle_sdpParser_rtcp_xr_attribute_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_attribute_name_return;



typedef struct belle_sdpParser_rtcp_xr_rcvr_rtt_mode_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_rcvr_rtt_mode_return;



typedef struct belle_sdpParser_rtcp_xr_stat_summary_flag_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_xr_stat_summary_flag_value_return;



typedef struct belle_sdpParser_rtcp_fb_attribute_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_rtcp_fb_attribute_name_return;



typedef struct belle_sdpParser_sess_id_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_sess_id_return;



typedef struct belle_sdpParser_sess_version_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_sess_version_return;



typedef struct belle_sdpParser_connection_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_connection_address_return;



typedef struct belle_sdpParser_multicast_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_multicast_address_return;



typedef struct belle_sdpParser_ttl_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_ttl_return;



typedef struct belle_sdpParser_start_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_start_time_return;



typedef struct belle_sdpParser_stop_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_stop_time_return;



typedef struct belle_sdpParser_sdp_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_sdp_time_return;



typedef struct belle_sdpParser_repeat_interval_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_repeat_interval_return;



typedef struct belle_sdpParser_typed_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_typed_time_return;



typedef struct belle_sdpParser_fixed_len_time_unit_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_fixed_len_time_unit_return;



typedef struct belle_sdpParser_bwtype_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_bwtype_return;



typedef struct belle_sdpParser_bandwidth_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_bandwidth_value_return;



typedef struct belle_sdpParser_username_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_username_return;



typedef struct belle_sdpParser_email_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_email_address_return;



typedef struct belle_sdpParser_uri_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_uri_return;



typedef struct belle_sdpParser_phone_number_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_phone_number_return;



typedef struct belle_sdpParser_phone_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_phone_return;



typedef struct belle_sdpParser_nettype_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_nettype_return;



typedef struct belle_sdpParser_addrtype_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_addrtype_return;



typedef struct belle_sdpParser_addr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_addr_return;



typedef struct belle_sdpParser_multicast_part_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_multicast_part_return;



typedef struct belle_sdpParser_fqdn_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_fqdn_return;



typedef struct belle_sdpParser_domainlabel_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_domainlabel_return;



typedef struct belle_sdpParser_toplabel_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_toplabel_return;



typedef struct belle_sdpParser_unicast_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_unicast_address_return;



typedef struct belle_sdpParser_ipv4_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_ipv4_address_return;



typedef struct belle_sdpParser_ipv6_address_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_ipv6_address_return;



typedef struct belle_sdpParser_hexpart_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_hexpart_return;



typedef struct belle_sdpParser_hexseq_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_hexseq_return;



typedef struct belle_sdpParser_hex4_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_hex4_return;



typedef struct belle_sdpParser_text_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_text_return;



typedef struct belle_sdpParser_byte_string_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_byte_string_return;



typedef struct belle_sdpParser_decimal_uchar_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_decimal_uchar_return;



typedef struct belle_sdpParser_integer_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_integer_return;



typedef struct belle_sdpParser_email_safe_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_email_safe_return;



typedef struct belle_sdpParser_token_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_token_return;



typedef struct belle_sdpParser_alpha_num_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_alpha_num_return;



typedef struct belle_sdpParser_hexdigit_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_hexdigit_return;



typedef struct belle_sdpParser_word_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_word_return;



typedef struct belle_sdpParser_alpha_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    belle_sdpParser_alpha_return;




/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the session_description scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_session_descriptionPush().
 */
typedef struct  belle_sdpParser_session_description_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_session_description_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_session_description_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_session_description_SCOPE, * pbelle_sdpParser_session_description_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the origin scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_originPush().
 */
typedef struct  belle_sdpParser_origin_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_origin_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_origin_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_origin_SCOPE, * pbelle_sdpParser_origin_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the info scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_infoPush().
 */
typedef struct  belle_sdpParser_info_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_info_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_info_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_info_SCOPE, * pbelle_sdpParser_info_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the email scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_emailPush().
 */
typedef struct  belle_sdpParser_email_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_email_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_email_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_email_SCOPE, * pbelle_sdpParser_email_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the connection scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_connectionPush().
 */
typedef struct  belle_sdpParser_connection_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_connection_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_connection_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_connection_SCOPE, * pbelle_sdpParser_connection_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the bandwidth scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_bandwidthPush().
 */
typedef struct  belle_sdpParser_bandwidth_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_bandwidth_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_bandwidth_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_bandwidth_SCOPE, * pbelle_sdpParser_bandwidth_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the attribute scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_attributePush().
 */
typedef struct  belle_sdpParser_attribute_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_attribute_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    int has_value;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_attribute_SCOPE, * pbelle_sdpParser_attribute_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the rtcp_xr_attribute scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_rtcp_xr_attributePush().
 */
typedef struct  belle_sdpParser_rtcp_xr_attribute_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_rtcp_xr_attribute_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_rtcp_xr_attribute_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_rtcp_xr_attribute_SCOPE, * pbelle_sdpParser_rtcp_xr_attribute_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the rtcp_fb_attribute scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_rtcp_fb_attributePush().
 */
typedef struct  belle_sdpParser_rtcp_fb_attribute_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_rtcp_fb_attribute_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_rtcp_fb_attribute_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_rtcp_fb_attribute_SCOPE, * pbelle_sdpParser_rtcp_fb_attribute_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the media_description scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_media_descriptionPush().
 */
typedef struct  belle_sdpParser_media_description_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_media_description_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_media_description_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_media_description_SCOPE, * pbelle_sdpParser_media_description_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the media scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_mediaPush().
 */
typedef struct  belle_sdpParser_media_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_media_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    belle_sdp_media_t* current;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_media_SCOPE, * pbelle_sdpParser_media_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the fmt scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  belle_sdpParser_fmtPush().
 */
typedef struct  belle_sdpParser_fmt_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct belle_sdpParser_fmt_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    int is_number;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    belle_sdpParser_fmt_SCOPE, * pbelle_sdpParser_fmt_SCOPE;


/** Context tracking structure for 
belle_sdpParser

 */
struct belle_sdpParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  session_description stack for use by pbelle_sdpParser_session_descriptionPush()
     *  and pbelle_sdpParser_session_descriptionPop()
     */
    pANTLR3_STACK pbelle_sdpParser_session_descriptionStack;
    ANTLR3_UINT32 pbelle_sdpParser_session_descriptionStack_limit;
    pbelle_sdpParser_session_description_SCOPE   (*pbelle_sdpParser_session_descriptionPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_session_description_SCOPE   pbelle_sdpParser_session_descriptionTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  origin stack for use by pbelle_sdpParser_originPush()
     *  and pbelle_sdpParser_originPop()
     */
    pANTLR3_STACK pbelle_sdpParser_originStack;
    ANTLR3_UINT32 pbelle_sdpParser_originStack_limit;
    pbelle_sdpParser_origin_SCOPE   (*pbelle_sdpParser_originPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_origin_SCOPE   pbelle_sdpParser_originTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  info stack for use by pbelle_sdpParser_infoPush()
     *  and pbelle_sdpParser_infoPop()
     */
    pANTLR3_STACK pbelle_sdpParser_infoStack;
    ANTLR3_UINT32 pbelle_sdpParser_infoStack_limit;
    pbelle_sdpParser_info_SCOPE   (*pbelle_sdpParser_infoPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_info_SCOPE   pbelle_sdpParser_infoTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  email stack for use by pbelle_sdpParser_emailPush()
     *  and pbelle_sdpParser_emailPop()
     */
    pANTLR3_STACK pbelle_sdpParser_emailStack;
    ANTLR3_UINT32 pbelle_sdpParser_emailStack_limit;
    pbelle_sdpParser_email_SCOPE   (*pbelle_sdpParser_emailPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_email_SCOPE   pbelle_sdpParser_emailTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  connection stack for use by pbelle_sdpParser_connectionPush()
     *  and pbelle_sdpParser_connectionPop()
     */
    pANTLR3_STACK pbelle_sdpParser_connectionStack;
    ANTLR3_UINT32 pbelle_sdpParser_connectionStack_limit;
    pbelle_sdpParser_connection_SCOPE   (*pbelle_sdpParser_connectionPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_connection_SCOPE   pbelle_sdpParser_connectionTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  bandwidth stack for use by pbelle_sdpParser_bandwidthPush()
     *  and pbelle_sdpParser_bandwidthPop()
     */
    pANTLR3_STACK pbelle_sdpParser_bandwidthStack;
    ANTLR3_UINT32 pbelle_sdpParser_bandwidthStack_limit;
    pbelle_sdpParser_bandwidth_SCOPE   (*pbelle_sdpParser_bandwidthPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_bandwidth_SCOPE   pbelle_sdpParser_bandwidthTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  attribute stack for use by pbelle_sdpParser_attributePush()
     *  and pbelle_sdpParser_attributePop()
     */
    pANTLR3_STACK pbelle_sdpParser_attributeStack;
    ANTLR3_UINT32 pbelle_sdpParser_attributeStack_limit;
    pbelle_sdpParser_attribute_SCOPE   (*pbelle_sdpParser_attributePush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_attribute_SCOPE   pbelle_sdpParser_attributeTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  rtcp_xr_attribute stack for use by pbelle_sdpParser_rtcp_xr_attributePush()
     *  and pbelle_sdpParser_rtcp_xr_attributePop()
     */
    pANTLR3_STACK pbelle_sdpParser_rtcp_xr_attributeStack;
    ANTLR3_UINT32 pbelle_sdpParser_rtcp_xr_attributeStack_limit;
    pbelle_sdpParser_rtcp_xr_attribute_SCOPE   (*pbelle_sdpParser_rtcp_xr_attributePush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_rtcp_xr_attribute_SCOPE   pbelle_sdpParser_rtcp_xr_attributeTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  rtcp_fb_attribute stack for use by pbelle_sdpParser_rtcp_fb_attributePush()
     *  and pbelle_sdpParser_rtcp_fb_attributePop()
     */
    pANTLR3_STACK pbelle_sdpParser_rtcp_fb_attributeStack;
    ANTLR3_UINT32 pbelle_sdpParser_rtcp_fb_attributeStack_limit;
    pbelle_sdpParser_rtcp_fb_attribute_SCOPE   (*pbelle_sdpParser_rtcp_fb_attributePush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_rtcp_fb_attribute_SCOPE   pbelle_sdpParser_rtcp_fb_attributeTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  media_description stack for use by pbelle_sdpParser_media_descriptionPush()
     *  and pbelle_sdpParser_media_descriptionPop()
     */
    pANTLR3_STACK pbelle_sdpParser_media_descriptionStack;
    ANTLR3_UINT32 pbelle_sdpParser_media_descriptionStack_limit;
    pbelle_sdpParser_media_description_SCOPE   (*pbelle_sdpParser_media_descriptionPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_media_description_SCOPE   pbelle_sdpParser_media_descriptionTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  media stack for use by pbelle_sdpParser_mediaPush()
     *  and pbelle_sdpParser_mediaPop()
     */
    pANTLR3_STACK pbelle_sdpParser_mediaStack;
    ANTLR3_UINT32 pbelle_sdpParser_mediaStack_limit;
    pbelle_sdpParser_media_SCOPE   (*pbelle_sdpParser_mediaPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_media_SCOPE   pbelle_sdpParser_mediaTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  fmt stack for use by pbelle_sdpParser_fmtPush()
     *  and pbelle_sdpParser_fmtPop()
     */
    pANTLR3_STACK pbelle_sdpParser_fmtStack;
    ANTLR3_UINT32 pbelle_sdpParser_fmtStack_limit;
    pbelle_sdpParser_fmt_SCOPE   (*pbelle_sdpParser_fmtPush)(struct belle_sdpParser_Ctx_struct * ctx);
    pbelle_sdpParser_fmt_SCOPE   pbelle_sdpParser_fmtTop;




     belle_sdpParser_session_description_return
     (*session_description)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_version_return
     (*version)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_origin_return
     (*origin)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_session_name_return
     (*session_name)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_info_return
     (*info)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_info_value_return
     (*info_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_uri_field_return
     (*uri_field)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_email_return
     (*email)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_phone_field_return
     (*phone_field)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_connection_return
     (*connection)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_bandwidth_return
     (*bandwidth)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_time_field_return
     (*time_field)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_repeat_time_return
     (*repeat_time)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_zone_adjustments_return
     (*zone_adjustments)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_key_field_return
     (*key_field)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_key_value_return
     (*key_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_attribute_return
     (*attribute)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_attribute_content_return
     (*attribute_content)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_attribute_return
     (*rtcp_xr_attribute)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_attribute_value_return
     (*rtcp_xr_attribute_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_pkt_loss_rle_return
     (*pkt_loss_rle)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_pkt_dup_rle_return
     (*pkt_dup_rle)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_pkt_rcpt_times_return
     (*pkt_rcpt_times)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rcvr_rtt_return
     (*rcvr_rtt)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_stat_summary_return
     (*stat_summary)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_voip_metrics_return
     (*voip_metrics)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_stat_summary_flag_return
     (*rtcp_xr_stat_summary_flag)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_max_size_return
     (*rtcp_xr_max_size)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_attribute_return
     (*rtcp_fb_attribute)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_pt_return
     (*rtcp_fb_pt)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_val_return
     (*rtcp_fb_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_ack_val_return
     (*rtcp_fb_ack_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_nack_val_return
     (*rtcp_fb_nack_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_trr_int_val_return
     (*rtcp_fb_trr_int_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_ccm_val_return
     (*rtcp_fb_ccm_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_id_val_return
     (*rtcp_fb_id_val)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_param_return
     (*rtcp_fb_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_ack_param_return
     (*rtcp_fb_ack_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_nack_param_return
     (*rtcp_fb_nack_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_pli_param_return
     (*rtcp_fb_pli_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_sli_param_return
     (*rtcp_fb_sli_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_rpsi_param_return
     (*rtcp_fb_rpsi_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_app_param_return
     (*rtcp_fb_app_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_ccm_param_return
     (*rtcp_fb_ccm_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_fir_param_return
     (*rtcp_fb_fir_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_tmmbr_param_return
     (*rtcp_fb_tmmbr_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_tmmbr_smaxpr_param_return
     (*rtcp_fb_tmmbr_smaxpr_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_tmmbr_smaxpr_return
     (*rtcp_fb_tmmbr_smaxpr)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_token_param_return
     (*rtcp_fb_token_param)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_media_description_return
     (*media_description)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_media_return
     (*media)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_media_value_return
     (*media_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_fmt_return
     (*fmt)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_proto_return
     (*proto)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_port_return
     (*port)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_attribute_name_return
     (*attribute_name)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_attribute_value_return
     (*attribute_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_attribute_name_return
     (*rtcp_xr_attribute_name)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_rcvr_rtt_mode_return
     (*rtcp_xr_rcvr_rtt_mode)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_xr_stat_summary_flag_value_return
     (*rtcp_xr_stat_summary_flag_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_rtcp_fb_attribute_name_return
     (*rtcp_fb_attribute_name)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_sess_id_return
     (*sess_id)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_sess_version_return
     (*sess_version)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_connection_address_return
     (*connection_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_multicast_address_return
     (*multicast_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_ttl_return
     (*ttl)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_start_time_return
     (*start_time)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_stop_time_return
     (*stop_time)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_sdp_time_return
     (*sdp_time)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_repeat_interval_return
     (*repeat_interval)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_typed_time_return
     (*typed_time)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_fixed_len_time_unit_return
     (*fixed_len_time_unit)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_bwtype_return
     (*bwtype)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_bandwidth_value_return
     (*bandwidth_value)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_username_return
     (*username)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_email_address_return
     (*email_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_uri_return
     (*uri)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_phone_number_return
     (*phone_number)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_phone_return
     (*phone)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_nettype_return
     (*nettype)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_addrtype_return
     (*addrtype)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_addr_return
     (*addr)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_multicast_part_return
     (*multicast_part)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_fqdn_return
     (*fqdn)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_domainlabel_return
     (*domainlabel)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_toplabel_return
     (*toplabel)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_unicast_address_return
     (*unicast_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_ipv4_address_return
     (*ipv4_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_ipv6_address_return
     (*ipv6_address)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_hexpart_return
     (*hexpart)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_hexseq_return
     (*hexseq)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_hex4_return
     (*hex4)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_text_return
     (*text)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_byte_string_return
     (*byte_string)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_decimal_uchar_return
     (*decimal_uchar)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_integer_return
     (*integer)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_email_safe_return
     (*email_safe)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_token_return
     (*token)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_alpha_num_return
     (*alpha_num)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_hexdigit_return
     (*hexdigit)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_word_return
     (*word)	(struct belle_sdpParser_Ctx_struct * ctx);

     belle_sdpParser_alpha_return
     (*alpha)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred1_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred2_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred3_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred4_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred5_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred6_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred7_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred8_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred9_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred10_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred11_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred12_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred13_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred14_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred15_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred16_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred17_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred18_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred19_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred20_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred21_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred22_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred23_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred24_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred25_belle_sdp)	(struct belle_sdpParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct belle_sdpParser_Ctx_struct * ctx);
    void	    (*free)   (struct belle_sdpParser_Ctx_struct * ctx);
/* @headerFile.members() */
pANTLR3_BASE_TREE_ADAPTOR	adaptor;
pANTLR3_VECTOR_FACTORY		vectors;
/* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pbelle_sdpParser belle_sdpParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pbelle_sdpParser belle_sdpParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__22      22
#define T__23      23
#define T__24      24
#define T__25      25
#define T__26      26
#define T__27      27
#define T__28      28
#define T__29      29
#define T__30      30
#define T__31      31
#define T__32      32
#define T__33      33
#define T__34      34
#define T__35      35
#define COLON      4
#define COMMA      5
#define COMMON_CHAR      6
#define CR      7
#define DASH      8
#define DIGIT      9
#define DOT      10
#define EQUAL      11
#define HEX_CHAR      12
#define LF      13
#define LQUOTE      14
#define OCTET      15
#define POS_DIGIT      16
#define RQUOTE      17
#define SLASH      18
#define SPACE      19
#define STAR      20
#define ZERO      21
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for belle_sdpParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
