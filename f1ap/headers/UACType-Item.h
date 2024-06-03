/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_UACType_Item_H_
#define	_UACType_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UACReductionIndication.h"
#include "UACCategoryType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UACType-Item */
typedef struct UACType_Item {
	UACReductionIndication_t	 uACReductionIndication;
	UACCategoryType_t	 uACCategoryType;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UACType_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UACType_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_UACType_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_UACType_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UACType_Item_H_ */
#include "asn_internal.h"
