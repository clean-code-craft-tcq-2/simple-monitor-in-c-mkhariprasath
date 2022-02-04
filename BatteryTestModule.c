#include "BatteryTestModule.h"

void printOutofRange(const char * problematicParameter)
{
	 printf("%s is out of range!\n", problematicParameter);
	
}

bool batteryTemperature(float temperature)
{
    
	if( (temperature IS_LESS_THAN MINIMUM_TEMPERATURE) OR (temperature IS_GREATER_THAN MAXIMUM_TEMPERATURE) ) 
	{
    	printOutofRange("Temperature");
    	return NOT_OK;
	}
	else 
		return OK;
  
}

bool batteryChargeState(float soc)
{
	if ( (soc IS_LESS_THAN MINIMUM_CHARGESTATE) OR (soc IS_GREATER_THAN MAXIMUM_CHARGESTATE) )
	{
		printOutofRange("Charge State");
		return NOT_OK;
	}
	else 
		return OK;
}

bool batteryChargeRate(float chargeRate)
{
	if(chargeRate IS_GREATER_THAN MAXIMUM_CHARGERATE)
	{
		printOutofRange("Charge Rate");
		return NOT_OK;
	}	
	else 
		return OK;
}