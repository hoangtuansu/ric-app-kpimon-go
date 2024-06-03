/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TrafficMappingInfo_H_
#define	_TrafficMappingInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficMappingInfo_PR {
	TrafficMappingInfo_PR_NOTHING,	/* No components present */
	TrafficMappingInfo_PR_iPtolayer2TrafficMappingInfo,
	TrafficMappingInfo_PR_bAPlayerBHRLCchannelMappingInfo,
	TrafficMappingInfo_PR_choice_extension
} TrafficMappingInfo_PR;

/* Forward declarations */
struct IPtolayer2TrafficMappingInfo;
struct BAPlayerBHRLCchannelMappingInfo;
struct ProtocolIE_SingleContainer;

/* TrafficMappingInfo */
typedef struct TrafficMappingInfo {
	TrafficMappingInfo_PR present;
	union TrafficMappingInfo_u {
		struct IPtolayer2TrafficMappingInfo	*iPtolayer2TrafficMappingInfo;
		struct BAPlayerBHRLCchannelMappingInfo	*bAPlayerBHRLCchannelMappingInfo;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficMappingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficMappingInfo;
extern asn_CHOICE_specifics_t asn_SPC_TrafficMappingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficMappingInfo_1[3];
extern asn_per_constraints_t asn_PER_type_TrafficMappingInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficMappingInfo_H_ */
#include "asn_internal.h"
