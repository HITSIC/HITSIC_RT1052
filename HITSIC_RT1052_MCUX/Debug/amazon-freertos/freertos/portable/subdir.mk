################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../amazon-freertos/freertos/portable/heap_4.c \
../amazon-freertos/freertos/portable/port.c 

OBJS += \
./amazon-freertos/freertos/portable/heap_4.o \
./amazon-freertos/freertos/portable/port.o 

C_DEPS += \
./amazon-freertos/freertos/portable/heap_4.d \
./amazon-freertos/freertos/portable/port.d 


# Each subdirectory must supply rules for building sources it contributes
amazon-freertos/freertos/portable/%.o: ../amazon-freertos/freertos/portable/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_MIMXRT1052DVL6B -DCPU_MIMXRT1052DVL6B_cm7 -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I../board -I../source -I../ -I../amazon-freertos/freertos/portable -I../amazon-freertos/include -I../drivers -I../device -I../CMSIS -I../drivers/freertos -I../xip -I../component/lists -I../component/serial_manager -I../utilities -I../component/uart -I../utilities/utilities -I../cjson/inc -I../libjpeg/inc -I../sdmmc/inc -I../sdmmc/port -I../CMSIS/NN/Include -I../tensorflow-lite/tensorflow/contrib/lite -I../tensorflow-lite/tensorflow/contrib/lite/kernels -I../tensorflow-lite/tensorflow/contrib/lite/profiling -I../tensorflow-lite/tensorflow/contrib/lite/schema -I../tensorflow-lite/third_party/flatbuffers/include/flatbuffers -I../usb/include -I../osa -I../usb/phy -I../usb/device/class -I../usb/device/include -I../usb/device/source -I../usb/device/source/ehci -I../usb/device/source/khci -I../usb/device/source/lpcip3511 -I../source/generated -I../usb/host/class -I../usb/host -I../rtcesl/amclib -I../rtcesl/gdflib -I../rtcesl/gflib -I../rtcesl/gmclib -I../rtcesl/mlib -I../video -I../component/i2c -I../tensorflow-lite -I../tensorflow-lite/third_party/flatbuffers/include -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


