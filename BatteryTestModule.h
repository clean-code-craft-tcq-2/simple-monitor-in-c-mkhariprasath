#include <stdbool.h>
#include <stdio.h>

#define MINIMUM_TEMPERATURE 0
#define OPTIMUM_TEMPERATURE 25
#define MAXIMUM_TEMPERATURE 45

#define MINIMUM_CHARGESTATE 20
#define OPTIMUM_CHARGESTATE 70
#define MAXIMUM_CHARGESTATE 80

#define MINIMUM_CHARGERATE  0
#define OPTIMUM_CHARGERATE  0.7f
#define MAXIMUM_CHARGERATE  0.8f

#define OK 		        true
#define NOT_OK 	        false
#define IS              ==
#define IS_NOT          !=
#define ERROR           -1
#define AND 	        &&
#define OR              ||
#define IS_LESS_THAN    <
#define IS_GREATER_THAN >
#define AND 	        &&
#define OR              ||
#define LESS_THAN(x)    (x - 0.1f)
#define GREATER_THAN(x) (x + 0.1f)

#define BATTERY_STATUS ( (batteryTemperature(temperature)) AND (batteryChargeState(chargeState))  AND (batteryChargeRate(chargeRate)) )

void printOutofRange(const char * problematicParameter);
bool batteryTemperature(float temperature);
bool batteryChargeState(float soc);
bool batteryChargeRate(float chargeRate);