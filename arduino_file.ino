#include "MQ135.h"
#include <BoltIoT-Arduino-Helper.h>
#ifndef API_KEY
#define API_KEY   "2c08eb7b-cc96-4f85-9dfb-9c3bdd15e07d"
#endif
#ifndef DEVICE_ID
#define DEVICE_ID "BOLT13135547"
#endif
const int ANALOGPIN_ONE = A0;
const int ANALOGPIN_TWO = A1;
const int ANALOGPIN_THREE = A2;
const int ANALOGPIN_FOUR = 3;
MQ135 gasSensor_ONE = MQ135(ANALOGPIN_ONE);
MQ135 gasSensor_TWO = MQ135(ANALOGPIN_TWO);
MQ135 gasSensor_THREE = MQ135(ANALOGPIN_THREE);
int num_Measure = 128 ;
int pinSignal = A3; 
long Sound_signal;
long sum = 0 ; 
long level = 0 ; 

void setup ()
{
  pinMode (pinSignal, INPUT);
  Serial.begin (9600);
  boltiot.begin(9,10);
}

void loop ()
{
  /*GAS SENSOR*/
  float ppm_ONE = gasSensor_ONE.getPPM();
  float ppm_TWO = gasSensor_TWO.getPPM();
  float ppm_THREE = gasSensor_THREE.getPPM();
  float gas_AVERAGE = (ppm_ONE + ppm_TWO + ppm_THREE);
  float gas = gas_AVERAGE/11;
  Serial.println(gas);
  delay(1000);

  /*NOISE SENSOR*/
  int sound = analogRead(ANALOGPIN_FOUR)-26;
  Serial.println(sound);
  delay(1000);
  boltiot.processPushDataCommand(gas,sound);
}
