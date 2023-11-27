#include <DigiKeyboard.h>

int dips[] = {2,1,0};

//sem pinos
void p0() {
 DigiKeyboard.println("Pino 0");
}
// pino 3
void p1() {
   DigiKeyboard.println("Pino 1");
}
//pino 2
void p2() {
  DigiKeyboard.println("Pino 2");
}
//pino 2+3
void p3() {
  DigiKeyboard.println("Pino 3");
}
//pino 1
void p4() {
  DigiKeyboard.println("Pino 4");
}
//pino 1+3
void p5() {
   DigiKeyboard.println("Pino 5");
}
//pino1+2
void p6() {
   DigiKeyboard.println("Pino 6");

}
//pino1+2+3
void p7() {
   DigiKeyboard.println("Pino 7");
}


void (*p[8])() = {p0, p1, p2, p3, p4, p5, p6, p7};
void setup(){
  int pi = 0;
  for(int i = 0; i<3; ++i){
    pinMode(dips[i],INPUT_PULLUP); // setup switches as input 
    if(digitalRead(dips[i]) == LOW){
      pi = pi | (1 << i); // state of switches
    }
  }
  DigiKeyboard.sendKeyStroke(0); // setup keyboard
  DigiKeyboard.delay(300);
  p[pi](); // execute payload
}

void loop() {
}