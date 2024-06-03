/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_DUCURIMInformation_H_
#define	_DUCURIMInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GNBSetID.h"
#include "RIMRSDetectionStatus.h"
#include "AggressorCellList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* DUCURIMInformation */
typedef struct DUCURIMInformation {
	GNBSetID_t	 victimgNBSetID;
	RIMRSDetectionStatus_t	 rIMRSDetectionStatus;
	AggressorCellList_t	 aggressorCellList;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DUCURIMInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DUCURIMInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_DUCURIMInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_DUCURIMInformation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DUCURIMInformation_H_ */
#include "asn_internal.h"
