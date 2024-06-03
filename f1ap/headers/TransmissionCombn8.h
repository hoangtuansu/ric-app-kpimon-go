/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TransmissionCombn8_H_
#define	_TransmissionCombn8_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TransmissionCombn8 */
typedef struct TransmissionCombn8 {
	long	 combOffset_n8;
	long	 cyclicShift_n8;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransmissionCombn8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransmissionCombn8;
extern asn_SEQUENCE_specifics_t asn_SPC_TransmissionCombn8_specs_1;
extern asn_TYPE_member_t asn_MBR_TransmissionCombn8_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TransmissionCombn8_H_ */
#include "asn_internal.h"
