/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PositioningMeasurementAbort_H_
#define	_PositioningMeasurementAbort_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PositioningMeasurementAbort */
typedef struct PositioningMeasurementAbort {
	ProtocolIE_Container_123P76_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositioningMeasurementAbort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositioningMeasurementAbort;
extern asn_SEQUENCE_specifics_t asn_SPC_PositioningMeasurementAbort_specs_1;
extern asn_TYPE_member_t asn_MBR_PositioningMeasurementAbort_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PositioningMeasurementAbort_H_ */
#include "asn_internal.h"
