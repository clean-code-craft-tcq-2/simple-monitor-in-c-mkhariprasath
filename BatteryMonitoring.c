/*
*
* Production environment to use the battery management system
*
*/

#include <unistd.h>
#include "BatteryTestModule.h"

float temperature = OPTIMUM_TEMPERATURE;
float chargeState = OPTIMUM_CHARGESTATE;
float chargeRate  = OPTIMUM_CHARGERATE;


int main()
{
    while(BATTERY_STATUS IS OK)
    {
        // Normal routine
        printf("The Battery health is good!");
        sleep(2);
    }
    return ERROR; // never reach here
}
