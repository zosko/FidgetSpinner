const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;
const int LED4 = 6;
const int LED5 = 7;
const int LED6 = 8;
const int LED7 = 9;
const int LED8 = 10;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop() {

  S();
  Sp();
  L();
  Sp();
  I();
  Sp();
  C();
  Sp();
  E();
  Sp();
  Sp();
  Sp();
  Sp();
  Sp();
  Sp();
  Sp();
  Sp();
  Sp();
}

void C() {
  signal(0, 1, 1, 1, 1, 1, 1, 0);
  signal(1, 0, 0, 0, 0, 0, 0, 1);
  signal(1, 0, 0, 0, 0, 0, 0, 1);
  signal(1, 0, 0, 0, 0, 0, 0, 1);
  signal(0, 1, 0, 0, 0, 0, 1, 0);
}

void E() {
  signal(1, 1, 1, 1, 1, 1, 1, 1);
  signal(1, 0, 0, 0, 1, 0, 0, 1);
  signal(1, 0, 0, 0, 1, 0, 0, 1);
  signal(1, 0, 0, 0, 1, 0, 0, 1);
  signal(1, 0, 0, 0, 0, 0, 0, 1);
}

void I() {
  signal(1, 0, 0, 0, 0, 0, 0, 1);
  signal(1, 1, 1, 1, 1, 1, 1, 1);
  signal(1, 0, 0, 0, 0, 0, 0, 1);
}

void L() {
  signal(1, 1, 1, 1, 1, 1, 1, 1);
  signal(0, 0, 0, 0, 0, 0, 0, 1);
  signal(0, 0, 0, 0, 0, 0, 0, 1);
  signal(0, 0, 0, 0, 0, 0, 0, 1);
  signal(0, 0, 0, 0, 0, 0, 0, 1);
}

void S() {
  signal(0, 1, 1, 0, 0, 0, 0, 1);
  signal(1, 0, 0, 1, 0, 0, 0, 1);
  signal(1, 0, 0, 1, 0, 0, 0, 1);
  signal(1, 0, 0, 1, 0, 0, 0, 1);
  signal(1, 0, 0, 0, 1, 1, 1, 0);
}

void Sp() {
  signal(0, 0, 0, 0, 0, 0, 0, 0);
  signal(0, 0, 0, 0, 0, 0, 0, 0);
  signal(0, 0, 0, 0, 0, 0, 0, 0);
  signal(0, 0, 0, 0, 0, 0, 0, 0);
  signal(0, 0, 0, 0, 0, 0, 0, 0);
}

void signal(int P1, int P2, int P3, int P4, int P5, int P6, int P7, int P8) {

  digitalWrite(LED1, P1);
  digitalWrite(LED2, P2);
  digitalWrite(LED3, P3);
  digitalWrite(LED4, P4);
  digitalWrite(LED5, P5);
  digitalWrite(LED6, P6);
  digitalWrite(LED7, P7);
  digitalWrite(LED8, P8);

  delay(1);
}
