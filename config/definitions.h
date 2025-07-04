/*
*
* Copyright (c) 2025 Daniel Suter
* SPDX-License-Identifier: MIT
*
*/

/*                                              Keymap
                        ╭─────╮                                         ╭─────╮
                ╭─────╮ | 1 3 | ╭─────╮                         ╭─────╮ | 1 3 | ╭─────╮
                | 1 3 | | 0 2 | | 1 3 |                         | 1 3 | | 0 2 | | 1 3 |
        ╭─────╮ | 0 2 | ╰─────╯ | 0 2 | ╭─────╮         ╭─────╮ | 0 2 | ╰─────╯ | 0 2 | ╭─────╮
        │ 1 3 | ╰─────╯ ╭─────╮ ╰─────╯ | 1 3 |         | 1 3 | ╰─────╯ ╭─────╮ ╰─────╯ | 1 3 |
        │ 0 2 │ ╭─────╮ | 1 3 | ╭─────╮ | 0 2 |         | 0 2 | ╭─────╮ | 1 3 | ╭─────╮ | 0 2 |
        ╰─────╯ | 1 3 | | 0 2 | | 1 3 | ╰─────╯         ╰─────╯ | 1 3 | | 0 2 | | 1 3 | ╰─────╯
        ╭─────╮ | 0 2 | ╰─────╯ | 0 2 | ╭─────╮         ╭─────╮ | 0 2 | ╰─────╯ | 0 2 | ╭─────╮
        │ 1 3 | ╰─────╯ ╭─────╮ ╰─────╯ | 1 3 |         | 1 3 | ╰─────╯ ╭─────╮ ╰─────╯ | 1 3 |
        │ 0 2 │ ╭─────╮ | 1 3 | ╭─────╮ | 0 2 |         | 0 2 | ╭─────╮ | 1 3 | ╭─────╮ | 0 2 |
        ╰─────╯ | 1 3 | | 0 2 | | 1 3 | ╰─────╯         ╰─────╯ | 1 3 | | 0 2 | | 1 3 | ╰─────╯
                | 0 2 | ╰─────╯ | 0 2 |                         | 0 2 | ╰─────╯ | 0 2 |
                ╰─────╯         ╰─────╯                         ╰─────╯         ╰─────╯
                                  ╭─────╮                     ╭─────╮
                                  | 1 3 | ╭─────╮     ╭─────╮ | 1 3 |
                                  | 0 2 | | 1 3 |     | 1 3 | | 0 2 |
                                  ╰─────╯ | 0 2 |     | 0 2 | ╰─────╯
                                          ╰─────╯     ╰─────╯
*/


/*                 KEY POSITIONS
        ╭────────────────╮ ╭────────────────╮
        │ 00 01 02 03 04 │ │ 05 06 07 08 09 │
        │ 10 11 12 13 14 │ │ 15 16 17 18 19 │
        │    20 21 22    │ │    23 24 25    │
        ╰────────╮ 26 27 │ │ 28 29 ╭────────╯
                 ╰───────╯ ╰───────╯
   ╭─────────────────────╮ ╭─────────────────────╮
   │ LTP LTR LTM LTI LTC │ │ RTC RTI RTM RTR RTP │
   │ LHP LHR LHM LHI LHC │ │ RHC RHI RHM RHR RHP │
   │     LBR LBM LBI     │ │     RBI RBM RBR     │
   ╰──────────╮  LT1 LT0 │ │ RT0 RT1 ╭───────────╯
              ╰──────────╯ ╰─────────╯

    XYZ :
        - X ∈ {L (left), R (right)}
        - Y ∈ {T (top), H (home), B (bottom), T (thumb)}
        - Z ∈ {P (pinky), R (ring), M (middle), I (index), C (center)} ∪ {0, 1} for thumbs
*/

// Key position assignment
#define LTP 00
#define LTR 01
#define LTM 02
#define LTI 03
#define LTC 04
#define RTC 05
#define RTI 06
#define RTM 07
#define RTR 08
#define RTP 09
#define LHP 10
#define LHR 11
#define LHM 12
#define LHI 13
#define LHC 14
#define RHC 15
#define RHI 16
#define RHM 17
#define RHR 18
#define RHP 19
#define LBR 20
#define LBM 21
#define LBI 22
#define RBI 23
#define RBM 24
#define RBR 25
#define LT1 26
#define LT0 27
#define RT0 28
#define RT1 29

// Layers
#define ALP_L 0
#define ACC_L 1
#define NAV_L 2
#define MSE_L 3
#define FUN_L 4

// Timeout for combos
#define CMB_DEF 50      // [ms]
#define CMB_SHORT 30    // [ms]

// Macro settings
#define MCR_WAIT_TIME = 20  // [ms]
#define MCR_TAP_TIME = 10   // [ms]

// Behaviors
// #define TAPPING_TERM = 250  // [ms]
// #define QUICK_TAP_TERM = 0  // [ms]