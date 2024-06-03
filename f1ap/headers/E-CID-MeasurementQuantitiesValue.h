/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_E_CID_MeasurementQuantitiesValue_H_
#define	_E_CID_MeasurementQuantitiesValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_CID_MeasurementQuantitiesValue {
	E_CID_MeasurementQuantitiesValue_default	= 0,
	E_CID_MeasurementQuantitiesValue_angleOfArrivalNR	= 1,
	/*
	 * Enumeration is extensible
	 */
	E_CID_MeasurementQuantitiesValue_timingAdvanceNR	= 2
} e_E_CID_MeasurementQuantitiesValue;

/* E-CID-MeasurementQuantitiesValue */
typedef long	 E_CID_MeasurementQuantitiesValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E_CID_MeasurementQuantitiesValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E_CID_MeasurementQuantitiesValue;
extern const asn_INTEGER_specifics_t asn_SPC_E_CID_MeasurementQuantitiesValue_specs_1;
asn_struct_free_f E_CID_MeasurementQuantitiesValue_free;
asn_struct_print_f E_CID_MeasurementQuantitiesValue_print;
asn_constr_check_f E_CID_MeasurementQuantitiesValue_constraint;
ber_type_decoder_f E_CID_MeasurementQuantitiesValue_decode_ber;
der_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_der;
xer_type_decoder_f E_CID_MeasurementQuantitiesValue_decode_xer;
xer_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_xer;
jer_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_jer;
oer_type_decoder_f E_CID_MeasurementQuantitiesValue_decode_oer;
oer_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_oer;
per_type_decoder_f E_CID_MeasurementQuantitiesValue_decode_uper;
per_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_uper;
per_type_decoder_f E_CID_MeasurementQuantitiesValue_decode_aper;
per_type_encoder_f E_CID_MeasurementQuantitiesValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_CID_MeasurementQuantitiesValue_H_ */
#include "asn_internal.h"
