#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ                         24000000U  /*!< Board xtal0 frequency in Hz */

#define BOARD_XTAL32K_CLK_HZ                          32768U  /*!< Board xtal32k frequency in Hz */
/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ************************ Configuration RTECLK_Run600M *************************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for RTECLK_Run600M configuration
 ******************************************************************************/
#define RTECLK_RUN600M_CORE_CLOCK                 600000000U  /*!< Core clock frequency: 600000000Hz */

/* Clock outputs (values are in Hz): */
#define RTECLK_RUN600M_AHB_CLK_ROOT                   600000000UL
#define RTECLK_RUN600M_CAN_CLK_ROOT                   60000000UL
#define RTECLK_RUN600M_CKIL_SYNC_CLK_ROOT             32768UL
#define RTECLK_RUN600M_CLKO1_CLK                      0UL
#define RTECLK_RUN600M_CLKO2_CLK                      0UL
#define RTECLK_RUN600M_CLK_1M                         1000000UL
#define RTECLK_RUN600M_CLK_24M                        24000000UL
#define RTECLK_RUN600M_CSI_CLK_ROOT                   24000000UL
#define RTECLK_RUN600M_ENET1_TX_CLK                   0UL
#define RTECLK_RUN600M_ENET_125M_CLK                  0UL
#define RTECLK_RUN600M_ENET_25M_REF_CLK               0UL
#define RTECLK_RUN600M_FLEXIO1_CLK_ROOT               120000000UL
#define RTECLK_RUN600M_FLEXIO2_CLK_ROOT               120000000UL
#define RTECLK_RUN600M_FLEXSPI_CLK_ROOT               127058823UL
#define RTECLK_RUN600M_GPT1_IPG_CLK_HIGHFREQ          75000000UL
#define RTECLK_RUN600M_GPT2_IPG_CLK_HIGHFREQ          75000000UL
#define RTECLK_RUN600M_IPG_CLK_ROOT                   150000000UL
#define RTECLK_RUN600M_LCDIF_CLK_ROOT                 60000000UL
#define RTECLK_RUN600M_LPI2C_CLK_ROOT                 60000000UL
#define RTECLK_RUN600M_LPSPI_CLK_ROOT                 120000000UL
#define RTECLK_RUN600M_LVDS1_CLK                      1200000000UL
#define RTECLK_RUN600M_MQS_MCLK                       0UL
#define RTECLK_RUN600M_PERCLK_CLK_ROOT                75000000UL
#define RTECLK_RUN600M_PLL7_MAIN_CLK                  24000000UL
#define RTECLK_RUN600M_SAI1_CLK_ROOT                  0UL
#define RTECLK_RUN600M_SAI1_MCLK1                     0UL
#define RTECLK_RUN600M_SAI1_MCLK2                     0UL
#define RTECLK_RUN600M_SAI1_MCLK3                     0UL
#define RTECLK_RUN600M_SAI2_CLK_ROOT                  0UL
#define RTECLK_RUN600M_SAI2_MCLK1                     0UL
#define RTECLK_RUN600M_SAI2_MCLK2                     0UL
#define RTECLK_RUN600M_SAI2_MCLK3                     0UL
#define RTECLK_RUN600M_SAI3_CLK_ROOT                  0UL
#define RTECLK_RUN600M_SAI3_MCLK1                     0UL
#define RTECLK_RUN600M_SAI3_MCLK2                     0UL
#define RTECLK_RUN600M_SAI3_MCLK3                     0UL
#define RTECLK_RUN600M_SEMC_CLK_ROOT                  150000000UL
#define RTECLK_RUN600M_SPDIF0_CLK_ROOT                0UL
#define RTECLK_RUN600M_SPDIF0_EXTCLK_OUT              0UL
#define RTECLK_RUN600M_TRACE_CLK_ROOT                 132000000UL
#define RTECLK_RUN600M_UART_CLK_ROOT                  80000000UL
#define RTECLK_RUN600M_USBPHY1_CLK                    480000000UL
#define RTECLK_RUN600M_USBPHY2_CLK                    0UL
#define RTECLK_RUN600M_USDHC1_CLK_ROOT                198000000UL
#define RTECLK_RUN600M_USDHC2_CLK_ROOT                198000000UL

/*! @brief Arm PLL set for RTECLK_Run600M configuration.
 */
extern const clock_arm_pll_config_t armPllConfig_RTECLK_Run600M;
/*! @brief Usb1 PLL set for RTECLK_Run600M configuration.
 */
extern const clock_usb_pll_config_t usb1PllConfig_RTECLK_Run600M;
/*! @brief Sys PLL for RTECLK_Run600M configuration.
 */
extern const clock_sys_pll_config_t sysPllConfig_RTECLK_Run600M;

/*******************************************************************************
 * API for RTECLK_Run600M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void RTECLK_Run600M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */

