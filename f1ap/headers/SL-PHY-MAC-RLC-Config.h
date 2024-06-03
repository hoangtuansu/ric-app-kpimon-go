/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SL_PHY_MAC_RLC_Config_H_
#define	_SL_PHY_MAC_RLC_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SL-PHY-MAC-RLC-Config */
typedef OCTET_STRING_t	 SL_PHY_MAC_RLC_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PHY_MAC_RLC_Config;
asn_struct_free_f SL_PHY_MAC_RLC_Config_free;
asn_struct_print_f SL_PHY_MAC_RLC_Config_print;
asn_constr_check_f SL_PHY_MAC_RLC_Config_constraint;
ber_type_decoder_f SL_PHY_MAC_RLC_Config_decode_ber;
der_type_encoder_f SL_PHY_MAC_RLC_Config_encode_der;
xer_type_decoder_f SL_PHY_MAC_RLC_Config_decode_xer;
xer_type_encoder_f SL_PHY_MAC_RLC_Config_encode_xer;
jer_type_encoder_f SL_PHY_MAC_RLC_Config_encode_jer;
oer_type_decoder_f SL_PHY_MAC_RLC_Config_decode_oer;
oer_type_encoder_f SL_PHY_MAC_RLC_Config_encode_oer;
per_type_decoder_f SL_PHY_MAC_RLC_Config_decode_uper;
per_type_encoder_f SL_PHY_MAC_RLC_Config_encode_uper;
per_type_decoder_f SL_PHY_MAC_RLC_Config_decode_aper;
per_type_encoder_f SL_PHY_MAC_RLC_Config_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PHY_MAC_RLC_Config_H_ */
#include "asn_internal.h"
