/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_IAB_Congestion_Indication_Item_H_
#define	_IAB_Congestion_Indication_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BAPAddress.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BHRLCCHList;
struct ProtocolExtensionContainer;

/* IAB-Congestion-Indication-Item */
typedef struct IAB_Congestion_Indication_Item {
	BAPAddress_t	 childNodeIdentifier;
	struct BHRLCCHList	*bHRLCCHList;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IAB_Congestion_Indication_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IAB_Congestion_Indication_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_IAB_Congestion_Indication_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_IAB_Congestion_Indication_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_Congestion_Indication_Item_H_ */
#include "asn_internal.h"
