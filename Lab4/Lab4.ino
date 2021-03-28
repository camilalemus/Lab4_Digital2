//************************************************************************** 
// Author: Camila Lemus
// Carnet: 18272
//**************************************************************************

const byte LED_ROJO = RED_LED;
const byte LED_AMARILLO = YELLOW_LED;
const byte LED_VERDE = GREEN_LED;

volatile byte state = LOW;

void setup() {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(push_1, INPUT_PULLUP);
  pinMode(push_2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(push_1), player_1, RISING);
  attachInterrupt(digitalPinToInterrupt(push_2), player_2, RISING);
}

void loop() {

  if (digitalRead (push_1 == 1) || digitalRead (push_2 == 1)){
    semaforo();
    }
  
  digitalWrite(ledPin, state);
}

void player_1() {
  state = !state;
}

void player_2() {
  state = !state;
}

void semaforo() {
  LED_ROJO = HIGH;
  delay(1000)
  LED_ROJO = LOW;
  LED_AMARILLO = HIGH;
  delay(3000)
  LED_AMARILLO = LOW;
  LED_VERDE = HIGH;
  delay(3000)
  LED_VERDE = LOW;
}
