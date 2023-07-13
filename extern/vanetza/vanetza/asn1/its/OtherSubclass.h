/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/TR103562v211-CPM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_OtherSubclass_H_
#define	_OtherSubclass_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OtherSublassType.h"
#include "ClassConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OtherSubclass */
typedef struct OtherSubclass {
	OtherSublassType_t	 type;	/* DEFAULT 0 */
	ClassConfidence_t	 confidence;	/* DEFAULT 0 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherSubclass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherSubclass;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherSubclass_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherSubclass_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OtherSubclass_H_ */
#include "asn_internal.h"
