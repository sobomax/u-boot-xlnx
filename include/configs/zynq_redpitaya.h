/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration for Red Pitaya - an open-source measurement and control tool.
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_REDPITAYA_H
#define __CONFIG_ZYNQ_REDPITAYA_H

#define CONFIG_SYS_SDRAM_SIZE		(512 * 1024 * 1024)
#define CONFIG_SYS_FREQ_HZ		666666687
#define CONFIG_CPU_FREQ_HZ		666666687
#define CONFIG_ZYNQ_PS_CLK_FREQ		33333333UL

#define CONFIG_ZYNQ_SERIAL_UART0

#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0      1

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_QSPI

#define CONFIG_ZYNQ_EEPROM
#define CONFIG_ENV_IS_IN_EEPROM
#define CONFIG_ENV_EEPROM_IS_ON_I2C
#define CONFIG_ENV_OFFSET              (2048*3)
#define CONFIG_ENV_SIZE                1024 /* Total Size of Environment Sector */
#define CONFIG_ENV_SECT_SIZE           CONFIG_ENV_SIZE
#define CONFIG_CMD_SAVEENV             /* Command to save ENV to Flash */
#define CONFIG_CMD_EEPROM

#define CONFIG_ZYNQ_BOOT_FREEBSD

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_REDPITAYA_H */
