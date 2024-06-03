/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TimingErrorMargin_H_
#define	_TimingErrorMargin_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimingErrorMargin {
	TimingErrorMargin_m0Tc	= 0,
	TimingErrorMargin_m2Tc	= 1,
	TimingErrorMargin_m4Tc	= 2,
	TimingErrorMargin_m6Tc	= 3,
	TimingErrorMargin_m8Tc	= 4,
	TimingErrorMargin_m12Tc	= 5,
	TimingErrorMargin_m16Tc	= 6,
	TimingErrorMargin_m20Tc	= 7,
	TimingErrorMargin_m24Tc	= 8,
	TimingErrorMargin_m32Tc	= 9,
	TimingErrorMargin_m40Tc	= 10,
	TimingErrorMargin_m48Tc	= 11,
	TimingErrorMargin_m56Tc	= 12,
	TimingErrorMargin_m64Tc	= 13,
	TimingErrorMargin_m72Tc	= 14,
	TimingErrorMargin_m80Tc	= 15
	/*
	 * Enumeration is extensible
	 */
} e_TimingErrorMargin;

/* TimingErrorMargin */
typedef long	 TimingErrorMargin_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimingErrorMargin_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimingErrorMargin;
extern const asn_INTEGER_specifics_t asn_SPC_TimingErrorMargin_specs_1;
asn_struct_free_f TimingErrorMargin_free;
asn_struct_print_f TimingErrorMargin_print;
asn_constr_check_f TimingErrorMargin_constraint;
ber_type_decoder_f TimingErrorMargin_decode_ber;
der_type_encoder_f TimingErrorMargin_encode_der;
xer_type_decoder_f TimingErrorMargin_decode_xer;
xer_type_encoder_f TimingErrorMargin_encode_xer;
jer_type_encoder_f TimingErrorMargin_encode_jer;
oer_type_decoder_f TimingErrorMargin_decode_oer;
oer_type_encoder_f TimingErrorMargin_encode_oer;
per_type_decoder_f TimingErrorMargin_decode_uper;
per_type_encoder_f TimingErrorMargin_encode_uper;
per_type_decoder_f TimingErrorMargin_decode_aper;
per_type_encoder_f TimingErrorMargin_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimingErrorMargin_H_ */
#include "asn_internal.h"
