/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdbool.h>

#define TARGET_BOARD_IDENTIFIER "RADIX"

#define CONFIG_START_FLASH_ADDRESS (0x08004000) // 2nd 16kB sector

#define USBD_PRODUCT_STRING     "BrainFPV RADIX"

#define USE_TARGET_CONFIG

#define USE_USB_MSC

#define LED0_PIN                PA4
#define LED1_PIN                NONE
#define LED0_INVERTED

#define USE_BEEPER
#define BEEPER_PIN              NONE
#define USE_LED_STRIP

//#define ENABLE_DSHOT_DMAR       true

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0 // PWM 1

#define USE_BRAINFPV_FPGA
#define BRAINFPVFPGA_SPI_INSTANCE SPI3
#define BRAINFPVFPGA_SPI_DIVISOR  16
#define BRAINFPVFPGA_CS_PIN       PC15
#define BRAINFPVFPGA_CDONE_PIN    PB12
#define BRAINFPVFPGA_CRESET_PIN   PB1
#define BRAINFPVFPGA_CLOCK_PIN    PA8
#define BRAINFPVFPGA_RESET_PIN    PC4

#define IDLE_COUNTS_PER_SEC_AT_NO_LOAD (16564455)

#define BRAINFPV
#define USE_MAX7456
#define USE_OSD
#define USE_CMS
#define OSD_CALLS_CMS
#define USE_BRAINFPV_OSD
#define VIDEO_BITS_PER_PIXEL 2
#define INCLUDE_VIDEO_QUADSPI
#define VIDEO_QSPI_CLOCK_PIN PB2
#define VIDEO_QSPI_IO0_PIN   PC9
#define VIDEO_QSPI_IO1_PIN   PC10
#define VIDEO_VSYNC          PB5
#define VIDEO_HSYNC          PC2
#define BRAINFPV_OSD_SYNC_TH_DEFAULT 30
#define BRAINFPV_OSD_SYNC_TH_MIN 5
#define BRAINFPV_OSD_SYNC_TH_MAX 60


#define USE_VTX_CONTROL
#define VTX_SMARTAUDIO
#define CAMERA_CONTROL_PIN    PB9

#define USE_BRAINFPV_SPECTROGRAPH

#define USE_EXTI
#define USE_GYRO
#define USE_ACC

#define USE_ACCGYRO_BMI160
#define USE_GYRO_SPI_BMI160
#define USE_ACC_SPI_BMI160
#define GYRO_BMI160_ALIGN    CW0_DEG
#define ACC_BMI160_ALIGN     CW0_DEG
#define BMI160_SPI_INSTANCE  SPI3
#define BMI160_SPI_DIVISOR   16
#define BMI160_CS_PIN        PB4
#define BMI160_INT_EXTI      PC13
#define MPU_INT_EXTI         BMI160_INT_EXTI
#define GYRO_1_EXTI_PIN      MPU_INT_EXTI
#define GYRO_1_CS_PIN        BMI160_CS_PIN
#define GYRO_1_SPI_INSTANCE  BMI160_SPI_INSTANCE

#define USE_BARO
#define USE_BARO_SPI_BMP280
#define DEFAULT_BARO_SPI_BMP280
#define BARO_ZERO_ON_ARM
#define BMP280_SPI_DIVISOR   16
#define BMP280_SPI_INSTANCE     SPI3
#define BMP280_CS_PIN           PB8

#define USABLE_TIMER_CHANNEL_COUNT 8

#define USE_VCP
#define VBUS_SENSING_PIN        PA9
#define VBUS_SENSING_ENABLED

#define USE_UART
#define USE_UART1
#undef USE_UART1_TX_DMA
#define USE_UART1_TX_NODMA
#define UART1_RX_PIN            PB7
#define UART1_TX_PIN            PB6

#define USE_UART3
#define UART3_RX_PIN            PC5
#define UART3_TX_PIN            PB10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART6
#undef USE_UART6_TX_DMA
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       5 //VCP, USART1,  USART3, USART4, USART6

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define BOARD_HAS_VOLTAGE_DIVIDER
#define USE_ADC
#define ADC_VOLTAGE_REFERENCE_MV 3245
#define VBAT_ADC_PIN            PC1
#define RSSI_ADC_PIN            PC3
#define CURRENT_METER_ADC_PIN   PC0
#define VBAT_SCALE_DEFAULT            120
#define CURRENT_METER_SCALE_DEFAULT   200
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#define USE_SDCARD
#define SDCARD_SPI_INSTANCE                 SPI1
#define SDCARD_DETECT_INVERTED
#define SDCARD_DETECT_PIN                   PB13
#define SDCARD_SPI_CS_PIN                   PB15
// SPI1 is on APB2, 90MHz
#define SDCARD_SPI_INITIALIZATION_CLOCK_DIVIDER 256 // 350kHz
#define SDCARD_SPI_FULL_SPEED_CLOCK_DIVIDER     4   // 22.5MHz
#define SDCARD_DMA_CHANNEL_TX                DMA2_Stream3
#define SDCARD_DMA_CHANNEL_TX_COMPLETE_FLAG  DMA_FLAG_TCIF3
#define SDCARD_DMA_CLK                       RCC_AHB1Periph_DMA2
#define SDCARD_DMA_CHANNEL                   DMA_Channel_3

#define DEFAULT_FEATURES        (FEATURE_OSD)
#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM
//#define SERIALRX_PROVIDER       SERIALRX_SBUS

#define SPEKTRUM_BIND
// PPM input
#define BIND_PIN                PB14

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USE_DSHOT
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(5) | TIM_N(8) | TIM_N(12) )

bool brainfpv_settings_updated;
bool brainfpv_settings_updated_from_cms;
void brainFPVUpdateSettings(void);

//  RADIX memory management
#undef BRUSHED_MOTORS
//#undef PWM_BRUSHED_TIMER_MHZ    // undef not necessary
//#undef BRUSHED_MOTORS_PWM_RATE  // brushless get set as well -- motorConfig->dev.motorPwmRate = BRUSHLESS_MOTORS_PWM_RATE;
#undef USE_BRUSHED_ESC_AUTODETECT // requires mixer.c modification
#undef USE_CMS_FAILSAFE_MENU
#undef USE_CMS_GPS_RESCUE_MENU
#undef USE_EXTENDED_CMS_MENUS
#undef USE_ALT_HOLD
#undef USE_GPS
#undef USE_GPS_NMEA
//#undef USE_GPS_RESCUE  //required to build :/
#undef USE_GPS_UBLOX
#undef USE_GYRO_LPF2
#undef USE_LED_STRIP
//#undef USE_MSP_DISPLAYPORT
#undef USE_MSP_OVER_TELEMETRY
#undef USE_OSD_OVER_MSP_DISPLAYPORT
//#undef USE_OSD
#undef USE_OSD_ADJUSTMENTS
#undef USE_PEGASUS_UI
#undef USE_PPM
//#undef USE_PWM
#undef USE_SERVOS

//#undef USE_SERIAL_RX
//#undef USE_SERIALRX_CRSF        //Team Black Sheep Crossfire protocol
#undef USE_SERIALRX_FPORT       //FrSky FPort
#undef USE_SERIALRX_GHST        //ImmersionRC Ghost Protocol
#undef USE_SERIALRX_IBUS        //FlySky and Turnigy receivers
#undef USE_SERIALRX_JETIEXBUS
#undef USE_SERIALRX_SBUS        //Frsky and Futaba receivers
#undef USE_SERIALRX_SPEKTRUM    //SRXL, DSM2 and DSMX protocol
#undef USE_SERIALRX_SUMD        //Graupner Hott protocol
#undef USE_SERIALRX_SUMH        //Graupner legacy protocol
#undef USE_SERIALRX_TARGET_CUSTOM
#undef USE_SERIALRX_XBUS        //JR



#undef USE_SPEKTRUM_BIND
#undef USE_SPEKTRUM_BIND_PLUG
#undef USE_SPEKTRUM_CMS_TELEMETRY
#undef USE_SPEKTRUM_FAKE_RSSI
#undef USE_SPEKTRUM_REAL_RSSI
#undef USE_SPEKTRUM_REGION_CODES
#undef USE_SPEKTRUM_RSSI_PERCENT_CONVERSION
#undef USE_SPEKTRUM_VTX_CONTROL
#undef USE_SPEKTRUM_VTX_TELEMETRY

//#undef USE_TELEMETRY
//#undef USE_TELEMETRY_CRSF
#undef USE_TELEMETRY_FRSKY_HUB
#undef USE_TELEMETRY_GHST
#undef USE_TELEMETRY_HOTT
#undef USE_TELEMETRY_IBUS
#undef USE_TELEMETRY_IBUS_EXTENDED
#undef USE_TELEMETRY_JETIEXBUS
#undef USE_TELEMETRY_LTM
#undef USE_TELEMETRY_MAVLINK
#undef USE_TELEMETRY_NRF24_LTM
#undef USE_TELEMETRY_SMARTPORT
#undef USE_TELEMETRY_SRXL

#undef USE_UNCOMMON_MIXERS

#undef USE_VTX_BEESIGN
//#undef USE_VTX_COMMON //vtx required
#undef USE_VTX_COMMON_FREQ_API //spektrum
//#undef USE_VTX_CONTROL //vtx required
#undef USE_VTX_LOCK_FREQ //beebrain
#undef USE_VTX_RTC6705
#undef USE_VTX_RTC6705_SOFTSPI
//#undef USE_VTX_SMARTAUDIO
#undef USE_VTX_TABLE
#undef USE_VTX_TRAMP

#undef USE_EXTENDED_CMS_MENUS
//#undef USE_SENSOR_NAMES
#undef USE_SIGNATURE
#undef USE_USB_CDC_HID
#undef DEBUG_HARDWARE_REVISION_ADC
#undef DEBUG_HARDWARE_REVISION_TABLE
#undef USE_PINIO
#undef USE_PINIOBOX

//defaults
#define SERIALRX_PROVIDER SERIALRX_CRSF

// crazy tests
#undef USE_TRANSPONDER

#undef USE_OSD_PROFILES

#undef USE_BARO_BMP085
#undef USE_BARO_DPS310
#undef USE_BARO_LPS
#undef USE_BARO_MS5611
#undef USE_BARO_QMP6988
#undef USE_BARO_SPI_LPS
#undef USE_BARO_SPI_MS5611
#undef USE_BARO_SPI_QMP6988
#undef USE_SONAR
#undef USE_BEESIGN
#undef USE_OSD_BEESIGN
#undef USE_OSD_STICK_OVERLAY
#undef USE_I2C_OLED_DISPLAY

#undef USE_MAG
#undef USE_MAG_AK8963
#undef USE_MAG_AK8975
#undef USE_MAG_DATA_READY_SIGNAL
#undef USE_MAG_HMC5883
#undef USE_MAG_LIS3MDL
#undef USE_MAG_QMC5883
#undef USE_MAG_SPI_AK8963
#undef USE_MAG_SPI_HMC5883
#undef USE_MPU9250_MAG

//#undef USE_GYRO
//#undef USE_GYRO_DATA_ANALYSE
//#undef USE_GYRO_EXTI
#undef USE_GYRO_IMUF9001
#undef USE_GYRO_L3G4200D
#undef USE_GYRO_L3GD20
#undef USE_GYRO_MPU3050
#undef USE_GYRO_MPU6000
#undef USE_GYRO_MPU6050
#undef USE_GYRO_MPU6500
//#undef USE_GYRO_SPI_BMI160
#undef USE_GYRO_SPI_ICM20601
#undef USE_GYRO_SPI_ICM20649
#undef USE_GYRO_SPI_ICM20689
#undef USE_GYRO_SPI_MPU6000
#undef USE_GYRO_SPI_MPU6500
#undef USE_GYRO_SPI_MPU9250

#undef USE_RTC6705
#undef USE_RTC6705_CLK_HACK
#undef USE_RTC6705_PITMODE_CTRL
#undef USE_RTC6705_SOFTSPI_ON_HW_SPI

#undef USE_RPM_FILTER
#undef USE_QUAT_IMUF9001

#undef USE_COPY_PROFILE_CMS_MENU

#undef USE_ACC_ADXL345
//#undef USE_ACC_BMA280
#undef USE_ACC_IMUF9001
#undef USE_ACC_LSM303DLHC
#undef USE_ACC_MMA8452
#undef USE_ACC_MPU6000
#undef USE_ACC_MPU6050
#undef USE_ACC_MPU6500
//#undef USE_ACC_SPI_BMI160
#undef USE_ACC_SPI_ICM20649
#undef USE_ACC_SPI_ICM20689
#undef USE_ACC_SPI_MPU6000
#undef USE_ACC_SPI_MPU6500
#undef USE_ACC_SPI_MPU9250
//#undef USE_ACCGYRO_BMI160

#undef USE_ACRO_TRAINER

// no clue
#undef USE_RX_CC2500
#undef USE_RX_CC2500_BIND
#undef USE_RX_CC2500_SPI_DIVERSITY
#undef USE_RX_CC2500_SPI_PA_LNA
#undef USE_RX_CX10
#undef USE_RX_FLYSKY
#undef USE_RX_FLYSKY_SPI_LED
#undef USE_RX_FRSKY_SPI
#undef USE_RX_FRSKY_SPI_D
#undef USE_RX_FRSKY_SPI_TELEMETRY
#undef USE_RX_FRSKY_SPI_X
#undef USE_RX_H8_3D
#undef USE_RX_INAV
#undef USE_RX_KN
//#undef USE_RX_LINK_QUALITY_INFO
#undef USE_RX_MSP
#undef USE_RX_NRF24
#undef USE_RX_REDPINE_SPI
//#undef USE_RX_RSSI_DBM
#undef USE_RX_SFHSS_SPI
#undef USE_RX_SPI
#undef USE_RX_SYMA
#undef USE_RX_V202
#undef USE_RX_XN297

#undef USE_RANGEFINDER
#undef USE_RANGEFINDER_HCSR04
#undef USE_RANGEFINDER_HCSR04_I2C
#undef USE_RANGEFINDER_SRF10
#undef USE_RANGEFINDER_TF

#undef USE_PROFILE_NAMES
#undef USE_OSD_PROFILES

#undef USE_LAUNCH_CONTROL
#undef USE_INTEGRATED_YAW_CONTROL

#undef USE_32K_CAPABLE_GYRO
