/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_EUTRA_Mode_Info_H_
#define	_EUTRA_Mode_Info_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_Mode_Info_PR {
	EUTRA_Mode_Info_PR_NOTHING,	/* No components present */
	EUTRA_Mode_Info_PR_eUTRAFDD,
	EUTRA_Mode_Info_PR_eUTRATDD,
	EUTRA_Mode_Info_PR_choice_extension
} EUTRA_Mode_Info_PR;

/* Forward declarations */
struct EUTRA_FDD_Info;
struct EUTRA_TDD_Info;
struct ProtocolIE_SingleContainer;

/* EUTRA-Mode-Info */
typedef struct EUTRA_Mode_Info {
	EUTRA_Mode_Info_PR present;
	union EUTRA_Mode_Info_u {
		struct EUTRA_FDD_Info	*eUTRAFDD;
		struct EUTRA_TDD_Info	*eUTRATDD;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_Mode_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_Mode_Info;
extern asn_CHOICE_specifics_t asn_SPC_EUTRA_Mode_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_Mode_Info_1[3];
extern asn_per_constraints_t asn_PER_type_EUTRA_Mode_Info_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_Mode_Info_H_ */
#include "asn_internal.h"
