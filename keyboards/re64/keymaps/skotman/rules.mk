
VIA_ENABLE = no
LTO_ENABLE = yes
SPACE_CADET_ENABLE= no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
MIDI_ENABLE = no
# Build Options
#   change yes to no to disable
#
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
OLED_ENABLE = yes     # Add OLED displays support
OLED_DRIVER = SSD1306
SRC += oled.c
SPLIT_KEYBOARD = yes
TAP_DANCE_ENABLE = no
COMBO_ENABLE = no
UNICODE_ENABLE = no
