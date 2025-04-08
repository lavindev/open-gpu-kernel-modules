/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2023 NVIDIA CORPORATION & AFFILIATES
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

#ifndef __tu102_dev_vm_h__
#define __tu102_dev_vm_h__
#define NV_VIRTUAL_FUNCTION_PRIV                               0x0002FFFF:0x00000000 /* RW--D */
#define NV_VIRTUAL_FUNCTION                                    0x0003FFFF:0x00030000 /* RW--D */
#define NV_VIRTUAL_FUNCTION_FULL_PHYS_OFFSET                   0x00BBFFFF:0x00B80000 /* RW--D */
#define NV_VIRTUAL_FUNCTION_PRIV_L2_SYSMEM_INVALIDATE                   0x00000F00 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_L2_PEERMEM_INVALIDATE                   0x00000F04 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP(i)                                             (0x1600+(i)*4) /* R--4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP__SIZE_1                                                     1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_VALUE                                                    31:0 /* R--VF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_SUBTREE(i)                                                (i) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_SUBTREE__SIZE_1                                            64 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_SUBTREE_INTR_PENDING                                        1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_SUBTREE_INTR_NOT_PENDING                                    0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET(i)                                      (0x1608+(i)*4) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET__SIZE_1                                              1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_VALUE                                             31:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE(i)                                         (i) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE__SIZE_1                                     64 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_ENABLE                                       1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_ENABLED                                      1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_SET_SUBTREE_DISABLED                                     0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR(i)                                    (0x1610+(i)*4) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR__SIZE_1                                            1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_VALUE                                           31:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE(i)                                       (i) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE__SIZE_1                                   64 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_DISABLE                                    1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_ENABLED                                    1 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_TOP_EN_CLEAR_SUBTREE_DISABLED                                   0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF(i)                                            (0x1000+(i)*4) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF__SIZE_1                                                    8 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_VALUE                                                   31:0 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_VALUE_INIT                                        0x00000000 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_SET(i)                                     (0x1200+(i)*4) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_SET__SIZE_1                                             8 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_SET_VALUE                                            31:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_SET_VALUE_INIT                                 0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_CLEAR(i)                                   (0x1400+(i)*4) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_CLEAR__SIZE_1                                           8 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_CLEAR_VALUE                                          31:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_EN_CLEAR_VALUE_INIT                               0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_TRIGGER                                0x00001640 /* -W-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_CPU_INTR_LEAF_TRIGGER_VECTOR                               11:0 /* -W-VF */
#define NV_VIRTUAL_FUNCTION_PRIV_TIMER                          0x2300 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_TIMER_NSEC                       31:0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_TIMER_USEC                      31:10 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_TIMER_USEC_INIT                   0x0 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_NON_REPLAY_FAULT_BUFFER               0 /*    */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_REPLAY_FAULT_BUFFER                   1 /*    */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_LO(i)                     (0x00003000+(i)*32) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_LO__SIZE_1          2 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_HI(i)                     (0x00003004+(i)*32) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_HI__SIZE_1          2 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET(i)                (0x00003008+(i)*32) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET__SIZE_1     2 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_PTR                              19:0 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_PTR_RESET                  0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED                30:30 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_NO        0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_YES       0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_GETPTR_CORRUPTED_CLEAR     0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW                        31:31 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_NO                0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_YES               0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_GET_OVERFLOW_CLEAR             0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT(i)                 (0x0000300C+(i)*32) /* R--4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT__SIZE_1      2 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_PTR                               19:0 /* R-EVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_PTR_RESET                   0x00000000 /* R-E-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED                 30:30 /* R-EVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED_NO         0x00000000 /* R-E-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_GETPTR_CORRUPTED_YES        0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW                         31:31 /* R-EVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW_NO                 0x00000000 /* R-E-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_PUT_OVERFLOW_YES                0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE(i)            (0x00003010+(i)*32) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE__SIZE_1 2 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_VAL                          19:0 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_VAL_RESET              0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR               29:29 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR_DISABLE  0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_OVERFLOW_INTR_ENABLE   0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT                 30:30 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT_NO         0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_SET_DEFAULT_YES        0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE                      31:31 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE_FALSE           0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_BUFFER_SIZE_ENABLE_TRUE            0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_PAGE_FAULT_CTRL                                        0x00003070 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_ADDR_LO                                      0x00003080 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_ADDR_HI                                      0x00003084 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_INST_LO                                      0x00003088 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_INST_HI                                      0x0000308C /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_INFO                                         0x00003090 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_FAULT_STATUS                                           0x00003094 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB                               0x000030A0 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_APERTURE                             1:1 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_APERTURE_INIT                 0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_APERTURE_VID_MEM              0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_APERTURE_SYS_MEM              0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_ADDR                                31:4 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_ADDR_INIT                     0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PDB_ADDR_ALIGNMENT                0x0000000c /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_UPPER_PDB                         0x000030A4 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_UPPER_PDB_ADDR                          19:0 /* RWEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_UPPER_PDB_ADDR_INIT               0x00000000 /* RWE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE                                   0x000030B0 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_VA                                   0:0 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_VA_FALSE                      0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_VA_TRUE                       0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_PDB                                  1:1 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_PDB_FALSE                     0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ALL_PDB_TRUE                      0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_HUBTLB_ONLY                              2:2 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_HUBTLB_ONLY_FALSE                 0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_HUBTLB_ONLY_TRUE                  0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY                                   5:3 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_NONE                       0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_START                      0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_START_ACK_ALL              0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_TARGETED            0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_GLOBAL              0x00000004 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_REPLAY_CANCEL_VA_GLOBAL           0x00000005 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_SYS_MEMBAR                              6:6 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_SYS_MEMBAR_FALSE                 0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_SYS_MEMBAR_TRUE                  0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ACK                                     8:7 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ACK_NONE_REQUIRED                0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ACK_INTRANODE                    0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_ACK_GLOBALLY                     0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_ID                       14:9 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CANCEL_GPC_ID                         19:15 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE                    20:20 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE_GPC           0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CANCEL_CLIENT_TYPE_HUB           0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_PASID                             21:21 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_PASID_FALSE                  0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_PASID_TRUE                   0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_SIZE                              22:22 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_SIZE_FALSE                   0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_USE_SIZE_TRUE                    0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PROP_FLUSH                            23:23 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PROP_FLUSH_FALSE                 0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_PROP_FLUSH_TRUE                  0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL                           26:24 /* RWXVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_ALL                  0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_PTE_ONLY             0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE0           0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE1           0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE2           0x00000004 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE3           0x00000005 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE4           0x00000006 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_UP_TO_PDE5           0x00000007 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_READ          0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_WRITE         0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_STRONG 0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_RSVRVD        0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_WEAK   0x00000004 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ATOMIC_ALL    0x00000005 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_WRITE_AND_ATOMIC 0x00000006 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_CACHE_LEVEL_CANCEL_ALL           0x00000007 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_TRIGGER                                31:31 /* -WEVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_TRIGGER_FALSE                     0x00000000 /* -WE-V */
#define NV_VIRTUAL_FUNCTION_PRIV_MMU_INVALIDATE_TRIGGER_TRUE                      0x00000001 /* -W--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG                                      0x00003100 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_THRESHOLD                                  15:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_THRESHOLD_INIT                       0x00000080 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY                          17:16 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_INIT                0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_64K                 0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_2M                  0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_16M                 0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MIMC_GRANULARITY_16G                 0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY                          19:18 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_INIT                0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_64K                 0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_2M                  0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_16M                 0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_CONFIG_MOMC_GRANULARITY_16G                 0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO               0x00003108 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN                   0:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN_FALSE      0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_LO_EN_TRUE       0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_HI               0x0000310C /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_SIZE                   0x00003110 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_GET                0x00003114 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_PUT                 0x00003118 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO                               0x0000311C /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL                                 0:0 /* R-IVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL_FALSE                           0x0 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_FULL_TRUE                            0x1 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED                               1:1 /* R-IVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED_FALSE                         0x0 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_PUSHED_TRUE                          0x1 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK                         24:24 /* R-IVF */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK_FALSE                     0x0 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_ACCESS_COUNTER_NOTIFY_BUFFER_INFO_WRITE_NACK_TRUE                      0x1 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_ADDR_LO(i)                              (0x00010000+(i)*16) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_ADDR_LO__SIZE_1                 6 /*       */
#define NV_VIRTUAL_FUNCTION_TIME_0                     0x30080 /* R--4R */
#define NV_VIRTUAL_FUNCTION_TIME_0_NSEC                   31:5 /* R-XUF */
#define NV_VIRTUAL_FUNCTION_TIME_1                     0x30084 /* R--4R */
#define NV_VIRTUAL_FUNCTION_TIME_1_NSEC                   28:0 /* R-XUF */
#define NV_VIRTUAL_FUNCTION_PRIV_DOORBELL                                            0x2200 /* -W-4R */
#define NV_VIRTUAL_FUNCTION_DOORBELL                                                0x30090 /* -W-4R */
#define NV_VIRTUAL_FUNCTION_ERR_CONT                         0x30094 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK                                           0x00000F40 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK__VFALIAS                    NV_VBUS_VF_BAR1_BLOCK(f) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_MAP                                             29:0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_PTR                                             27:0 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_PTR_0                                     0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_TARGET                                         29:28 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_TARGET_VID_MEM                            0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_TARGET_SYS_MEM_COHERENT                   0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_TARGET_SYS_MEM_NONCOHERENT                0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_MODE                                           31:31 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_MODE_PHYSICAL                             0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR1_BLOCK_MODE_VIRTUAL                              0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK                                           0x00000F48 /* RW-4R */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK__VFALIAS                    NV_VBUS_VF_BAR2_BLOCK(f) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_MAP                                             29:0 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_PTR                                             27:0 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_PTR_0                                     0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_TARGET                                         29:28 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_TARGET_VID_MEM                            0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_TARGET_SYS_MEM_COHERENT                   0x00000002 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_TARGET_SYS_MEM_NONCOHERENT                0x00000003 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_DEBUG_CYA                                      30:30 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_DEBUG_CYA_OFF                             0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_DEBUG_CYA_ON                              0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_DEBUG_CYA_INIT                            0x00000001 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_MODE                                           31:31 /* RWIUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_MODE_PHYSICAL                             0x00000000 /* RWI-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BAR2_BLOCK_MODE_VIRTUAL                              0x00000001 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS                                          0x00000F50 /* R--4R */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS__VFALIAS                  NV_VBUS_VF_BIND_STATUS(f) /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_PENDING                                    0:0 /* R-IUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_PENDING_EMPTY                       0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_PENDING_BUSY                        0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_OUTSTANDING                                1:1 /* R-IUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_OUTSTANDING_FALSE                   0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR1_OUTSTANDING_TRUE                    0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_PENDING                                    2:2 /* R-IUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_PENDING_EMPTY                       0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_PENDING_BUSY                        0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_OUTSTANDING                                3:3 /* R-IUF */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_OUTSTANDING_FALSE                   0x00000000 /* R-I-V */
#define NV_VIRTUAL_FUNCTION_PRIV_BIND_STATUS_BAR2_OUTSTANDING_TRUE                    0x00000001 /* R---V */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_VECTOR_CONTROL(i)                (0x0001000C+(i)*16) /* RW-4A */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_VECTOR_CONTROL__SIZE_1                             6 /*       */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT                          0:0 /* RWIVF */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_UNMASKED          0x00000000 /* RW--V */
#define NV_VIRTUAL_FUNCTION_PRIV_MSIX_TABLE_VECTOR_CONTROL_MASK_BIT_MASKED            0x00000001 /* RWI-V */
#endif // __tu102_dev_vm_h__
