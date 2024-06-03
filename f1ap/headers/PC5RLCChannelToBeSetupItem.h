/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PC5RLCChannelToBeSetupItem_H_
#define	_PC5RLCChannelToBeSetupItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PC5RLCChannelID.h"
#include "RemoteUELocalID.h"
#include "PC5RLCChannelQoSInformation.h"
#include "RLCMode.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PC5RLCChannelToBeSetupItem */
typedef struct PC5RLCChannelToBeSetupItem {
	PC5RLCChannelID_t	 pC5RLCChannelID;
	RemoteUELocalID_t	*remoteUELocalID;	/* OPTIONAL */
	PC5RLCChannelQoSInformation_t	 pC5RLCChannelQoSInformation;
	RLCMode_t	 rLCMode;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PC5RLCChannelToBeSetupItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PC5RLCChannelToBeSetupItem;
extern asn_SEQUENCE_specifics_t asn_SPC_PC5RLCChannelToBeSetupItem_specs_1;
extern asn_TYPE_member_t asn_MBR_PC5RLCChannelToBeSetupItem_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PC5RLCChannelToBeSetupItem_H_ */
#include "asn_internal.h"
