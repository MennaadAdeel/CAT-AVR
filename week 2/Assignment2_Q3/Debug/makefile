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
Assignment2_Q3.lss \

FLASH_IMAGE += \
Assignment2_Q3.hex \

EEPROM_IMAGE += \
Assignment2_Q3.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Assignment2_Q3.elf secondary-outputs

# Tool invocations
Assignment2_Q3.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Assignment2_Q3.map -mmcu=atmega32 -o "Assignment2_Q3.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Assignment2_Q3.lss: Assignment2_Q3.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Assignment2_Q3.elf  >"Assignment2_Q3.lss"
	@echo 'Finished building: $@'
	@echo ' '

Assignment2_Q3.hex: Assignment2_Q3.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Assignment2_Q3.elf  "Assignment2_Q3.hex"
	@echo 'Finished building: $@'
	@echo ' '

Assignment2_Q3.eep: Assignment2_Q3.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Assignment2_Q3.elf  "Assignment2_Q3.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Assignment2_Q3.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Assignment2_Q3.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Assignment2_Q3.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
