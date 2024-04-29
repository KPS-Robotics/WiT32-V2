#include "AX_Buzzer.h"
#include <Arduino.h>


BuzzerAkhsakova::BuzzerAkhsakova(){

}
void BuzzerAkhsakova::Begin(int _channel,int _pin){
    this->pin=_pin; 
    this->channel= _channel;
    ledcSetup(this->channel, 5000, 13);
    ledcAttachPin(this->pin, this->channel);
  }
void BuzzerAkhsakova::Tone(int _frequency){
    if (ledcRead(this->channel)) 
        return;
    
    ledcAttachPin(this->pin, this->channel);
    ledcWriteTone(this->channel, _frequency);

  }
void BuzzerAkhsakova::NoTone(){
    ledcDetachPin(this->pin);
    ledcWrite(this->channel, 0);
  }         
