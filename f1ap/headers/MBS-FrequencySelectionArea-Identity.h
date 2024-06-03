/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_MBS_FrequencySelectionArea_Identity_H_
#define	_MBS_FrequencySelectionArea_Identity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MBS-FrequencySelectionArea-Identity */
typedef OCTET_STRING_t	 MBS_FrequencySelectionArea_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MBS_FrequencySelectionArea_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MBS_FrequencySelectionArea_Identity;
asn_struct_free_f MBS_FrequencySelectionArea_Identity_free;
asn_struct_print_f MBS_FrequencySelectionArea_Identity_print;
asn_constr_check_f MBS_FrequencySelectionArea_Identity_constraint;
ber_type_decoder_f MBS_FrequencySelectionArea_Identity_decode_ber;
der_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_der;
xer_type_decoder_f MBS_FrequencySelectionArea_Identity_decode_xer;
xer_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_xer;
jer_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_jer;
oer_type_decoder_f MBS_FrequencySelectionArea_Identity_decode_oer;
oer_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_oer;
per_type_decoder_f MBS_FrequencySelectionArea_Identity_decode_uper;
per_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_uper;
per_type_decoder_f MBS_FrequencySelectionArea_Identity_decode_aper;
per_type_encoder_f MBS_FrequencySelectionArea_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBS_FrequencySelectionArea_Identity_H_ */
#include "asn_internal.h"
