#include "WIT_ESP32HIT.h"
/*BASE ON IPST WiFI by INEX & NKP_ONE by PrinceBot*/








void setup()
{
	WIT_ESP32HIT();
    /* setup code */

    /* block setup */

}

void loop()
{
    servo(2, 0);
   BAX.Tone( 1397); delay(1000);
   BAX.NoTone(); servo(2, 180);
  delay(1000);

  
}
