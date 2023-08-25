################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../practice\ sorting.cpp 

OBJS += \
./practice\ sorting.o 

CPP_DEPS += \
./practice\ sorting.d 


# Each subdirectory must supply rules for building sources it contributes
practice\ sorting.o: ../practice\ sorting.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"practice sorting.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


