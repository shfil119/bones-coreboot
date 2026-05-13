/* SPDX-License-Identifier: GPL-2.0-only */

#include <acpi/acpi_gnvs.h>
#include <soc/nvs.h>

/* Temperature which OS will shutdown at */
#define CRITICAL_TEMPERATURE	100

/* Temperature which OS will throttle CPU */
#define PASSIVE_TEMPERATURE	90

void mainboard_fill_gnvs(struct global_nvs *gnvs)
{
	gnvs->tcrt = CRITICAL_TEMPERATURE;
	gnvs->tpsv = PASSIVE_TEMPERATURE;
}
