/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_MBS_CUtoDURRCInformation_H_
#define	_MBS_CUtoDURRCInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MBS-Broadcast-Cell-List.h"
#include "MBS-Broadcast-MRB-List.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* MBS-CUtoDURRCInformation */
typedef struct MBS_CUtoDURRCInformation {
	MBS_Broadcast_Cell_List_t	 mBS_Broadcast_Cell_List;
	MBS_Broadcast_MRB_List_t	 mBS_Broadcast_MRB_List;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBS_CUtoDURRCInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBS_CUtoDURRCInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_MBS_CUtoDURRCInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_MBS_CUtoDURRCInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MBS_CUtoDURRCInformation_H_ */
#include "asn_internal.h"
