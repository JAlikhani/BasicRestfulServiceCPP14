################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BasicRestfulServiceCPP.cpp \
../src/Http.cpp \
../src/JSONParser.cpp \
../src/jsoncpp.cpp 

OBJS += \
./src/BasicRestfulServiceCPP.o \
./src/Http.o \
./src/JSONParser.o \
./src/jsoncpp.o 

CPP_DEPS += \
./src/BasicRestfulServiceCPP.d \
./src/Http.d \
./src/JSONParser.d \
./src/jsoncpp.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


