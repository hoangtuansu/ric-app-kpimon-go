/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_MeasurementBeamInfo_H_
#define	_MeasurementBeamInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PRS-Resource-ID.h"
#include "PRS-Resource-Set-ID.h"
#include "SSB-Index.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* MeasurementBeamInfo */
typedef struct MeasurementBeamInfo {
	PRS_Resource_ID_t	*pRS_Resource_ID;	/* OPTIONAL */
	PRS_Resource_Set_ID_t	*pRS_Resource_Set_ID;	/* OPTIONAL */
	SSB_Index_t	*sSB_Index;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementBeamInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementBeamInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementBeamInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementBeamInfo_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementBeamInfo_H_ */
#include "asn_internal.h"
