/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_URI_address_H_
#define	_URI_address_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VisibleString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* URI-address */
typedef VisibleString_t	 URI_address_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_URI_address_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_URI_address;
asn_struct_free_f URI_address_free;
asn_struct_print_f URI_address_print;
asn_constr_check_f URI_address_constraint;
ber_type_decoder_f URI_address_decode_ber;
der_type_encoder_f URI_address_encode_der;
xer_type_decoder_f URI_address_decode_xer;
xer_type_encoder_f URI_address_encode_xer;
jer_type_encoder_f URI_address_encode_jer;
oer_type_decoder_f URI_address_decode_oer;
oer_type_encoder_f URI_address_encode_oer;
per_type_decoder_f URI_address_decode_uper;
per_type_encoder_f URI_address_encode_uper;
per_type_decoder_f URI_address_decode_aper;
per_type_encoder_f URI_address_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _URI_address_H_ */
#include "asn_internal.h"
