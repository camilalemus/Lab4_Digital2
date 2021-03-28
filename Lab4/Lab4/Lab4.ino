//************************************************************************** 
// Author: Camila Lemus
// Carnet: 18272
//**************************************************************************

const int push_1 = PUSH1;
const int push_2 = PUSH2;

int start = 0;
int semaf = 0;

volatile byte state = LOW;


void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  


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

  attachInterrupt(digitalPinToInterrupt(push_1), button1, RISING);
  attachInterrupt(digitalPinToInterrupt(push_2), button2, RISING);
}

void loop() {

  if (semaf == 1){
    semaforo();
    }
  
}

void button1() {
  semaf = 1;
  state = !state;
}

void button2() {
  semaf = 1;
  state = !state;
}

void semaforo() {
  digitalWrite (RED_LED, HIGH);
  digitalWrite (GREEN_LED, LOW);
  delay(1000);
  digitalWrite (RED_LED, HIGH);  // El RGB para amarillo es 0% azul, 100% rojo y 100% verde
  digitalWrite (GREEN_LED, HIGH);
  delay(1000);
  digitalWrite (RED_LED, LOW);
  digitalWrite (GREEN_LED, HIGH);
  return;
  start = 1;
}
