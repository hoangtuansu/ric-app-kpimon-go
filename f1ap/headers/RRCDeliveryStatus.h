/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_RRCDeliveryStatus_H_
#define	_RRCDeliveryStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PDCP-SN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RRCDeliveryStatus */
typedef struct RRCDeliveryStatus {
	PDCP_SN_t	 delivery_status;
	PDCP_SN_t	 triggering_message;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCDeliveryStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCDeliveryStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCDeliveryStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCDeliveryStatus_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCDeliveryStatus_H_ */
#include "asn_internal.h"
