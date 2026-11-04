
void callfunc(){
for(byte i=0; i<=255;i++){
     display.setCursor(45, 35);
     display.print(String(i)+ "  ");
     display.display(); 
     delay(500);
       }
}