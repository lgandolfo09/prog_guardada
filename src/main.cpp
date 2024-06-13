#include <Arduino.h>

int x = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando");
  delay(1000);
  x=1;
}

void loop() {
  switch (x){
    case 1: 
    Serial.println("Inicio");
    delay(1000);
    x=2;
    break;
    case 2: 
    Serial.println("-Iniciar nueva medición");
    Serial.println("-Registros");
    delay(2000);
    x=3;
    break;
    case 3: 
    Serial.println("Ingrese nombre de usuario");
    delay(2000);
    x=4;
    break;
    case 4: 
    Serial.println("Tiempo de medición:");
    delay(2000);
    x=5;
    break;
    case 5: 
    Serial.print("Comenzar medición");
    delay(2000);
    x=6;
    break;
    case 6: 
    Serial.println("Tire de la cuerda en:");
    Serial.println("3");
    delay(1000);
    Serial.println("2");
    delay(1000);
    Serial.println("1");
    delay(2000);
    x=7;
    break;
    case 7: 
    Serial.println("Temporizador");
    delay(2000);
    x=8;
    break;
    case 8: 
    Serial.println("Nombre/Fecha");
    Serial.println("Medición");
    delay(2000);
    x=9;
    break;
    case 9: 
    Serial.println("Nombre/fecha");
    break;
  }
}
