################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab\ 13/lab13.cpp 

OBJS += \
./Lab\ 13/lab13.o 

CPP_DEPS += \
./Lab\ 13/lab13.d 


# Each subdirectory must supply rules for building sources it contributes
Lab\ 13/lab13.o: ../Lab\ 13/lab13.cpp Lab\ 13/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Lab 13/lab13.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


