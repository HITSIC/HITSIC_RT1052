/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_pit.h"
#include "fsl_cmp.h"
#include "fsl_clock.h"
#include "fsl_lpuart.h"
#include "fsl_adc.h"
#include "fsl_aoi.h"
#include "fsl_csi.h"
#include "fsl_gpio.h"
#include "fsl_lpi2c.h"
#include "fsl_lpspi.h"
#include "fsl_enc.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for RTE_PIP functional group */
/* Used DMA device. */
#define EDMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define EDMA_DMAMUX_BASEADDR DMAMUX
/* RTE_PIP defines for PIT */
/* Definition of peripheral ID. */
#define PIT_PERIPHERAL PIT
/* Definition of clock source frequency. */
#define PIT_CLK_FREQ 75000000UL
/* Definition of ticks count for channel 0. */
#define PIT_0_TICKS 74U
/* Definition of ticks count for cahnnel 1. */
#define PIT_1_TICKS 4294967294U
/* Definition of ticks count for channel 2. */
#define PIT_2_TICKS 74999U
/* PIT interrupt vector ID (number). */
#define PIT_IRQN PIT_IRQn
/* PIT interrupt vector priority. */
#define PIT_IRQ_PRIORITY 4
/* PIT interrupt handler identifier. */
#define PIT_IRQHandler PIT_IRQHandler
/* Definition of peripheral ID */
#define CMP_1_PERIPHERAL CMP1
/* Definition of positive input source used in CMP_SetInputChannels() function */
#define CMP_1_POSITIVE_INPUT_NUMBER 3U
/* Definition of negative input source used in CMP_SetInputChannels() function */
#define CMP_1_NEGATIVE_INPUT_NUMBER 7U
/* Definition of peripheral ID */
#define CMP_2_PERIPHERAL CMP2
/* Definition of positive input source used in CMP_SetInputChannels() function */
#define CMP_2_POSITIVE_INPUT_NUMBER 2U
/* Definition of negative input source used in CMP_SetInputChannels() function */
#define CMP_2_NEGATIVE_INPUT_NUMBER 7U
/* Definition of peripheral ID */
#define CMP_3_PERIPHERAL CMP3
/* Definition of positive input source used in CMP_SetInputChannels() function */
#define CMP_3_POSITIVE_INPUT_NUMBER 2U
/* Definition of negative input source used in CMP_SetInputChannels() function */
#define CMP_3_NEGATIVE_INPUT_NUMBER 7U
/* Definition of peripheral ID */
#define CMP_4_PERIPHERAL CMP4
/* Definition of positive input source used in CMP_SetInputChannels() function */
#define CMP_4_POSITIVE_INPUT_NUMBER 2U
/* Definition of negative input source used in CMP_SetInputChannels() function */
#define CMP_4_NEGATIVE_INPUT_NUMBER 7U
/* Definition of peripheral ID */
#define UART_1_PERIPHERAL LPUART1
/* Definition of the clock source frequency */
#define UART_1_CLOCK_SOURCE 80000000UL
/* Definition of peripheral ID */
#define UART_4_PERIPHERAL LPUART4
/* Definition of the clock source frequency */
#define UART_4_CLOCK_SOURCE 80000000UL
/* Definition of peripheral ID */
#define UART_5_PERIPHERAL LPUART5
/* Definition of the clock source frequency */
#define UART_5_CLOCK_SOURCE 80000000UL
/* RTE_PIP defines for ADC1 */
/* Definition of peripheral ID */
#define ADC_1_PERIPHERAL ADC1
/* Definition of special channel interconnected with ADC_ETC which takes real channel to be measured from ADC_ETC. */
#define ADC_1_CHANNEL_DRIVEN_BY_ADC_ETC 16U
/* Alias for AOI1 peripheral */
#define AOI_PERIPHERAL AOI1
/* Definition of peripheral ID */
#define CSI_PERIPHERAL CSI
/* Definition of the clock source frequency */
#define CSI_CLK_FREQ 150000000UL
/* Definition of the MCLK (master clock) clock source frequency */
#define CSI_MCLK_FREQ 80000000UL
/* Definition of the frame width (number of pixels in the line) */
#define CSI_FRAME_WIDTH 640
/* Definition of the frame height (number of lines) */
#define CSI_FRAME_HEIGHT 400
/* Definition of the bytes per pixel size */
#define CSI_BYTES_PER_PIXEL 3
/* Definition of the line pitch size in bytes */
#define CSI_LINE_PITCH_BYTES 1920
/* Definition of number of the buffers inside allocated block */
#define CSI_FRAME_BUFFER_COUNT 3
/* Definition of the frame buffer block alignment */
#define CSI_BUFFER_ALIGN 64
/* CSI interrupt vector ID (number). */
#define CSI_IRQN CSI_IRQn
/* CSI interrupt vector priority. */
#define CSI_IRQ_PRIORITY 3
/* CSI interrupt handler identifier. */
#define CSI_IRQHandler CSI_IRQHandler
/* GPIO_1 interrupt vector ID (number). */
#define GPIO_1_GPIO_COMB_0_15_IRQN GPIO1_Combined_0_15_IRQn
/* GPIO_1 interrupt vector priority. */
#define GPIO_1_GPIO_COMB_0_15_IRQ_PRIORITY 4
/* GPIO_1 interrupt handler identifier. */
#define GPIO1_Combined_0_15_IRQHandler GPIO1_Combined_0_15_IRQHandler
/* GPIO_1 interrupt vector ID (number). */
#define GPIO_1_GPIO_COMB_16_31_IRQN GPIO1_Combined_16_31_IRQn
/* GPIO_1 interrupt vector priority. */
#define GPIO_1_GPIO_COMB_16_31_IRQ_PRIORITY 4
/* GPIO_1 interrupt handler identifier. */
#define GPIO1_Combined_16_31_IRQHandler GPIO1_Combined_16_31_IRQHandler
/* GPIO_2 interrupt vector ID (number). */
#define GPIO_2_GPIO_COMB_0_15_IRQN GPIO2_Combined_0_15_IRQn
/* GPIO_2 interrupt vector priority. */
#define GPIO_2_GPIO_COMB_0_15_IRQ_PRIORITY 4
/* GPIO_2 interrupt handler identifier. */
#define GPIO2_Combined_0_15_IRQHandler GPIO2_Combined_0_15_IRQHandler
/* GPIO_2 interrupt vector ID (number). */
#define GPIO_2_GPIO_COMB_16_31_IRQN GPIO2_Combined_16_31_IRQn
/* GPIO_2 interrupt vector priority. */
#define GPIO_2_GPIO_COMB_16_31_IRQ_PRIORITY 4
/* GPIO_2 interrupt handler identifier. */
#define GPIO2_Combined_16_31_IRQHandler GPIO2_Combined_16_31_IRQHandler
/* GPIO_3 interrupt vector ID (number). */
#define GPIO_3_GPIO_COMB_0_15_IRQN GPIO3_Combined_0_15_IRQn
/* GPIO_3 interrupt vector priority. */
#define GPIO_3_GPIO_COMB_0_15_IRQ_PRIORITY 4
/* GPIO_3 interrupt handler identifier. */
#define GPIO3_Combined_1_15_IRQHandler GPIO3_Combined_0_15_IRQHandler
/* GPIO_3 interrupt vector ID (number). */
#define GPIO_3_GPIO_COMB_16_31_IRQN GPIO3_Combined_16_31_IRQn
/* GPIO_3 interrupt vector priority. */
#define GPIO_3_GPIO_COMB_16_31_IRQ_PRIORITY 4
/* GPIO_3 interrupt handler identifier. */
#define GPIO3_Combined_16_31_IRQHandler GPIO3_Combined_16_31_IRQHandler
/* RTE_PIP defines for LPI2C1 */
/* Definition of peripheral ID */
#define I2C_1_PERIPHERAL LPI2C1
/* Definition of clock source */
#define I2C_1_CLOCK_FREQ 60000000UL
/* RTE_PIP defines for LPI2C2 */
/* Definition of peripheral ID */
#define I2C_2_PERIPHERAL LPI2C2
/* Definition of clock source */
#define I2C_2_CLOCK_FREQ 60000000UL
/* RTE_PIP defines for LPSPI4 */
/* Definition of peripheral ID */
#define SPI_4_PERIPHERAL LPSPI4
/* Definition of clock source */
#define SPI_4_CLOCK_FREQ 120000000UL
/* Definition of peripheral ID */
#define ENC_1_PERIPHERAL ENC1
/* Definition of peripheral ID */
#define ENC_2_PERIPHERAL ENC2

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t EDMA_config;
extern const pit_config_t PIT_config;
extern const cmp_config_t CMP_1_config;
extern const cmp_dac_config_t CMP_1_dac_config;
extern const cmp_config_t CMP_2_config;
extern const cmp_dac_config_t CMP_2_dac_config;
extern const cmp_config_t CMP_3_config;
extern const cmp_dac_config_t CMP_3_dac_config;
extern const cmp_config_t CMP_4_config;
extern const cmp_dac_config_t CMP_4_dac_config;
extern const lpuart_config_t UART_1_config;
extern const lpuart_config_t UART_4_config;
extern const lpuart_config_t UART_5_config;
extern const adc_config_t ADC_1_config;
extern const aoi_event_config_t AOI_event_config[2];
extern csi_config_t CSI_config;
/* Frame buffer block */
extern uint32_t CSI_Buffer[CSI_FRAME_BUFFER_COUNT][CSI_FRAME_HEIGHT][CSI_FRAME_WIDTH];
extern const lpi2c_master_config_t I2C_1_masterConfig;
extern const lpi2c_master_config_t I2C_2_masterConfig;
extern const lpspi_master_config_t SPI_4_config;
extern enc_config_t ENC_1_config;
extern enc_config_t ENC_2_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void RTE_PIP(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
