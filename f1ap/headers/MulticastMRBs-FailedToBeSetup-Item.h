/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_MulticastMRBs_FailedToBeSetup_Item_H_
#define	_MulticastMRBs_FailedToBeSetup_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MRB-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Cause;
struct ProtocolExtensionContainer;

/* MulticastMRBs-FailedToBeSetup-Item */
typedef struct MulticastMRBs_FailedToBeSetup_Item {
	MRB_ID_t	 mRB_ID;
	struct Cause	*cause;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MulticastMRBs_FailedToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MulticastMRBs_FailedToBeSetup_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_MulticastMRBs_FailedToBeSetup_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_MulticastMRBs_FailedToBeSetup_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MulticastMRBs_FailedToBeSetup_Item_H_ */
#include "asn_internal.h"
