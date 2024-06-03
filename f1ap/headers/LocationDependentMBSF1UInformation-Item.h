/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_LocationDependentMBSF1UInformation_Item_H_
#define	_LocationDependentMBSF1UInformation_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MBS-Area-Session-ID.h"
#include "UPTransportLayerInformation.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* LocationDependentMBSF1UInformation-Item */
typedef struct LocationDependentMBSF1UInformation_Item {
	MBS_Area_Session_ID_t	 mbsAreaSession_ID;
	UPTransportLayerInformation_t	 mbs_f1u_info_at_CU;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationDependentMBSF1UInformation_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationDependentMBSF1UInformation_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationDependentMBSF1UInformation_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationDependentMBSF1UInformation_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationDependentMBSF1UInformation_Item_H_ */
#include "asn_internal.h"
