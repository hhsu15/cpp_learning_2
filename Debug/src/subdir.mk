################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Dog.cpp \
../src/Person.cpp \
../src/Pig.cpp \
../src/coutputtingtext.cpp 

OBJS += \
./src/Cat.o \
./src/Dog.o \
./src/Person.o \
./src/Pig.o \
./src/coutputtingtext.o 

CPP_DEPS += \
./src/Cat.d \
./src/Dog.d \
./src/Person.d \
./src/Pig.d \
./src/coutputtingtext.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


