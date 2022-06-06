//M5atomの画面を押したら，マイクロブロアを起動し，においを照射するプログラム

#include "M5Atom.h"

int digitalOut = 25;
int state = LOW;

void setup(){
    M5.begin(true, false, true); //初期化っぽい?
    pinMode(digitalOut, OUTPUT);
    delay(10);
}

void loop(){
    digitalWrite(digitalOut, state);
    delay(5000);
    state = HIGH;
    digitalWrite(digitalOut, state);
    state = LOW;
    // if(M5.Btn.wasPressed()){
    //     state = HIGH;
    //     digitalWrite(digitalOut, state);
    // }
    delay(5000);
}