/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_QoEMetrics_H_
#define	_QoEMetrics_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AppLayerBufferLevelList.h"
#include "PlayoutDelayForMediaStartup.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* QoEMetrics */
typedef struct QoEMetrics {
	AppLayerBufferLevelList_t	*appLayerBufferLevelList;	/* OPTIONAL */
	PlayoutDelayForMediaStartup_t	*playoutDelayForMediaStartup;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoEMetrics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoEMetrics;
extern asn_SEQUENCE_specifics_t asn_SPC_QoEMetrics_specs_1;
extern asn_TYPE_member_t asn_MBR_QoEMetrics_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _QoEMetrics_H_ */
#include "asn_internal.h"
