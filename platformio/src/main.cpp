#include <Arduino.h>

#define P 2
#define Q 3
#define R 4

#define A 8
#define B 9
#define C 10
#define D 11

void setup() 
{
    pinMode(P, INPUT);
    pinMode(Q, INPUT);
    pinMode(R, INPUT);

    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
}

void loop() 
{
    int p = digitalRead(P);
    int q = digitalRead(Q);
    int r = digitalRead(R);

    int f = p ^ q ^ r;   // XOR operation

    if (f == 0)
    {
        digitalWrite(A, LOW);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
    }
    else
    {
        digitalWrite(A, HIGH);
        digitalWrite(B, LOW);
        digitalWrite(C, LOW);
        digitalWrite(D, LOW);
    }
}
