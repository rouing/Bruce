#ifdef T_EMBED_1101
#include "lilygo-t-embed-cc1101.h"
#elif T_EMBED
#include "lilygo-t-embed.h"
#elif CARDPUTER
#include "m5stack-cardputer.h"
#elif CYD_2432S028
#include "CYD-2432S028.h"
#elif ARDUINO_M5STACK_CORES3
#include "m5stack-cores3.h"
#elif ARDUINO_M5STACK_CORE2
#include "m5stack-core2.h"
#elif ARDUINO_M5STICK_CPLUS2
#include "m5stack-cplus2.h"
#elif ESP32S3DEVKITC1
#include "ESP-General.h"
#elif ARDUINO_M5STICK_CPLUS
#include "m5stack-cplus1_1.h"
#endif