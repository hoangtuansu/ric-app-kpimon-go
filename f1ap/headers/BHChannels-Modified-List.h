/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_BHChannels_Modified_List_H_
#define	_BHChannels_Modified_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* BHChannels-Modified-List */
typedef struct BHChannels_Modified_List {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BHChannels_Modified_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BHChannels_Modified_List;
extern asn_SET_OF_specifics_t asn_SPC_BHChannels_Modified_List_specs_1;
extern asn_TYPE_member_t asn_MBR_BHChannels_Modified_List_1[1];
extern asn_per_constraints_t asn_PER_type_BHChannels_Modified_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BHChannels_Modified_List_H_ */
#include "asn_internal.h"
