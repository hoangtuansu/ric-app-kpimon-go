/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PlayoutDelayForMediaStartup_H_
#define	_PlayoutDelayForMediaStartup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PlayoutDelayForMediaStartup */
typedef OCTET_STRING_t	 PlayoutDelayForMediaStartup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlayoutDelayForMediaStartup;
asn_struct_free_f PlayoutDelayForMediaStartup_free;
asn_struct_print_f PlayoutDelayForMediaStartup_print;
asn_constr_check_f PlayoutDelayForMediaStartup_constraint;
ber_type_decoder_f PlayoutDelayForMediaStartup_decode_ber;
der_type_encoder_f PlayoutDelayForMediaStartup_encode_der;
xer_type_decoder_f PlayoutDelayForMediaStartup_decode_xer;
xer_type_encoder_f PlayoutDelayForMediaStartup_encode_xer;
jer_type_encoder_f PlayoutDelayForMediaStartup_encode_jer;
oer_type_decoder_f PlayoutDelayForMediaStartup_decode_oer;
oer_type_encoder_f PlayoutDelayForMediaStartup_encode_oer;
per_type_decoder_f PlayoutDelayForMediaStartup_decode_uper;
per_type_encoder_f PlayoutDelayForMediaStartup_encode_uper;
per_type_decoder_f PlayoutDelayForMediaStartup_decode_aper;
per_type_encoder_f PlayoutDelayForMediaStartup_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PlayoutDelayForMediaStartup_H_ */
#include "asn_internal.h"
