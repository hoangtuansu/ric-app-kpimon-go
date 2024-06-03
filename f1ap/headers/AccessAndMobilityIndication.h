/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_AccessAndMobilityIndication_H_
#define	_AccessAndMobilityIndication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AccessAndMobilityIndication */
typedef struct AccessAndMobilityIndication {
	ProtocolIE_Container_123P66_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessAndMobilityIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessAndMobilityIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_AccessAndMobilityIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_AccessAndMobilityIndication_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AccessAndMobilityIndication_H_ */
#include "asn_internal.h"
