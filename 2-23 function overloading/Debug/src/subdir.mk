################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/2-23\ function\ overloading.cpp 

OBJS += \
./src/2-23\ function\ overloading.o 

CPP_DEPS += \
./src/2-23\ function\ overloading.d 


# Each subdirectory must supply rules for building sources it contributes
src/2-23\ function\ overloading.o: ../src/2-23\ function\ overloading.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/2-23 function overloading.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


