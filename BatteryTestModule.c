#include "BatteryTestModule.h"

void printOutofRange(const char * problematicParameter)
{
	 printf("%s is out of range!\n", problematicParameter);
	
}

bool isBatteryTemperatureOK(float temperature)
{
    
	if( (temperature < MINIMUM_TEMPERATURE) OR (temperature > MAXIMUM_TEMPERATURE) ) 
	{
    	printOutofRange("Temperature");
    	return NOT_OK;
	}
	else 
		return OK;
  
}

bool isBatteryChargeStateOK(float soc)
{
	if ( (soc < MINIMUM_CHARGESTATE) OR (soc > MAXIMUM_CHARGESTATE) )
	{
		printOutofRange("Charge State");
		return NOT_OK;
	}
	else 
		return OK;
}

bool isBatteryChargeRateOK(float chargeRate)
{
	if(chargeRate > MAXIMUM_CHARGERATE)
	{
		printOutofRange("Charge Rate");
		return NOT_OK;
	}	
	else 
		return OK;
}
