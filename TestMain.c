#include <stdio.h>
#include "ut_BMS.h"

int main() {
  isBatteryOKonCondition    (OPTIMUM_TEMPERATURE,  OPTIMUM_CHARGESTATE, OPTIMUM_CHARGERATE);      //all pass condition

  isBatteryOKonCondition    (MINIMUM_TEMPERATURE,  OPTIMUM_CHARGESTATE, OPTIMUM_CHARGERATE);      // boundary condition check - temperature
  isBatteryOKonCondition    (MAXIMUM_TEMPERATURE,  OPTIMUM_CHARGESTATE, OPTIMUM_CHARGERATE);      // boundary condition check - temperature
  isBatteryOKonCondition    (OPTIMUM_TEMPERATURE, MINIMUM_CHARGESTATE , OPTIMUM_CHARGERATE);      // boundary condition check - charge state
  isBatteryOKonCondition    (OPTIMUM_TEMPERATURE, MAXIMUM_CHARGESTATE , OPTIMUM_CHARGERATE);      // boundary condition check - charge state
  isBatteryOKonCondition    (OPTIMUM_TEMPERATURE,  OPTIMUM_CHARGESTATE, MAXIMUM_CHARGERATE);      // boundary condition check - charge rate
 

  isBatteryNOTOKonCondition (LESS_THAN    (MINIMUM_TEMPERATURE),  OPTIMUM_CHARGESTATE               , OPTIMUM_CHARGERATE);                //temperature lower threshold
  isBatteryNOTOKonCondition (GREATER_THAN (MAXIMUM_TEMPERATURE),  OPTIMUM_CHARGESTATE               , OPTIMUM_CHARGERATE);                //temperature upper threshold 
  isBatteryNOTOKonCondition (OPTIMUM_TEMPERATURE               ,  LESS_THAN    (MINIMUM_CHARGESTATE), OPTIMUM_CHARGERATE);                //charge state lower threshold
  isBatteryNOTOKonCondition (OPTIMUM_TEMPERATURE               ,  GREATER_THAN (MAXIMUM_CHARGESTATE), OPTIMUM_CHARGERATE);                //charge state upper threshold
  isBatteryNOTOKonCondition (OPTIMUM_TEMPERATURE               ,  OPTIMUM_CHARGESTATE               , GREATER_THAN (MAXIMUM_CHARGERATE)); //charge rate upper threshold
}
