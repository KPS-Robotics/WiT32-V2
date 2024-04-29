#pragma once
class BuzzerAkhsakova{
  private:
    int pin;
    int channel;
  public:
    BuzzerAkhsakova();
    void Begin(int _channel,int _pin);
    void Tone(int _frequency);
    void NoTone();
  
};
