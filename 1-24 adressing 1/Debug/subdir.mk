################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../1\ -\ 24\ adressing\ 1.cpp 

OBJS += \
./1\ -\ 24\ adressing\ 1.o 

CPP_DEPS += \
./1\ -\ 24\ adressing\ 1.d 


# Each subdirectory must supply rules for building sources it contributes
1\ -\ 24\ adressing\ 1.o: ../1\ -\ 24\ adressing\ 1.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"1 - 24 adressing 1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


