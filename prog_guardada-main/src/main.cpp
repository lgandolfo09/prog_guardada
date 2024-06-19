#include <Arduino.h>
#include <iostream>
int tecla;
int x = 0;
int tiempo = 0;
void setup()
{
  Serial.begin(9600);
}

void loop(){
  x=1;
  switch (x){
  case 1:{
    Serial.println("Inicio");
    delay(1000);
    x = 2;}
    break;
  case 2: 
  {
    Serial.println("*************************");
    Serial.println("**   Menu Principal    **");
    Serial.println("*************************");
    Serial.println("==> Iniciar nueva medición");
    Serial.println("==> Registros");
    while (!Serial.available()){
    }
    int i = Serial.parseInt();
    Serial.println("Opcion: " + String(i));
    if (i == 1){
      x = 3;
    }
    if (i == 2){
      x = 9;
    }
    }
    break;
    case 3:
    {
    Serial.println("Ingrese nombre de usuario");
    while (!Serial.available()){
    }
    char nombre = Serial.parseInt();
    Serial.println("Hola " + String(nombre));
    x = 4;
    }
    break; 
    case 4:
    {
    Serial.println("Tiempo de medición:" + String(tiempo));
    while (!Serial.available()){
    }
    int ok = Serial.parseInt();
    if (ok == 's'){
      tiempo++;
    }
    if (ok == 'a'){
      tiempo--;
    }
    if (ok == 'b'){
      x = 5;
    }
    }
    break;
  case 5:
  {
    Serial.print("Comenzar medición");
    while (!Serial.available()){
    }
    int si = Serial.parseInt();
    x = 6;
    }
    break;
  case 6:
  {
    Serial.println("Tire de la cuerda en:");
    Serial.println("3");
    delay(1000);
    Serial.println("2");
    delay(1000);
    Serial.println("1");
    delay(2000);
    x = 7;
    }
    break;
  case 7:{
    Serial.println("Temporizador");
    delay(2000);
    x = 8;
    }
    break;
  case 8:
  {
    Serial.println("Nombre/Fecha");
    Serial.println("Medición");
    delay(2000);
    x = 9;
    }
    break;
  case 9:
    Serial.println("Nombre/fecha");
    break;
  }
}