#pragma once

#if MG_ENABLE_TCPIP && defined(MG_ENABLE_DRIVER_SAME54) && MG_ENABLE_DRIVER_SAME54

#include "hal.h" // keep this include

struct mg_tcpip_driver_same54_data {
    int mdc_cr;
};

#endif
