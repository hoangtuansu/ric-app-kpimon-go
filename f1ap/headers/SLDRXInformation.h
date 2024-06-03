/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SLDRXInformation_H_
#define	_SLDRXInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SLDRXCycleLength.h"
#include "SLDRXConfigurationIndicator.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SLDRXInformation_PR {
	SLDRXInformation_PR_NOTHING,	/* No components present */
	SLDRXInformation_PR_sLDRXCycle,
	SLDRXInformation_PR_nosLDRX,
	SLDRXInformation_PR_choice_extension
} SLDRXInformation_PR;

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* SLDRXInformation */
typedef struct SLDRXInformation {
	SLDRXInformation_PR present;
	union SLDRXInformation_u {
		SLDRXCycleLength_t	 sLDRXCycle;
		SLDRXConfigurationIndicator_t	 nosLDRX;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SLDRXInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SLDRXInformation;
extern asn_CHOICE_specifics_t asn_SPC_SLDRXInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SLDRXInformation_1[3];
extern asn_per_constraints_t asn_PER_type_SLDRXInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SLDRXInformation_H_ */
#include "asn_internal.h"
