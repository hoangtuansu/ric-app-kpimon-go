/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_DRBs_ToBeSetup_Item_H_
#define	_DRBs_ToBeSetup_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DRBID.h"
#include "QoSInformation.h"
#include "ULUPTNLInformation-ToBeSetup-List.h"
#include "RLCMode.h"
#include "DuplicationActivation.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ULConfiguration;
struct ProtocolExtensionContainer;

/* DRBs-ToBeSetup-Item */
typedef struct DRBs_ToBeSetup_Item {
	DRBID_t	 dRBID;
	QoSInformation_t	 qoSInformation;
	ULUPTNLInformation_ToBeSetup_List_t	 uLUPTNLInformation_ToBeSetup_List;
	RLCMode_t	 rLCMode;
	struct ULConfiguration	*uLConfiguration;	/* OPTIONAL */
	DuplicationActivation_t	*duplicationActivation;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBs_ToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBs_ToBeSetup_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_DRBs_ToBeSetup_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBs_ToBeSetup_Item_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _DRBs_ToBeSetup_Item_H_ */
#include "asn_internal.h"
