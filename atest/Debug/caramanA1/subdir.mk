################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../caramanA1/caramanA1.cpp 

OBJS += \
./caramanA1/caramanA1.o 

CPP_DEPS += \
./caramanA1/caramanA1.d 


# Each subdirectory must supply rules for building sources it contributes
caramanA1/%.o: ../caramanA1/%.cpp caramanA1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


