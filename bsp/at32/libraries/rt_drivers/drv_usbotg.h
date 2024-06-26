/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-02-28     shelton      first version
 */

#ifndef __DRV_USBOTG_H__
#define __DRV_USBOTG_H__

#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"

#if defined(BSP_USING_HOST_USBOTG1)   || defined(BSP_USING_HOST_USBOTG2)  || \
    defined(BSP_USING_DEVICE_USBOTG1) || defined(BSP_USING_DEVICE_USBOTG2)
#include "usb_core.h"

struct at32_usbotg {
    char *name;
    otg_core_type *p_otg_core;
    otg_id_type id;
    usb_speed_type dev_spd;
    IRQn_Type irqn;
};
#endif
#endif /* __DRV_USBOTG_H__ */

/******************* end of file *******************/
