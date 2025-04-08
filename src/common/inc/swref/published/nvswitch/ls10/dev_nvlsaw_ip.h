/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ls10_dev_nvlsaw_ip_h__
#define __ls10_dev_nvlsaw_ip_h__
/* This file is autogenerated.  Do not edit */
#define NV_NVLSAW                                       0x000007FF:0x00000000 /* RW--D */
#define NV_NVLSAW_GLBLLATENCYTIMERCTRL                     0x00000040      /* RW-4R */
#define NV_NVLSAW_GLBLLATENCYTIMERCTRL_ENABLE              0:0             /* RWEVF */
#define NV_NVLSAW_GLBLLATENCYTIMERCTRL_ENABLE_DISABLE      0x00000000      /* RWE-V */
#define NV_NVLSAW_GLBLLATENCYTIMERCTRL_ENABLE_ENABLE       0x00000001      /* RW--V */
#define NV_NVLSAW_GLBLLATENCYTIMERCTRL_ENABLE__PROD        0x00000001      /* RW--V */
#define NV_NVLSAW_CTRL_CLOCK_GATING                        0x00000064      /* RW-4R */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_SAW           0:0             /* RWEVF */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_SAW_ENABLED   0x00000000      /* RW--V */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_SAW_DISABLED  0x00000001      /* RWE-V */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_SAW__PROD     0x00000000      /* RW--V */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_PCIE          2:2             /* RWEVF */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_PCIE_ENABLED  0x00000000      /* RW--V */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_PCIE_DISABLED 0x00000001      /* RWE-V */
#define NV_NVLSAW_CTRL_CLOCK_GATING_CG1_SLCG_PCIE__PROD    0x00000000      /* RW--V */
#define NV_NVLSAW_SW_SCRATCH_0                             0x000004e0      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_0_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_0_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_1                             0x000004e4      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_1_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_1_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_2                             0x000004e8      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_2_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_2_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_3                             0x000004ec      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_3_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_3_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_4                             0x000004f0      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_4_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_4_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_5                             0x000004f4      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_5_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_5_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_6                             0x000004f8      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_6_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_6_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_7                             0x000004fc      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_7_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_7_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_8                             0x00000500      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_8_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_8_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_9                             0x00000504      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_9_VALUE                       31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_9_VALUE_INIT                  0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_10                            0x00000508      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_10_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_10_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_11                            0x0000050c      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_11_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_11_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_12                            0x00000510      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_12_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_12_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_13                            0x00000514      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_13_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_13_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_14                            0x00000518      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_14_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_14_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_SW_SCRATCH_15                            0x0000051c      /* RW-4R */
#define NV_NVLSAW_SW_SCRATCH_15_VALUE                      31:0            /* RWEVF */
#define NV_NVLSAW_SW_SCRATCH_15_VALUE_INIT                 0x00000000      /* RWE-V */
#define NV_NVLSAW_PCIE_PRI_CLOCK_GATING                    0x00000530      /* RW-4R */
#define NV_NVLSAW_PCIE_PRI_CLOCK_GATING_CG1_SLCG           0:0             /* RWEVF */
#define NV_NVLSAW_PCIE_PRI_CLOCK_GATING_CG1_SLCG_ENABLED   0x00000000      /* RW--V */
#define NV_NVLSAW_PCIE_PRI_CLOCK_GATING_CG1_SLCG_DISABLED  0x00000001      /* RWE-V */
#define NV_NVLSAW_PCIE_PRI_CLOCK_GATING_CG1_SLCG__PROD     0x00000000      /* RW--V */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_1(i)           (0x00000c30+(i)*0x4) /* RW-4A */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_1__SIZE_1      4               /*       */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_1_VALUE        31:0            /* RWEVF */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_1_VALUE_INIT   0x00000000      /* RWE-V */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_3(i)           (0x00000c50+(i)*0x4) /* RW-4A */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_3__SIZE_1      4               /*       */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_3_VALUE        31:0            /* RWEVF */
#define NV_NVLSAW_SECURE_SCRATCH_WARM_GROUP_3_VALUE_INIT   0x00000000      /* RWE-V */
#endif // __ls10_dev_nvlsaw_ip_h__
