/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_ExplicitFormat_H_
#define	_ExplicitFormat_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Permutation.h"
#include "NoofDownlinkSymbols.h"
#include "NoofUplinkSymbols.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ExplicitFormat */
typedef struct ExplicitFormat {
	Permutation_t	 permutation;
	NoofDownlinkSymbols_t	*noofDownlinkSymbols;	/* OPTIONAL */
	NoofUplinkSymbols_t	*noofUplinkSymbols;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExplicitFormat_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExplicitFormat;
extern asn_SEQUENCE_specifics_t asn_SPC_ExplicitFormat_specs_1;
extern asn_TYPE_member_t asn_MBR_ExplicitFormat_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ExplicitFormat_H_ */
#include "asn_internal.h"
