/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_GNB_DUConfigurationQuery_H_
#define	_GNB_DUConfigurationQuery_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNB_DUConfigurationQuery {
	GNB_DUConfigurationQuery_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_GNB_DUConfigurationQuery;

/* GNB-DUConfigurationQuery */
typedef long	 GNB_DUConfigurationQuery_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GNB_DUConfigurationQuery_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GNB_DUConfigurationQuery;
extern const asn_INTEGER_specifics_t asn_SPC_GNB_DUConfigurationQuery_specs_1;
asn_struct_free_f GNB_DUConfigurationQuery_free;
asn_struct_print_f GNB_DUConfigurationQuery_print;
asn_constr_check_f GNB_DUConfigurationQuery_constraint;
ber_type_decoder_f GNB_DUConfigurationQuery_decode_ber;
der_type_encoder_f GNB_DUConfigurationQuery_encode_der;
xer_type_decoder_f GNB_DUConfigurationQuery_decode_xer;
xer_type_encoder_f GNB_DUConfigurationQuery_encode_xer;
jer_type_encoder_f GNB_DUConfigurationQuery_encode_jer;
oer_type_decoder_f GNB_DUConfigurationQuery_decode_oer;
oer_type_encoder_f GNB_DUConfigurationQuery_encode_oer;
per_type_decoder_f GNB_DUConfigurationQuery_decode_uper;
per_type_encoder_f GNB_DUConfigurationQuery_encode_uper;
per_type_decoder_f GNB_DUConfigurationQuery_decode_aper;
per_type_encoder_f GNB_DUConfigurationQuery_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_DUConfigurationQuery_H_ */
#include "asn_internal.h"
