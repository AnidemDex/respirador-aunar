/* 
    Buzzer.h - Modulo para el control de un buzzer
    Creado por David S. Medina <DexAnidem>, 2020

    Parte del proyecto <<Prototipo de respirador mecánico electrónico>>
    para la Corporación Universitaria Autonoma de Nariño.
  
*/

#ifndef Buzzer_h
#define Buzzer_h

#include "Arduino.h"

class Buzzer{
    public:
        Buzzer(int buzzerPin);
    private:
        int _attachedPin;
};

Buzzer::Buzzer(int buzzerPin)
{
    pinMode(buzzerPin, OUTPUT);
    _attachedPin = buzzerPin;  
}

#endif