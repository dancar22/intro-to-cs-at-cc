################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../1-31\ calling\ functions.cpp 

OBJS += \
./1-31\ calling\ functions.o 

CPP_DEPS += \
./1-31\ calling\ functions.d 


# Each subdirectory must supply rules for building sources it contributes
1-31\ calling\ functions.o: ../1-31\ calling\ functions.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"1-31 calling functions.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


