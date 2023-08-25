################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab\ 6/lab6.cpp 

OBJS += \
./Lab\ 6/lab6.o 

CPP_DEPS += \
./Lab\ 6/lab6.d 


# Each subdirectory must supply rules for building sources it contributes
Lab\ 6/lab6.o: ../Lab\ 6/lab6.cpp Lab\ 6/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Lab 6/lab6.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


