/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TRP_BeamAntennaAnglesList_Item_H_
#define	_TRP_BeamAntennaAnglesList_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;
struct TRP_ElevationAngleList_Item;

/* TRP-BeamAntennaAnglesList-Item */
typedef struct TRP_BeamAntennaAnglesList_Item {
	long	 trp_azimuth_angle;
	long	*trp_azimuth_angle_fine;	/* OPTIONAL */
	struct TRP_BeamAntennaAnglesList_Item__trp_elevation_angle_list {
		A_SEQUENCE_OF(struct TRP_ElevationAngleList_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} trp_elevation_angle_list;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TRP_BeamAntennaAnglesList_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRP_BeamAntennaAnglesList_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_TRP_BeamAntennaAnglesList_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_TRP_BeamAntennaAnglesList_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _TRP_BeamAntennaAnglesList_Item_H_ */
#include "asn_internal.h"
