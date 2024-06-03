/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PartialSuccessCell_H_
#define	_PartialSuccessCell_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BroadcastCellList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PartialSuccessCell */
typedef struct PartialSuccessCell {
	BroadcastCellList_t	 broadcastCellList;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PartialSuccessCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PartialSuccessCell;
extern asn_SEQUENCE_specifics_t asn_SPC_PartialSuccessCell_specs_1;
extern asn_TYPE_member_t asn_MBR_PartialSuccessCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PartialSuccessCell_H_ */
#include "asn_internal.h"
