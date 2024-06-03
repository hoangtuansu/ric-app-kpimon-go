/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TRP_MeasurementRequestItem_H_
#define	_TRP_MeasurementRequestItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TRPID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Search_window_information;
struct ProtocolExtensionContainer;

/* TRP-MeasurementRequestItem */
typedef struct TRP_MeasurementRequestItem {
	TRPID_t	 tRPID;
	struct Search_window_information	*search_window_information;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TRP_MeasurementRequestItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRP_MeasurementRequestItem;
extern asn_SEQUENCE_specifics_t asn_SPC_TRP_MeasurementRequestItem_specs_1;
extern asn_TYPE_member_t asn_MBR_TRP_MeasurementRequestItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TRP_MeasurementRequestItem_H_ */
#include "asn_internal.h"
