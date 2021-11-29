# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

SPACE_CADET_ENABLE= no
GRAVE_ESC_ENABLE = no
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
IOS_DEVICE_ENABLE = yes     # connect to IOS device (iPad,iPhone)
ENCODER_ENABLE = no        # Add rotary encoder support
OLED_ENABLE = yes     # Add OLED displays support
SPLIT_KEYBOARD = yes
UNICODE_ENABLE = no
