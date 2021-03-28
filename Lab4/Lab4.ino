//************************************************************************** 
// Author: Camila Lemus
// Carnet: 18272
//**************************************************************************

const byte LED_ROJO = RED_LED;
//const byte LED_AMARILLO = YELLOW_LED;
const byte LED_VERDE = GREEN_LED;

volatile byte state = LOW;

const int push_1 = PUSH1;
const int push_2 = PUSH2;

void setup() {
  pinMode(LED_ROJO, OUTPUT);
//  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  


//  pinMode(LED1_J1, OUTPUT);
//  pinMode(LED2_J1, OUTPUT);
//  pinMode(LED3_J1, OUTPUT);
//  pinMode(LED4_J1, OUTPUT);
//  pinMode(LED5_J1, OUTPUT);
//  pinMode(LED6_J1, OUTPUT);
//  pinMode(LED7_J1, OUTPUT);
//  pinMode(LED8_J1, OUTPUT);
//
//  pinMode(LED1_J2, OUTPUT);
//  pinMode(LED2_J2, OUTPUT);
//  pinMode(LED3_J2, OUTPUT);
//  pinMode(LED4_J2, OUTPUT);
//  pinMode(LED5_J2, OUTPUT);
//  pinMode(LED6_J2, OUTPUT);
//  pinMode(LED7_J2, OUTPUT);
//  pinMode(LED8_J2, OUTPUT);

//  attachInterrupt(digitalPinToInterrupt(push_1), player_1, RISING);
//  attachInterrupt(digitalPinToInterrupt(push_2), player_2, RISING);
}

void loop() {

  if (digitalRead (push_1 == 1) || digitalRead (push_2 == 1)){
    semaforo();
    }
//  
//  digitalWrite(ledPin, state);
//}
//
//void player_1() {
//  state = !state;
//}
//
//void player_2() {
//  state = !state;
}

void semaforo() {
  LED_ROJO = HIGH;
  LED_VERDE = LOW;
  delay(1000);
  LED_ROJO = HIGH;  // El RGB para amarillo es 0% azul, 100% rojo y 100% verde
  LED_VERDE = HIGH;
  delay(3000);
  LED_ROJO = LOW;
  LED_VERDE = HIGH;
  delay(3000);
  LED_VERDE = LOW;
}
