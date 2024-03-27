
int LED1=10;
int LED2=9;
int LED3=8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,Output);
  digitalwrite(LED1,LOw);
  pinMode(LED2,OUTPUT);
  digitalWrite(LED2,Output);
  pinMode(LED3,OUTPUT);
  digitalWrite(LED3,Output);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
  delay(50);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(50);
  digitalWrite(LED3,HIGH);
  delay(2000);
  digitalWrite(LED3,LOW);
  delay(50);
}
