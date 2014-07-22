#include <GPX.h>

GPX myGPX;

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  String dumbString("");
}

void loop(){
  Serial.print(myGPX.getOpen());
  myGPX.setMetaDesc("foofoofoo");
  myGPX.setName("Log name");
  myGPX.setDesc("Log description");
  myGPX.setSrc("SUP500Ff");
  Serial.print(myGPX.getMetaData());
  myGPX.clear();
  Serial.print(myGPX.getTrakOpen());
  myGPX.setName("track name");
  myGPX.setDesc("track description");  
  Serial.print(myGPX.getInfo());
  myGPX.clear();
  Serial.print(myGPX.getTrakSegOpen());
  myGPX.setTime("2002-02-10T21:01:29.250Z");
  Serial.print(myGPX.getPt(GPX_TRKPT,"41.123","-71.456", "100"));
  myGPX.setTime("2002-02-10T21:01:30.250Z");
  Serial.print(myGPX.getPt(GPX_TRKPT,"42.123","-72.456", "100"));
  myGPX.setTime("2002-02-10T21:01:31.250Z");
  Serial.print(myGPX.getPt(GPX_TRKPT,"43.123","-73.456", "100"));
  Serial.print(myGPX.getTrakSegClose());
  Serial.print(myGPX.getTrakClose());
  Serial.print(myGPX.getClose());
  delay(10000);
}
