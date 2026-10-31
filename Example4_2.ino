// #define blueLed 2
// void setup() {
//   Serial.begin(9600);
//    pinMode(blueLed, OUTPUT);
// }
// void loop(){
//   digitalWrite(blueLed, HIGH);
//   Serial.println("High");
//   delay(3000);  
//   // delayMicroseconds(100);                     
//   digitalWrite(blueLed, LOW);
//   Serial.println("Low");
//   delay(3000);   
//   // delayMicroseconds(900);                   
// }
//=================================================
String str;
void setup(){
  Serial.begin(115200);
}
void loop(){
  if ( Serial.available()>0){
    str = Serial.readString();
    Serial.println(str);
  }
  }

  //================================================

  