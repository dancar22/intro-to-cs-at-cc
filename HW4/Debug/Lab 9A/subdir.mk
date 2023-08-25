################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab\ 9A/lab9-part-a.cpp 

OBJS += \
./Lab\ 9A/lab9-part-a.o 

CPP_DEPS += \
./Lab\ 9A/lab9-part-a.d 


# Each subdirectory must supply rules for building sources it contributes
Lab\ 9A/lab9-part-a.o: ../Lab\ 9A/lab9-part-a.cpp Lab\ 9A/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Lab 9A/lab9-part-a.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


