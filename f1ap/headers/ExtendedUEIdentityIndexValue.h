/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_ExtendedUEIdentityIndexValue_H_
#define	_ExtendedUEIdentityIndexValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ExtendedUEIdentityIndexValue */
typedef BIT_STRING_t	 ExtendedUEIdentityIndexValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ExtendedUEIdentityIndexValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ExtendedUEIdentityIndexValue;
asn_struct_free_f ExtendedUEIdentityIndexValue_free;
asn_struct_print_f ExtendedUEIdentityIndexValue_print;
asn_constr_check_f ExtendedUEIdentityIndexValue_constraint;
ber_type_decoder_f ExtendedUEIdentityIndexValue_decode_ber;
der_type_encoder_f ExtendedUEIdentityIndexValue_encode_der;
xer_type_decoder_f ExtendedUEIdentityIndexValue_decode_xer;
xer_type_encoder_f ExtendedUEIdentityIndexValue_encode_xer;
jer_type_encoder_f ExtendedUEIdentityIndexValue_encode_jer;
oer_type_decoder_f ExtendedUEIdentityIndexValue_decode_oer;
oer_type_encoder_f ExtendedUEIdentityIndexValue_encode_oer;
per_type_decoder_f ExtendedUEIdentityIndexValue_decode_uper;
per_type_encoder_f ExtendedUEIdentityIndexValue_encode_uper;
per_type_decoder_f ExtendedUEIdentityIndexValue_decode_aper;
per_type_encoder_f ExtendedUEIdentityIndexValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendedUEIdentityIndexValue_H_ */
#include "asn_internal.h"
