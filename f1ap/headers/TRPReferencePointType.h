/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TRPReferencePointType_H_
#define	_TRPReferencePointType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TRPReferencePointType_PR {
	TRPReferencePointType_PR_NOTHING,	/* No components present */
	TRPReferencePointType_PR_tRPPositionRelativeGeodetic,
	TRPReferencePointType_PR_tRPPositionRelativeCartesian,
	TRPReferencePointType_PR_choice_extension
} TRPReferencePointType_PR;

/* Forward declarations */
struct RelativeGeodeticLocation;
struct RelativeCartesianLocation;
struct ProtocolIE_SingleContainer;

/* TRPReferencePointType */
typedef struct TRPReferencePointType {
	TRPReferencePointType_PR present;
	union TRPReferencePointType_u {
		struct RelativeGeodeticLocation	*tRPPositionRelativeGeodetic;
		struct RelativeCartesianLocation	*tRPPositionRelativeCartesian;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TRPReferencePointType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRPReferencePointType;
extern asn_CHOICE_specifics_t asn_SPC_TRPReferencePointType_specs_1;
extern asn_TYPE_member_t asn_MBR_TRPReferencePointType_1[3];
extern asn_per_constraints_t asn_PER_type_TRPReferencePointType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TRPReferencePointType_H_ */
#include "asn_internal.h"
