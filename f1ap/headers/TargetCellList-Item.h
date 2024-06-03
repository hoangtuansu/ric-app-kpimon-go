/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TargetCellList_Item_H_
#define	_TargetCellList_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NRCGI.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TargetCellList-Item */
typedef struct TargetCellList_Item {
	NRCGI_t	 target_cell;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetCellList_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetCellList_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_TargetCellList_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_TargetCellList_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TargetCellList_Item_H_ */
#include "asn_internal.h"
