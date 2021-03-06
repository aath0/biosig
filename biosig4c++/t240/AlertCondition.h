/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_AlertCondition_H_
#define	_AlertCondition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HandleRef.h"
#include "AlertControls.h"
#include "AlertFlags.h"
#include "MetricsCode.h"
#include "AlertCode.h"
#include "AlertType.h"
#include "PrivateCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AlertCondition */
typedef struct AlertCondition {
	HandleRef_t	 objreference;
	AlertControls_t	 controls;
	AlertFlags_t	 alertflags;
	MetricsCode_t	 alertsource;
	AlertCode_t	 alertcode;
	AlertType_t	 alerttype;
	PrivateCode_t	*alertinfoid	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlertCondition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlertCondition;

#ifdef __cplusplus
}
#endif

#endif	/* _AlertCondition_H_ */
