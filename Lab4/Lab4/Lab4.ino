//************************************************************************** 
// Author: Camila Lemus
// Carnet: 18272
//**************************************************************************


int start_game = 0;
int start_semaf = 0;

volatile byte state = LOW;


const int LED1_J1 = PB_0;
const int LED2_J1 = PB_1;
const int LED3_J1 = PE_4;
const int LED4_J1 = PE_5;
const int LED5_J1 = PB_4;
const int LED6_J1 = PA_5;
const int LED7_J1 = PA_6;
const int LED8_J1 = PA_7;


const int LED1_J2 = PD_0;
const int LED2_J2 = PD_1;
const int LED3_J2 = PD_2;
const int LED4_J2 = PD_3;
const int LED5_J2 = PE_1;
const int LED6_J2 = PE_2;
const int LED7_J2 = PE_3;
const int LED8_J2 = PF_1;


const int P1_WINN = PB_7;
const int P2_WINN = PC_6;

const int P1 = PB_3;
const int P2 = PE_0;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  
  pinMode(PUSH1, INPUT_PULLUP);
  pinMode(PUSH2, INPUT_PULLUP);

  pinMode(LED1_J1, OUTPUT);
  pinMode(LED2_J1, OUTPUT);
  pinMode(LED3_J1, OUTPUT);
  pinMode(LED4_J1, OUTPUT);
  pinMode(LED5_J1, OUTPUT);
  pinMode(LED6_J1, OUTPUT);
  pinMode(LED7_J1, OUTPUT);
  pinMode(LED8_J1, OUTPUT);

  pinMode(LED1_J2, OUTPUT);
  pinMode(LED2_J2, OUTPUT);
  pinMode(LED3_J2, OUTPUT);
  pinMode(LED4_J2, OUTPUT);
  pinMode(LED5_J2, OUTPUT);
  pinMode(LED6_J2, OUTPUT);
  pinMode(LED7_J2, OUTPUT);
  pinMode(LED8_J2, OUTPUT);

  pinMode(P1, INPUT_PULLUP);
  pinMode(P2, INPUT_PULLUP);
  

  attachInterrupt(digitalPinToInterrupt(PUSH1), button1, RISING);
  attachInterrupt(digitalPinToInterrupt(PUSH2), button2, RISING);
}

void loop() {
  if (start_semaf == 1){
    start_semaf = 0;
    semaforo();
    }
}

void button1() {
  start_semaf = 1;
}

void button2() {
  start_semaf = 1;
}

void player1(){
  
}

void player2(){
  
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
  start_game = 1;
}
