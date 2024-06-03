/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PosSRSResourceSet_Item_H_
#define	_PosSRSResourceSet_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "PosSRSResourceID-List.h"
#include "PosResourceSetType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PosSRSResourceSet-Item */
typedef struct PosSRSResourceSet_Item {
	long	 possrsResourceSetID;
	PosSRSResourceID_List_t	 possRSResourceID_List;
	PosResourceSetType_t	 posresourceSetType;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSRSResourceSet_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosSRSResourceSet_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSRSResourceSet_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSRSResourceSet_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSRSResourceSet_Item_H_ */
#include "asn_internal.h"
