/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_NPN_Broadcast_Information_SNPN_H_
#define	_NPN_Broadcast_Information_SNPN_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BroadcastSNPN-ID-List.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* NPN-Broadcast-Information-SNPN */
typedef struct NPN_Broadcast_Information_SNPN {
	BroadcastSNPN_ID_List_t	 broadcastSNPNID_List;
	struct ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPN_Broadcast_Information_SNPN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NPN_Broadcast_Information_SNPN;
extern asn_SEQUENCE_specifics_t asn_SPC_NPN_Broadcast_Information_SNPN_specs_1;
extern asn_TYPE_member_t asn_MBR_NPN_Broadcast_Information_SNPN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NPN_Broadcast_Information_SNPN_H_ */
#include "asn_internal.h"
