################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../caramanA3/AgeCalc.cpp \
../caramanA3/caramanA3.cpp 

OBJS += \
./caramanA3/AgeCalc.o \
./caramanA3/caramanA3.o 

CPP_DEPS += \
./caramanA3/AgeCalc.d \
./caramanA3/caramanA3.d 


# Each subdirectory must supply rules for building sources it contributes
caramanA3/%.o: ../caramanA3/%.cpp caramanA3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


