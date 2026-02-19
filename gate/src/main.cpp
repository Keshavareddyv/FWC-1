#include <Arduino.h>

int a = 5;
int b = 6;
int c = 7;
int d = 8;
int e = 9;
int f = 10;
int g = 11;

void setup() {

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void display0() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void display1() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void loop() {

  for (int P = 0; P <= 1; P++) {
    for (int Q = 0; Q <= 1; Q++) {
      for (int R = 0; R <= 1; R++) {

        int F = (P & Q) | (Q & R) | (P & R);

        if (F == 0)
          display0();
        else
          display1();

        delay(2000);
      }
    }
  }
}
