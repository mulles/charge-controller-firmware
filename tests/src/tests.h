/*
 * Copyright (c) The Libre Solar Project Contributors
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <time.h>
#include <unity.h>

int bat_charger_tests();

int daq_tests();

int power_port_tests();

int half_bridge_tests();

int dcdc_tests();

int device_status_tests();

int kalman_soc_tests();

int load_tests();

#ifdef CONFIG_CUSTOM_TESTS
int custom_tests();
#endif
