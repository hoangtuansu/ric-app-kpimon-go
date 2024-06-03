/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_EUTRA_CyclicPrefixDL_H_
#define	_EUTRA_CyclicPrefixDL_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_CyclicPrefixDL {
	EUTRA_CyclicPrefixDL_normal	= 0,
	EUTRA_CyclicPrefixDL_extended	= 1
	/*
	 * Enumeration is extensible
	 */
} e_EUTRA_CyclicPrefixDL;

/* EUTRA-CyclicPrefixDL */
typedef long	 EUTRA_CyclicPrefixDL_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EUTRA_CyclicPrefixDL_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_CyclicPrefixDL;
extern const asn_INTEGER_specifics_t asn_SPC_EUTRA_CyclicPrefixDL_specs_1;
asn_struct_free_f EUTRA_CyclicPrefixDL_free;
asn_struct_print_f EUTRA_CyclicPrefixDL_print;
asn_constr_check_f EUTRA_CyclicPrefixDL_constraint;
ber_type_decoder_f EUTRA_CyclicPrefixDL_decode_ber;
der_type_encoder_f EUTRA_CyclicPrefixDL_encode_der;
xer_type_decoder_f EUTRA_CyclicPrefixDL_decode_xer;
xer_type_encoder_f EUTRA_CyclicPrefixDL_encode_xer;
jer_type_encoder_f EUTRA_CyclicPrefixDL_encode_jer;
oer_type_decoder_f EUTRA_CyclicPrefixDL_decode_oer;
oer_type_encoder_f EUTRA_CyclicPrefixDL_encode_oer;
per_type_decoder_f EUTRA_CyclicPrefixDL_decode_uper;
per_type_encoder_f EUTRA_CyclicPrefixDL_encode_uper;
per_type_decoder_f EUTRA_CyclicPrefixDL_decode_aper;
per_type_encoder_f EUTRA_CyclicPrefixDL_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_CyclicPrefixDL_H_ */
#include "asn_internal.h"
