/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright(c) 2007-2022 Intel Corporation */
#include "qat_freebsd.h"
#include "adf_cfg.h"
#include "adf_common_drv.h"
#include "adf_accel_devices.h"
#include "adf_ver_dbg.h"

static int adf_sysctl_read_fw_versions(SYSCTL_HANDLER_ARGS)
{
	struct adf_accel_dev *accel_dev = arg1;
	char fw_version[ADF_CFG_MAX_VAL_LEN_IN_BYTES];

	if (!accel_dev)
		return -EINVAL;

	if (adf_dev_started(accel_dev))
		snprintf(fw_version,
			 ADF_CFG_MAX_VAL_LEN_IN_BYTES,
			 "%d.%d.%d",
			 accel_dev->fw_versions.fw_version_major,
			 accel_dev->fw_versions.fw_version_minor,
			 accel_dev->fw_versions.fw_version_patch);
	else
		snprintf(fw_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES, "");

	return SYSCTL_OUT(req,
			  fw_version,
			  strnlen(fw_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES));
}

static int adf_sysctl_read_hw_versions(SYSCTL_HANDLER_ARGS)
{
	struct adf_accel_dev *accel_dev = arg1;
	char hw_version[ADF_CFG_MAX_VAL_LEN_IN_BYTES];

	if (!accel_dev)
		return -EINVAL;

	if (adf_dev_started(accel_dev))
		snprintf(hw_version,
			 ADF_CFG_MAX_VAL_LEN_IN_BYTES,
			 "%d",
			 accel_dev->accel_pci_dev.revid);
	else
		snprintf(hw_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES, "");

	return SYSCTL_OUT(req,
			  hw_version,
			  strnlen(hw_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES));
}

static int adf_sysctl_read_mmp_versions(SYSCTL_HANDLER_ARGS)
{
	struct adf_accel_dev *accel_dev = arg1;
	char mmp_version[ADF_CFG_MAX_VAL_LEN_IN_BYTES];

	if (!accel_dev)
		return -EINVAL;

	if (adf_dev_started(accel_dev))
		snprintf(mmp_version,
			 ADF_CFG_MAX_VAL_LEN_IN_BYTES,
			 "%d.%d.%d",
			 accel_dev->fw_versions.mmp_version_major,
			 accel_dev->fw_versions.mmp_version_minor,
			 accel_dev->fw_versions.mmp_version_patch);

	if (adf_dev_started(accel_dev))
		snprintf(mmp_version,
			 ADF_CFG_MAX_VAL_LEN_IN_BYTES,
			 "%d.%d.%d",
			 accel_dev->fw_versions.mmp_version_major,
			 accel_dev->fw_versions.mmp_version_minor,
			 accel_dev->fw_versions.mmp_version_patch);
	else
		snprintf(mmp_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES, "");

	return SYSCTL_OUT(req,
			  mmp_version,
			  strnlen(mmp_version, ADF_CFG_MAX_VAL_LEN_IN_BYTES));
}

int
adf_ver_dbg_add(struct adf_accel_dev *accel_dev)
{
	struct sysctl_ctx_list *qat_sysctl_ctx;
	struct sysctl_oid *qat_sysctl_tree;
	struct sysctl_oid *rc = 0;

	if (!accel_dev)
		return -EINVAL;

	qat_sysctl_ctx =
	    device_get_sysctl_ctx(accel_dev->accel_pci_dev.pci_dev);
	qat_sysctl_tree =
	    device_get_sysctl_tree(accel_dev->accel_pci_dev.pci_dev);

	rc = SYSCTL_ADD_OID(qat_sysctl_ctx,
			    SYSCTL_CHILDREN(qat_sysctl_tree),
			    OID_AUTO,
			    "fw_version",
			    CTLTYPE_STRING | CTLFLAG_RD,
			    accel_dev,
			    0,
			    adf_sysctl_read_fw_versions,
			    "A",
			    "QAT FW version");
	if (!rc)
		goto err;

	rc = SYSCTL_ADD_OID(qat_sysctl_ctx,
			    SYSCTL_CHILDREN(qat_sysctl_tree),
			    OID_AUTO,
			    "hw_version",
			    CTLTYPE_STRING | CTLFLAG_RD,
			    accel_dev,
			    0,
			    adf_sysctl_read_hw_versions,
			    "A",
			    "QAT HW version");
	if (!rc)
		goto err;

	rc = SYSCTL_ADD_OID(qat_sysctl_ctx,
			    SYSCTL_CHILDREN(qat_sysctl_tree),
			    OID_AUTO,
			    "mmp_version",
			    CTLTYPE_STRING | CTLFLAG_RD,
			    accel_dev,
			    0,
			    adf_sysctl_read_mmp_versions,
			    "A",
			    "QAT MMP version");
	if (!rc)
		goto err;

	return 0;
err:
	device_printf(GET_DEV(accel_dev),
		      "Failed to add firmware versions to sysctl\n");
	return -EINVAL;
}

void
adf_ver_dbg_del(struct adf_accel_dev *accel_dev)
{
}
