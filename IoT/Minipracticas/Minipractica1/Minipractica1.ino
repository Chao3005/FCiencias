/*
 *Universidad Nacional Autónoma de México
 *Facultad de Ciencias
 *Licenciatura en Ciencias de la Computación
 *Seminario de Ciencias de la Computación A: Introducción al Internet de las Cosas
 *
 *Basado en DigitalOutput
 *Escrito por: M. en I. Valente Vázquez Velázquez
 *Última modificación: 1-enero-2023
 *https://sites.google.com/ciencias.unam.mx/introduccion-iot-fc/inicio
*/

//Defino pines
#define LED1 14
#define LED2 27

void setup() {
  //Declaro los pines como salida
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  //Enciendo led1 durante 11 ms
  digitalWrite(LED1, HIGH);
  delay(11);

  //Apago led1 durante 11 ms
  digitalWrite(LED1, LOW);
  delay(11);
}


//El periodo es 11+11 milisegundos convertido en segundos
//La frecuencia es 1/periodo

//El periodo es 22 milisegundos = 0.022 segundos
//La frecuencia entonces es 1 / 0.022 segundos = 45.454 Hz

/*
 * Equipo
 * Trujillo Beltran Zianya
 * Romero Cruz Fernando
 */
