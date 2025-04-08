/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2010 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __cl917dcrcnotif_h__
#define __cl917dcrcnotif_h__
/* This file is autogenerated.  Do not edit */

#define NV917D_NOTIFIER_CRC_1_STATUS_0                                         0x00000000
#define NV917D_NOTIFIER_CRC_1_STATUS_0_DONE                                    0:0
#define NV917D_NOTIFIER_CRC_1_STATUS_0_DONE_FALSE                              0x00000000
#define NV917D_NOTIFIER_CRC_1_STATUS_0_DONE_TRUE                               0x00000001
#define NV917D_NOTIFIER_CRC_1_STATUS_0_COMPOSITOR_OVERFLOW                     3:3
#define NV917D_NOTIFIER_CRC_1_STATUS_0_COMPOSITOR_OVERFLOW_FALSE               0x00000000
#define NV917D_NOTIFIER_CRC_1_STATUS_0_COMPOSITOR_OVERFLOW_TRUE                0x00000001
#define NV917D_NOTIFIER_CRC_1_STATUS_0_PRIMARY_OUTPUT_OVERFLOW                 4:4
#define NV917D_NOTIFIER_CRC_1_STATUS_0_PRIMARY_OUTPUT_OVERFLOW_FALSE           0x00000000
#define NV917D_NOTIFIER_CRC_1_STATUS_0_PRIMARY_OUTPUT_OVERFLOW_TRUE            0x00000001
#define NV917D_NOTIFIER_CRC_1_STATUS_0_COUNT                                   31:24
#define NV917D_NOTIFIER_CRC_1_CRC_ENTRY0_3                                     0x00000003
#define NV917D_NOTIFIER_CRC_1_CRC_ENTRY0_3_COMPOSITOR_CRC                      31:0
#define NV917D_NOTIFIER_CRC_1_CRC_ENTRY0_4                                     0x00000004
#define NV917D_NOTIFIER_CRC_1_CRC_ENTRY0_4_PRIMARY_OUTPUT_CRC                  31:0
#define NV917D_NOTIFIER_CRC_1_CRC_ENTRY1_8                                     0x00000008

#endif // __cl917dcrcnotif_h__
