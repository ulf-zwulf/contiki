/**
 * @file
 * @brief This file contains RF230-formatted register definitions for the atmega128rfa1
 */
/*   Copyright (c) 2008, Swedish Institute of Computer Science

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef PHY256RFR2_REGISTERMAP_EXTERNAL_H
#define PHY256RFR2_REGISTERMAP_EXTERNAL_H

/* RF230 register access is through SPI which transfers 8 bits address/8 bits data.
 * ATmega128rfa1 registers are defined in I/O space, e.g. in gcc /include/avr/iom128rfa1.h
 * A typical definition is #define TRX_STATUS _SFR_MEM8(0x141)
 * Registers can be read with a macro, but the args for subregisters don't expand properly so the actual address
 * is used with explicit _SFR_MEM8 in the subregister read/write routines.
 */


#define RG_SCTSTRHH (0xFC) 
//SCTSTRHH7 SCTSTRHH6 SCTSTRHH5 SCTSTRHH4 SCTSTRHH3 SCTSTRHH2 SCTSTRHH1 SCTSTRHH0 page 165
#define RG_SCTSTRHL (0xFB) 
//SCTSTRHL7 SCTSTRHL6 SCTSTRHL5 SCTSTRHL4 SCTSTRHL3 SCTSTRHL2 SCTSTRHL1 SCTSTRHL0 page 165
#define RG_SCTSTRLH (0xFA) 
//SCTSTRLH7 SCTSTRLH6 SCTSTRLH5 SCTSTRLH4 SCTSTRLH3 SCTSTRLH2 SCTSTRLH1 SCTSTRLH0 page 165
#define RG_SCTSTRLL (0xF9) 
//SCTSTRLL7 SCTSTRLL6 SCTSTRLL5 SCTSTRLL4 SCTSTRLL3 SCTSTRLL2 SCTSTRLL1 SCTSTRLL0 page 165
#define RG_SCOCR1HH (0xF8) 
//SCOCR1HH7 SCOCR1HH6 SCOCR1HH5 SCOCR1HH4 SCOCR1HH3 SCOCR1HH2 SCOCR1HH1 SCOCR1HH0 page 168
#define RG_SCOCR1HL (0xF7) 
//SCOCR1HL7 SCOCR1HL6 SCOCR1HL5 SCOCR1HL4 SCOCR1HL3 SCOCR1HL2 SCOCR1HL1 SCOCR1HL0 page 168
#define RG_SCOCR1LH (0xF6) 
//SCOCR1LH7 SCOCR1LH6 SCOCR1LH5 SCOCR1LH4 SCOCR1LH3 SCOCR1LH2 SCOCR1LH1 SCOCR1LH0 page 168
#define RG_SCOCR1LL (0xF5) 
//SCOCR1LL7 SCOCR1LL6 SCOCR1LL5 SCOCR1LL4 SCOCR1LL3 SCOCR1LL2 SCOCR1LL1 SCOCR1LL0 page 169
#define RG_SCOCR2HH (0xF4) 
//SCOCR2HH7 SCOCR2HH6 SCOCR2HH5 SCOCR2HH4 SCOCR2HH3 SCOCR2HH2 SCOCR2HH1 SCOCR2HH0 page 169
#define RG_SCOCR2HL (0xF3) 
//SCOCR2HL7 SCOCR2HL6 SCOCR2HL5 SCOCR2HL4 SCOCR2HL3 SCOCR2HL2 SCOCR2HL1 SCOCR2HL0 page 169
#define RG_SCOCR2LH (0xF2) 
//SCOCR2LH7 SCOCR2LH6 SCOCR2LH5 SCOCR2LH4 SCOCR2LH3 SCOCR2LH2 SCOCR2LH1 SCOCR2LH0 page 169
#define RG_SCOCR2LL (0xF1) 
//SCOCR2LL7 SCOCR2LL6 SCOCR2LL5 SCOCR2LL4 SCOCR2LL3 SCOCR2LL2 SCOCR2LL1 SCOCR2LL0 page 170
#define RG_SCOCR3HH (0xF0) 
//SCOCR3HH7 SCOCR3HH6 SCOCR3HH5 SCOCR3HH4 SCOCR3HH3 SCOCR3HH2 SCOCR3HH1 SCOCR3HH0 page 170
#define RG_SCOCR3HL (0xEF) 
//SCOCR3HL7 SCOCR3HL6 SCOCR3HL5 SCOCR3HL4 SCOCR3HL3 SCOCR3HL2 SCOCR3HL1 SCOCR3HL0 page 170
#define RG_SCOCR3LH (0xEE) 
//SCOCR3LH7 SCOCR3LH6 SCOCR3LH5 SCOCR3LH4 SCOCR3LH3 SCOCR3LH2 SCOCR3LH1 SCOCR3LH0 page 170
#define RG_SCOCR3LL (0xED) 
//SCOCR3LL7 SCOCR3LL6 SCOCR3LL5 SCOCR3LL4 SCOCR3LL3 SCOCR3LL2 SCOCR3LL1 SCOCR3LL0 page 171
#define RG_SCTSRHH (0xEC) 
//SCTSRHH7 SCTSRHH6 SCTSRHH5 SCTSRHH4 SCTSRHH3 SCTSRHH2 SCTSRHH1 SCTSRHH0 page 164
#define RG_SCTSRHL (0xEB) 
//SCTSRHL7 SCTSRHL6 SCTSRHL5 SCTSRHL4 SCTSRHL3 SCTSRHL2 SCTSRHL1 SCTSRHL0 page 164
#define RG_SCTSRLH (0xEA) 
//SCTSRLH7 SCTSRLH6 SCTSRLH5 SCTSRLH4 SCTSRLH3 SCTSRLH2 SCTSRLH1 SCTSRLH0 page 164
#define RG_SCTSRLL (0xE9) 
//SCTSRLL7 SCTSRLL6 SCTSRLL5 SCTSRLL4 SCTSRLL3 SCTSRLL2 SCTSRLL1 SCTSRLL0 page 164
#define RG_SCBTSRHH (0xE8) 
//SCBTSRHH7 SCBTSRHH6 SCBTSRHH5 SCBTSRHH4 SCBTSRHH3 SCBTSRHH2 SCBTSRHH1 SCBTSRHH0 page 167
#define RG_SCBTSRHL (0xE7) 
//SCBTSRHL7 SCBTSRHL6 SCBTSRHL5 SCBTSRHL4 SCBTSRHL3 SCBTSRHL2 SCBTSRHL1 SCBTSRHL0 page 167
#define RG_SCBTSRLH (0xE6) 
//SCBTSRLH7 SCBTSRLH6 SCBTSRLH5 SCBTSRLH4 SCBTSRLH3 SCBTSRLH2 SCBTSRLH1 SCBTSRLH0 page 167
#define RG_SCBTSRLL (0xE5) 
//SCBTSRLL7 SCBTSRLL6 SCBTSRLL5 SCBTSRLL4 SCBTSRLL3 SCBTSRLL2 SCBTSRLL1 SCBTSRLL0 page 168
#define RG_SCCNTHH (0xE4) 
//SCCNTHH7 SCCNTHH6 SCCNTHH5 SCCNTHH4 SCCNTHH3 SCCNTHH2 SCCNTHH1 SCCNTHH0 page 163
#define RG_SCCNTHL (0xE3) 
//SCCNTHL7 SCCNTHL6 SCCNTHL5 SCCNTHL4 SCCNTHL3 SCCNTHL2 SCCNTHL1 SCCNTHL0 page 163
#define RG_SCCNTLH (0xE2) 
//SCCNTLH7 SCCNTLH6 SCCNTLH5 SCCNTLH4 SCCNTLH3 SCCNTLH2 SCCNTLH1 SCCNTLH0 page 163
#define RG_SCCNTLL (0xE1) 
//SCCNTLL7 SCCNTLL6 SCCNTLL5 SCCNTLL4 SCCNTLL3 SCCNTLL2 SCCNTLL1 SCCNTLL0 page 163
#define RG_SCIRQS (0xE0) 
//Res2 Res1 Res0 IRQSBO IRQSOF IRQSCP3 IRQSCP2 IRQSCP1 page 173
#define RG_SCIRQM (0xDF) 
//Res2 Res1 Res0 IRQMBO IRQMOF IRQMCP3 IRQMCP2 IRQMCP1 page 174

#define RG_TRX_STATUS         TRX_STATUS
#define SR_TRX_STATUS         0x141, 0x1f, 0
#define SR_TRX_CMD            0x142, 0x1f, 0
#define STATE_TRANSITION      (31)
#define SR_TX_PWR             0x145, 0x0f, 0
#define RG_VERSION_NUM        VERSION_NUM
#define RG_MAN_ID_0           MAN_ID_0
#define RG_IRQ_MASK           IRQ_MASK
#define SR_MAX_FRAME_RETRIES  0x16C, 0xf0, 4
#define SR_TX_AUTO_CRC_ON     0x144, 0x20, 5
#define SR_TRAC_STATUS        0x142, 0xe0, 5
#define SR_CHANNEL            0x148, 0x1f, 0
#define SR_CCA_MODE           0x148, 0x60, 5
#define SR_CCA_REQUEST        0x148, 0x80, 7
#define RG_PAN_ID_0           PAN_ID_0
#define RG_PAN_ID_1           PAN_ID_1
#define RG_SHORT_ADDR_0       SHORT_ADDR_0
#define RG_SHORT_ADDR_1       SHORT_ADDR_1
#define RG_IEEE_ADDR_0        IEEE_ADDR_0
#define RG_IEEE_ADDR_1        IEEE_ADDR_1
#define RG_IEEE_ADDR_2        IEEE_ADDR_2
#define RG_IEEE_ADDR_3        IEEE_ADDR_3
#define RG_IEEE_ADDR_4        IEEE_ADDR_4
#define RG_IEEE_ADDR_5        IEEE_ADDR_5
#define RG_IEEE_ADDR_6        IEEE_ADDR_6
#define RG_IEEE_ADDR_7        IEEE_ADDR_7
//#define SR_ED_LEVEL           0x147, 0xff, 0
#define RG_PHY_ED_LEVEL       PHY_ED_LEVEL
#define RG_RX_SYN             RX_SYN
#define SR_RSSI               0x146, 0x1f, 0
#define SR_RX_SYN             0x155, 0xff, 0
#define SR_TRX_RPC            0x156, 0xff, 0
#define SR_XAH_CTRL_1         0x157, 0xf5, 2
#define SR_PLL_CF_START       0x15a, 0x80, 7
#define SR_PLL_DCU_START      0x15b, 0x80, 7
#define SR_MAX_CSMA_RETRIES   0x16c, 0x0e, 1
#define RG_CSMA_BE            CSMA_BE
#define RG_CSMA_SEED_0        CSMA_SEED_0
#define RG_PHY_RSSI           PHY_RSSI
//#define SR_CCA_CS_THRES       0x149, 0xf0, 4
#define SR_CCA_ED_THRES        0x149, 0x0f, 0
#define SR_CCA_DONE            0x141, 0x80, 7
#define SR_CCA_STATUS          0x141, 0x40, 6
#define SR_AACK_SET_PD         0x16e, 0x20, 5
#define SR_CSMA_SEED_1         0x16e, 0x10, 4

/* RF230 register assignments, for reference */
#if 1
//#define HAVE_REGISTER_MAP (1)
/** Offset for register TRX_STATUS */
//#define RG_TRX_STATUS                    (0x01)
/** Access parameters for sub-register CCA_DONE in register @ref RG_TRX_STATUS */
//#define SR_CCA_DONE                  0x01, 0x80, 7
/** Access parameters for sub-register CCA_STATUS in register @ref RG_TRX_STATUS */
//#define SR_CCA_STATUS                0x01, 0x40, 6
//#define SR_reserved_01_3             0x01, 0x20, 5
/** Access parameters for sub-register TRX_STATUS in register @ref RG_TRX_STATUS */
//#define SR_TRX_STATUS                0x01, 0x1f, 0
/** Constant P_ON for sub-register @ref SR_TRX_STATUS */
//#define P_ON                     (0)
/** Constant BUSY_RX for sub-register @ref SR_TRX_STATUS */
#define BUSY_RX                  (1)
/** Constant BUSY_TX for sub-register @ref SR_TRX_STATUS */
#define BUSY_TX                  (2)
/** Constant RX_ON for sub-register @ref SR_TRX_STATUS */
#define RX_ON                    (6)
/** Constant TRX_OFF for sub-register @ref SR_TRX_STATUS */
#define TRX_OFF                  (8)
/** Constant PLL_ON for sub-register @ref SR_TRX_STATUS */
#define PLL_ON                   (9)
/** Constant SLEEP for sub-register @ref SR_TRX_STATUS */
//#define SLEEP                    (15)
/** Constant BUSY_RX_AACK for sub-register @ref SR_TRX_STATUS */
#define BUSY_RX_AACK             (17)
/** Constant BUSY_TX_ARET for sub-register @ref SR_TRX_STATUS */
#define BUSY_TX_ARET             (18)
/** Constant RX_AACK_ON for sub-register @ref SR_TRX_STATUS */
#define RX_AACK_ON               (22)
/** Constant TX_ARET_ON for sub-register @ref SR_TRX_STATUS */
#define TX_ARET_ON               (25)
/** Constant RX_ON_NOCLK for sub-register @ref SR_TRX_STATUS */
//#define RX_ON_NOCLK              (28)
/** Constant RX_AACK_ON_NOCLK for sub-register @ref SR_TRX_STATUS */
//#define RX_AACK_ON_NOCLK         (29)
/** Constant BUSY_RX_AACK_NOCLK for sub-register @ref SR_TRX_STATUS */
//#define BUSY_RX_AACK_NOCLK       (30)
/** Constant STATE_TRANSITION for sub-register @ref SR_TRX_STATUS */
//#define STATE_TRANSITION         (31)

/** Offset for register TRX_STATE */
//#define RG_TRX_STATE                     (0x02)
/** Access parameters for sub-register TRAC_STATUS in register @ref RG_TRX_STATE */
//#define SR_TRAC_STATUS               0x02, 0xe0, 5
/** Access parameters for sub-register TRX_CMD in register @ref RG_TRX_STATE */
//#define SR_TRX_CMD                   0x02, 0x1f, 0
/** Constant CMD_NOP for sub-register @ref SR_TRX_CMD */
//#define CMD_NOP                  (0)
/** Constant CMD_TX_START for sub-register @ref SR_TRX_CMD */
//#define CMD_TX_START             (2)
/** Constant CMD_FORCE_TRX_OFF for sub-register @ref SR_TRX_CMD */
#define CMD_FORCE_TRX_OFF        (3)
///** Constant CMD_RX_ON for sub-register @ref SR_TRX_CMD */
//#define CMD_RX_ON                (6)
///** Constant CMD_TRX_OFF for sub-register @ref SR_TRX_CMD */
//#define CMD_TRX_OFF              (8)
///** Constant CMD_PLL_ON for sub-register @ref SR_TRX_CMD */
//#define CMD_PLL_ON               (9)
///** Constant CMD_RX_AACK_ON for sub-register @ref SR_TRX_CMD */
//#define CMD_RX_AACK_ON           (22)
///** Constant CMD_TX_ARET_ON for sub-register @ref SR_TRX_CMD */
//#define CMD_TX_ARET_ON           (25)
///** Offset for register TRX_CTRL_0 */
//#define RG_TRX_CTRL_0                    (0x03)
///** Offset for register TRX_CTRL_1 */
//#define RG_TRX_CTRL_1                    (0x04)
///** Access parameters for sub-register PAD_IO in register @ref RG_TRX_CTRL_0 */
//#define SR_PAD_IO                    0x03, 0xc0, 6
///** Access parameters for sub-register PAD_IO_CLKM in register @ref RG_TRX_CTRL_0 */
//#define SR_PAD_IO_CLKM               0x03, 0x30, 4
///** Constant CLKM_2mA for sub-register @ref SR_PAD_IO_CLKM */
//#define CLKM_2mA                 (0)
///** Constant CLKM_4mA for sub-register @ref SR_PAD_IO_CLKM */
//#define CLKM_4mA                 (1)
///** Constant CLKM_6mA for sub-register @ref SR_PAD_IO_CLKM */
//#define CLKM_6mA                 (2)
///** Constant CLKM_8mA for sub-register @ref SR_PAD_IO_CLKM */
//#define CLKM_8mA                 (3)
///** Access parameters for sub-register CLKM_SHA_SEL in register @ref RG_TRX_CTRL_0 */
//#define SR_CLKM_SHA_SEL              0x03, 0x08, 3
///** Access parameters for sub-register CLKM_CTRL in register @ref RG_TRX_CTRL_0 */
//#define SR_CLKM_CTRL                 0x03, 0x07, 0
///** Constant CLKM_no_clock for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_no_clock            (0)
///** Constant CLKM_1MHz for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_1MHz                (1)
///** Constant CLKM_2MHz for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_2MHz                (2)
///** Constant CLKM_4MHz for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_4MHz                (3)
///** Constant CLKM_8MHz for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_8MHz                (4)
///** Constant CLKM_16MHz for sub-register @ref SR_CLKM_CTRL */
//#define CLKM_16MHz               (5)
///** Offset for register PHY_TX_PWR */
//#define RG_PHY_TX_PWR                    (0x05)
///** Access parameters for sub-register TX_AUTO_CRC_ON in register @ref RG_PHY_TX_PWR */
//#define SR_TX_AUTO_CRC_ON            0x05, 0x80, 7
//#define SR_reserved_05_2             0x05, 0x70, 4
///** Access parameters for sub-register TX_PWR in register @ref RG_PHY_TX_PWR */
//#define SR_TX_PWR                    0x05, 0x0f, 0
///** Offset for register PHY_RSSI */
//#define RG_PHY_RSSI                      (0x06)
//#define SR_reserved_06_1             0x06, 0xe0, 5
///** Access parameters for sub-register RSSI in register @ref RG_PHY_RSSI */
//#define SR_RSSI                      0x06, 0x1f, 0
///** Offset for register PHY_ED_LEVEL */
//#define RG_PHY_ED_LEVEL                  (0x07)
///** Access parameters for sub-register ED_LEVEL in register @ref RG_PHY_ED_LEVEL */
//#define SR_ED_LEVEL                  0x07, 0xff, 0
///** Offset for register PHY_CC_CCA */
//#define RG_PHY_CC_CCA                    (0x08)
///** Access parameters for sub-register CCA_REQUEST in register @ref RG_PHY_CC_CCA */
//#define SR_CCA_REQUEST               0x08, 0x80, 7
///** Access parameters for sub-register CCA_MODE in register @ref RG_PHY_CC_CCA */
//#define SR_CCA_MODE                  0x08, 0x60, 5
///** Access parameters for sub-register CHANNEL in register @ref RG_PHY_CC_CCA */
//#define SR_CHANNEL                   0x08, 0x1f, 0
///** Offset for register CCA_THRES */
//#define RG_CCA_THRES                     (0x09)
///** Access parameters for sub-register CCA_CS_THRES in register @ref RG_CCA_THRES */
//#define SR_CCA_CS_THRES              0x09, 0xf0, 4
///** Access parameters for sub-register CCA_ED_THRES in register @ref RG_CCA_THRES */
//#define SR_CCA_ED_THRES              0x09, 0x0f, 0
///** Offset for register IRQ_MASK */
//#define RG_IRQ_MASK                      (0x0e)
///** Access parameters for sub-register IRQ_MASK in register @ref RG_IRQ_MASK */
//#define SR_IRQ_MASK                  0x0e, 0xff, 0
///** Offset for register IRQ_STATUS */
//#define RG_IRQ_STATUS                    (0x0f)
///** Access parameters for sub-register IRQ_7_BAT_LOW in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_7_BAT_LOW             0x0f, 0x80, 7
///** Access parameters for sub-register IRQ_6_TRX_UR in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_6_TRX_UR              0x0f, 0x40, 6
///** Access parameters for sub-register IRQ_5 in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_5                     0x0f, 0x20, 5
///** Access parameters for sub-register IRQ_4 in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_4                     0x0f, 0x10, 4
///** Access parameters for sub-register IRQ_3_TRX_END in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_3_TRX_END             0x0f, 0x08, 3
///** Access parameters for sub-register IRQ_2_RX_START in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_2_RX_START            0x0f, 0x04, 2
///** Access parameters for sub-register IRQ_1_PLL_UNLOCK in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_1_PLL_UNLOCK          0x0f, 0x02, 1
///** Access parameters for sub-register IRQ_0_PLL_LOCK in register @ref RG_IRQ_STATUS */
//#define SR_IRQ_0_PLL_LOCK            0x0f, 0x01, 0
///** Offset for register VREG_CTRL */
//#define RG_VREG_CTRL                     (0x10)
///** Access parameters for sub-register AVREG_EXT in register @ref RG_VREG_CTRL */
//#define SR_AVREG_EXT                 0x10, 0x80, 7
///** Access parameters for sub-register AVDD_OK in register @ref RG_VREG_CTRL */
//#define SR_AVDD_OK                   0x10, 0x40, 6
///** Access parameters for sub-register AVREG_TRIM in register @ref RG_VREG_CTRL */
//#define SR_AVREG_TRIM                0x10, 0x30, 4
///** Constant AVREG_1_80V for sub-register @ref SR_AVREG_TRIM */
//#define AVREG_1_80V              (0)
///** Constant AVREG_1_75V for sub-register @ref SR_AVREG_TRIM */
//#define AVREG_1_75V              (1)
///** Constant AVREG_1_84V for sub-register @ref SR_AVREG_TRIM */
//#define AVREG_1_84V              (2)
///** Constant AVREG_1_88V for sub-register @ref SR_AVREG_TRIM */
//#define AVREG_1_88V              (3)
///** Access parameters for sub-register DVREG_EXT in register @ref RG_VREG_CTRL */
//#define SR_DVREG_EXT                 0x10, 0x08, 3
///** Access parameters for sub-register DVDD_OK in register @ref RG_VREG_CTRL */
//#define SR_DVDD_OK                   0x10, 0x04, 2
///** Access parameters for sub-register DVREG_TRIM in register @ref RG_VREG_CTRL */
//#define SR_DVREG_TRIM                0x10, 0x03, 0
///** Constant DVREG_1_80V for sub-register @ref SR_DVREG_TRIM */
//#define DVREG_1_80V              (0)
///** Constant DVREG_1_75V for sub-register @ref SR_DVREG_TRIM */
//#define DVREG_1_75V              (1)
///** Constant DVREG_1_84V for sub-register @ref SR_DVREG_TRIM */
//#define DVREG_1_84V              (2)
///** Constant DVREG_1_88V for sub-register @ref SR_DVREG_TRIM */
//#define DVREG_1_88V              (3)
///** Offset for register BATMON */
//#define RG_BATMON                        (0x11)
//#define SR_reserved_11_1             0x11, 0xc0, 6
///** Access parameters for sub-register BATMON_OK in register @ref RG_BATMON */
//#define SR_BATMON_OK                 0x11, 0x20, 5
///** Access parameters for sub-register BATMON_HR in register @ref RG_BATMON */
//#define SR_BATMON_HR                 0x11, 0x10, 4
///** Access parameters for sub-register BATMON_VTH in register @ref RG_BATMON */
//#define SR_BATMON_VTH                0x11, 0x0f, 0
///** Offset for register XOSC_CTRL */
//#define RG_XOSC_CTRL                     (0x12)
///** Offset for register RX_SYN */
//#define RG_RX_SYN                        0x15
///** Offset for register XAH_CTRL_1 */
//#define RG_XAH_CTRL_1                      0x17
///** Access parameters for sub-register XTAL_MODE in register @ref RG_XOSC_CTRL */
//#define SR_XTAL_MODE                 0x12, 0xf0, 4
///** Access parameters for sub-register XTAL_TRIM in register @ref RG_XOSC_CTRL */
//#define SR_XTAL_TRIM                 0x12, 0x0f, 0
///** Offset for register FTN_CTRL */
//#define RG_FTN_CTRL                      (0x18)
///** Access parameters for sub-register FTN_START in register @ref RG_FTN_CTRL */
//#define SR_FTN_START                 0x18, 0x80, 7
//#define SR_reserved_18_2             0x18, 0x40, 6
///** Access parameters for sub-register FTNV in register @ref RG_FTN_CTRL */
//#define SR_FTNV                      0x18, 0x3f, 0
///** Offset for register PLL_CF */
//#define RG_PLL_CF                        (0x1a)
///** Access parameters for sub-register PLL_CF_START in register @ref RG_PLL_CF */
//#define SR_PLL_CF_START              0x1a, 0x80, 7
//#define SR_reserved_1a_2             0x1a, 0x70, 4
///** Access parameters for sub-register PLL_CF in register @ref RG_PLL_CF */
//#define SR_PLL_CF                    0x1a, 0x0f, 0
///** Offset for register PLL_DCU */
//#define RG_PLL_DCU                       (0x1b)
///** Access parameters for sub-register PLL_DCU_START in register @ref RG_PLL_DCU */
//#define SR_PLL_DCU_START             0x1b, 0x80, 7
//#define SR_reserved_1b_2             0x1b, 0x40, 6
///** Access parameters for sub-register PLL_DCUW in register @ref RG_PLL_DCU */
//#define SR_PLL_DCUW                  0x1b, 0x3f, 0
///** Offset for register PART_NUM */
//#define RG_PART_NUM                      (0x1c)
///** Access parameters for sub-register PART_NUM in register @ref RG_PART_NUM */
//#define SR_PART_NUM                  0x1c, 0xff, 0
///** Constant RF230 for sub-register @ref SR_PART_NUM */
//#define RF230                    (2)
///** Offset for register VERSION_NUM */
//#define RG_VERSION_NUM                   (0x1d)
///** Access parameters for sub-register VERSION_NUM in register @ref RG_VERSION_NUM */
//#define SR_VERSION_NUM               0x1d, 0xff, 0
///** Offset for register MAN_ID_0 */
//#define RG_MAN_ID_0                      (0x1e)
///** Access parameters for sub-register MAN_ID_0 in register @ref RG_MAN_ID_0 */
//#define SR_MAN_ID_0                  0x1e, 0xff, 0
///** Offset for register MAN_ID_1 */
//#define RG_MAN_ID_1                      (0x1f)
///** Access parameters for sub-register MAN_ID_1 in register @ref RG_MAN_ID_1 */
//#define SR_MAN_ID_1                  0x1f, 0xff, 0
///** Offset for register SHORT_ADDR_0 */
//#define RG_SHORT_ADDR_0                  (0x20)
///** Access parameters for sub-register SHORT_ADDR_0 in register @ref RG_SHORT_ADDR_0 */
//#define SR_SHORT_ADDR_0              0x20, 0xff, 0
///** Offset for register SHORT_ADDR_1 */
//#define RG_SHORT_ADDR_1                  (0x21)
///** Access parameters for sub-register SHORT_ADDR_1 in register @ref RG_SHORT_ADDR_1 */
//#define SR_SHORT_ADDR_1              0x21, 0xff, 0
///** Offset for register PAN_ID_0 */
//#define RG_PAN_ID_0                      (0x22)
///** Access parameters for sub-register PAN_ID_0 in register @ref RG_PAN_ID_0 */
//#define SR_PAN_ID_0                  0x22, 0xff, 0
///** Offset for register PAN_ID_1 */
//#define RG_PAN_ID_1                      (0x23)
///** Access parameters for sub-register PAN_ID_1 in register @ref RG_PAN_ID_1 */
//#define SR_PAN_ID_1                  0x23, 0xff, 0
///** Offset for register IEEE_ADDR_0 */
//#define RG_IEEE_ADDR_0                   (0x24)
///** Access parameters for sub-register IEEE_ADDR_0 in register @ref RG_IEEE_ADDR_0 */
//#define SR_IEEE_ADDR_0               0x24, 0xff, 0
///** Offset for register IEEE_ADDR_1 */
//#define RG_IEEE_ADDR_1                   (0x25)
///** Access parameters for sub-register IEEE_ADDR_1 in register @ref RG_IEEE_ADDR_1 */
//#define SR_IEEE_ADDR_1               0x25, 0xff, 0
///** Offset for register IEEE_ADDR_2 */
//#define RG_IEEE_ADDR_2                   (0x26)
///** Access parameters for sub-register IEEE_ADDR_2 in register @ref RG_IEEE_ADDR_2 */
//#define SR_IEEE_ADDR_2               0x26, 0xff, 0
///** Offset for register IEEE_ADDR_3 */
//#define RG_IEEE_ADDR_3                   (0x27)
///** Access parameters for sub-register IEEE_ADDR_3 in register @ref RG_IEEE_ADDR_3 */
//#define SR_IEEE_ADDR_3               0x27, 0xff, 0
///** Offset for register IEEE_ADDR_4 */
//#define RG_IEEE_ADDR_4                   (0x28)
///** Access parameters for sub-register IEEE_ADDR_4 in register @ref RG_IEEE_ADDR_4 */
//#define SR_IEEE_ADDR_4               0x28, 0xff, 0
///** Offset for register IEEE_ADDR_5 */
//#define RG_IEEE_ADDR_5                   (0x29)
///** Access parameters for sub-register IEEE_ADDR_5 in register @ref RG_IEEE_ADDR_5 */
//#define SR_IEEE_ADDR_5               0x29, 0xff, 0
///** Offset for register IEEE_ADDR_6 */
//#define RG_IEEE_ADDR_6                   (0x2a)
///** Access parameters for sub-register IEEE_ADDR_6 in register @ref RG_IEEE_ADDR_6 */
//#define SR_IEEE_ADDR_6               0x2a, 0xff, 0
///** Offset for register IEEE_ADDR_7 */
//#define RG_IEEE_ADDR_7                   (0x2b)
///** Access parameters for sub-register IEEE_ADDR_7 in register @ref RG_IEEE_ADDR_7 */
//#define SR_IEEE_ADDR_7               0x2b, 0xff, 0
///** Offset for register XAH_CTRL */
//#define RG_XAH_CTRL_0                     (0x2c)
///** Access parameters for sub-register MAX_FRAME_RETRIES in register @ref RG_XAH_CTRL_0 */
//#define SR_MAX_FRAME_RETRIES         0x2c, 0xf0, 4
///** Access parameters for sub-register MAX_CSMA_RETRIES in register @ref RG_XAH_CTRL_0 */
//#define SR_MAX_CSMA_RETRIES          0x2c, 0x0e, 1
//#define SR_reserved_2c_3             0x2c, 0x01, 0
///** Offset for register CSMA_SEED_0 */
//#define RG_CSMA_SEED_0                   (0x2d)
///** Access parameters for sub-register CSMA_SEED_0 in register @ref RG_CSMA_SEED_0 */
//#define SR_CSMA_SEED_0               0x2d, 0xff, 0
///** Offset for register CSMA_SEED_1 */
//#define RG_CSMA_SEED_1                   (0x2e)
///** Offset for register CSMA_BE */
//#define RG_CSMA_BE                      0x2f
///** Access parameters for sub-register MIN_BE in register @ref RG_CSMA_SEED_1 */
//#define SR_MIN_BE                    0x2e, 0xc0, 6
//#define SR_reserved_2e_2             0x2e, 0x30, 4
///** Access parameters for sub-register I_AM_COORD in register @ref RG_CSMA_SEED_1 */
//#define SR_I_AM_COORD                0x2e, 0x08, 3
///** Access parameters for sub-register CSMA_SEED_1 in register @ref RG_CSMA_SEED_1 */
//#define SR_CSMA_SEED_1               0x2e, 0x07, 0
#endif
#endif /* PHY256RFR2y_REGISTERMAP_EXTERNAL_H */
