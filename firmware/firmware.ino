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

  if (P1 == 1) {
    digitalWrite(LED1, HIGH);
  }   else {
    digitalWrite(LED1, LOW);
  }
  if (P2 == 1) {
    digitalWrite(LED2, HIGH);
  }   else {
    digitalWrite(LED2, LOW);
  }
  if (P3 == 1) {
    digitalWrite(LED3, HIGH);
  }   else {
    digitalWrite(LED3, LOW);
  }
  if (P4 == 1) {
    digitalWrite(LED4, HIGH);
  }   else {
    digitalWrite(LED4, LOW);
  }
  if (P5 == 1) {
    digitalWrite(LED5, HIGH);
  }   else {
    digitalWrite(LED5, LOW);
  }
  if (P6 == 1) {
    digitalWrite(LED6, HIGH);
  }   else {
    digitalWrite(LED6, LOW);
  }
  if (P7 == 1) {
    digitalWrite(LED7, HIGH);
  }   else {
    digitalWrite(LED7, LOW);
  }
  if (P8 == 1) {
    digitalWrite(LED8, HIGH);
  }   else {
    digitalWrite(LED8, LOW);
  }

  delay(1);

}
