/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_MeasuredResultsValue_H_
#define	_MeasuredResultsValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UL-SRS-RSRP.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasuredResultsValue_PR {
	MeasuredResultsValue_PR_NOTHING,	/* No components present */
	MeasuredResultsValue_PR_uL_AngleOfArrival,
	MeasuredResultsValue_PR_uL_SRS_RSRP,
	MeasuredResultsValue_PR_uL_RTOA,
	MeasuredResultsValue_PR_gNB_RxTxTimeDiff,
	MeasuredResultsValue_PR_choice_extension
} MeasuredResultsValue_PR;

/* Forward declarations */
struct UL_AoA;
struct UL_RTOA_Measurement;
struct GNB_RxTxTimeDiff;
struct ProtocolIE_SingleContainer;

/* MeasuredResultsValue */
typedef struct MeasuredResultsValue {
	MeasuredResultsValue_PR present;
	union MeasuredResultsValue_u {
		struct UL_AoA	*uL_AngleOfArrival;
		UL_SRS_RSRP_t	 uL_SRS_RSRP;
		struct UL_RTOA_Measurement	*uL_RTOA;
		struct GNB_RxTxTimeDiff	*gNB_RxTxTimeDiff;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResultsValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResultsValue;
extern asn_CHOICE_specifics_t asn_SPC_MeasuredResultsValue_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasuredResultsValue_1[5];
extern asn_per_constraints_t asn_PER_type_MeasuredResultsValue_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasuredResultsValue_H_ */
#include "asn_internal.h"
