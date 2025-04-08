/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#ifndef _clca7a__h_
#define _clca7a__h_

#ifdef __cplusplus
extern "C" {
#endif

#define NVCA7A_CURSOR_IMM_CHANNEL_PIO                                           (0x0000CA7A)

typedef volatile struct _clca7a_tag0 {
    NvV32 Reserved00[0x2];
    NvV32 Free;                                                                 // 0x00000008 - 0x0000000B
    NvV32 Reserved01[0x7D];
    NvV32 Update;                                                               // 0x00000200 - 0x00000203
    NvV32 SetInterlockFlags;                                                    // 0x00000204 - 0x00000207
    NvV32 SetCursorHotSpotPointOut[2];                                          // 0x00000208 - 0x0000020F
    NvV32 SetWindowInterlockFlags;                                              // 0x00000210 - 0x00000213
    NvV32 Reserved02[0x3F7B];
} NVCA7ADispCursorImmControlPio;

#define NVCA7A_FREE                                                             (0x00000008)
#define NVCA7A_FREE_COUNT                                                       5:0
#define NVCA7A_UPDATE                                                           (0x00000200)
#define NVCA7A_UPDATE_RELEASE_ELV                                               0:0
#define NVCA7A_UPDATE_RELEASE_ELV_FALSE                                         (0x00000000)
#define NVCA7A_UPDATE_RELEASE_ELV_TRUE                                          (0x00000001)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN                                             8:4
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_NONE                               (0x00000000)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_0                                  (0x00000001)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_1                                  (0x00000002)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_2                                  (0x00000003)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_3                                  (0x00000004)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_4                                  (0x00000005)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_5                                  (0x00000006)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_6                                  (0x00000007)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_7                                  (0x00000008)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_8                                  (0x00000009)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_9                                  (0x0000000A)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_A                                  (0x0000000B)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_B                                  (0x0000000C)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_C                                  (0x0000000D)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_D                                  (0x0000000E)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_E                                  (0x0000000F)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_LOCK_PIN_F                                  (0x00000010)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_FLIP_LOCK_0                        (0x00000014)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_FLIP_LOCK_1                        (0x00000015)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_FLIP_LOCK_2                        (0x00000016)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_FLIP_LOCK_3                        (0x00000017)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_0                        (0x00000018)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_1                        (0x00000019)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_2                        (0x0000001A)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_3                        (0x0000001B)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_4                        (0x0000001C)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_5                        (0x0000001D)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_6                        (0x0000001E)
#define NVCA7A_UPDATE_FLIP_LOCK_PIN_INTERNAL_SCAN_LOCK_7                        (0x0000001F)
#define NVCA7A_UPDATE_FORCE_FULLSCREEN                                          12:12
#define NVCA7A_UPDATE_FORCE_FULLSCREEN_FALSE                                    (0x00000000)
#define NVCA7A_UPDATE_FORCE_FULLSCREEN_TRUE                                     (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS                                              (0x00000204)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR0                       0:0
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR0_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR0_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR1                       1:1
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR1_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR1_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR2                       2:2
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR2_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR2_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR3                       3:3
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR3_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR3_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR4                       4:4
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR4_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR4_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR5                       5:5
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR5_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR5_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR6                       6:6
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR6_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR6_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR7                       7:7
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR7_DISABLE               (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CURSOR7_ENABLE                (0x00000001)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CORE                          16:16
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CORE_DISABLE                  (0x00000000)
#define NVCA7A_SET_INTERLOCK_FLAGS_INTERLOCK_WITH_CORE_ENABLE                   (0x00000001)
#define NVCA7A_SET_CURSOR_HOT_SPOT_POINT_OUT(b)                                 (0x00000208 + (b)*0x00000004)
#define NVCA7A_SET_CURSOR_HOT_SPOT_POINT_OUT_X                                  15:0
#define NVCA7A_SET_CURSOR_HOT_SPOT_POINT_OUT_Y                                  31:16
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS                                       (0x00000210)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW0                0:0
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW0_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW0_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW1                1:1
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW1_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW1_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW2                2:2
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW2_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW2_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW3                3:3
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW3_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW3_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW4                4:4
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW4_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW4_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW5                5:5
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW5_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW5_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW6                6:6
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW6_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW6_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW7                7:7
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW7_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW7_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW8                8:8
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW8_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW8_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW9                9:9
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW9_DISABLE        (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW9_ENABLE         (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW10               10:10
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW10_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW10_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW11               11:11
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW11_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW11_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW12               12:12
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW12_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW12_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW13               13:13
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW13_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW13_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW14               14:14
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW14_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW14_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW15               15:15
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW15_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW15_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW16               16:16
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW16_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW16_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW17               17:17
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW17_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW17_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW18               18:18
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW18_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW18_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW19               19:19
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW19_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW19_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW20               20:20
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW20_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW20_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW21               21:21
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW21_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW21_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW22               22:22
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW22_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW22_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW23               23:23
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW23_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW23_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW24               24:24
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW24_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW24_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW25               25:25
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW25_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW25_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW26               26:26
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW26_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW26_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW27               27:27
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW27_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW27_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW28               28:28
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW28_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW28_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW29               29:29
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW29_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW29_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW30               30:30
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW30_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW30_ENABLE        (0x00000001)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW31               31:31
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW31_DISABLE       (0x00000000)
#define NVCA7A_SET_WINDOW_INTERLOCK_FLAGS_INTERLOCK_WITH_WINDOW31_ENABLE        (0x00000001)

#ifdef __cplusplus
};     /* extern "C" */
#endif
#endif // _clca7a_h

