/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PagingIdentity_H_
#define	_PagingIdentity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingIdentity_PR {
	PagingIdentity_PR_NOTHING,	/* No components present */
	PagingIdentity_PR_rANUEPagingIdentity,
	PagingIdentity_PR_cNUEPagingIdentity,
	PagingIdentity_PR_choice_extension
} PagingIdentity_PR;

/* Forward declarations */
struct RANUEPagingIdentity;
struct CNUEPagingIdentity;
struct ProtocolIE_SingleContainer;

/* PagingIdentity */
typedef struct PagingIdentity {
	PagingIdentity_PR present;
	union PagingIdentity_u {
		struct RANUEPagingIdentity	*rANUEPagingIdentity;
		struct CNUEPagingIdentity	*cNUEPagingIdentity;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_PagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_PagingIdentity_1[3];
extern asn_per_constraints_t asn_PER_type_PagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingIdentity_H_ */
#include "asn_internal.h"
