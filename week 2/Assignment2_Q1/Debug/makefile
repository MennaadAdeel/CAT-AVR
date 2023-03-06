################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Assignment1_Q1.lss \

FLASH_IMAGE += \
Assignment1_Q1.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Assignment1_Q1.elf secondary-outputs

# Tool invocations
Assignment1_Q1.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Assignment1_Q1.map -mmcu=atmega16 -o "Assignment1_Q1.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Assignment1_Q1.lss: Assignment1_Q1.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Assignment1_Q1.elf  >"Assignment1_Q1.lss"
	@echo 'Finished building: $@'
	@echo ' '

Assignment1_Q1.hex: Assignment1_Q1.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Assignment1_Q1.elf  "Assignment1_Q1.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Assignment1_Q1.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 Assignment1_Q1.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Assignment1_Q1.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
