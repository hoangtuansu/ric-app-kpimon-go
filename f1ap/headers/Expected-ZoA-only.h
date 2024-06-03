/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_Expected_ZoA_only_H_
#define	_Expected_ZoA_only_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Expected-Zenith-AoA.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Expected-ZoA-only */
typedef struct Expected_ZoA_only {
	Expected_Zenith_AoA_t	 expected_ZoA_only;
	struct ProtocolExtensionContainer	*iE_extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Expected_ZoA_only_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Expected_ZoA_only;
extern asn_SEQUENCE_specifics_t asn_SPC_Expected_ZoA_only_specs_1;
extern asn_TYPE_member_t asn_MBR_Expected_ZoA_only_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Expected_ZoA_only_H_ */
#include "asn_internal.h"
