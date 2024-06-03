/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_RelativePathDelay_H_
#define	_RelativePathDelay_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RelativePathDelay_PR {
	RelativePathDelay_PR_NOTHING,	/* No components present */
	RelativePathDelay_PR_k0,
	RelativePathDelay_PR_k1,
	RelativePathDelay_PR_k2,
	RelativePathDelay_PR_k3,
	RelativePathDelay_PR_k4,
	RelativePathDelay_PR_k5,
	RelativePathDelay_PR_choice_extension
} RelativePathDelay_PR;

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* RelativePathDelay */
typedef struct RelativePathDelay {
	RelativePathDelay_PR present;
	union RelativePathDelay_u {
		long	 k0;
		long	 k1;
		long	 k2;
		long	 k3;
		long	 k4;
		long	 k5;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RelativePathDelay_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RelativePathDelay;
extern asn_CHOICE_specifics_t asn_SPC_RelativePathDelay_specs_1;
extern asn_TYPE_member_t asn_MBR_RelativePathDelay_1[7];
extern asn_per_constraints_t asn_PER_type_RelativePathDelay_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RelativePathDelay_H_ */
#include "asn_internal.h"
