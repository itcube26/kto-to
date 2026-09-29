#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() {

  pinMode(M1_dir, OUTPUT);
  pinMode(M1_Speed, OUTPUT);

  pinMode(M2_dir, OUTPUT);
  pinMode(M2_Speed, OUTPUT);

}

void vpered(){
  digitalWrite(M1_dir, 1);
  analogWrite(M1_Speed, 255);
  digitalWrite(M2_dir, 0);
  analogWrite(M2_Speed, 255);

  delay(1000);
}

void nazad(){
  digitalWrite(M1_dir, 0);
  analogWrite(M1_Speed, 255);
  digitalWrite(M2_dir, 1);
  analogWrite(M2_Speed, 255);

  delay(1000);
}

void vlevo(){
  digitalWrite(M1_dir, 1);
  analogWrite(M1_Speed, 0);
  digitalWrite(M2_dir, 0);
  analogWrite(M2_Speed, 255);

  delay(1000);
}

void vpravo(){
  digitalWrite(M1_dir, 1);
  analogWrite(M1_Speed, 255);
  digitalWrite(M2_dir, 0);
  analogWrite(M2_Speed, 0);

  delay(1000);
}

void stop(){
  analogWrite(M1_Speed, 0);
  analogWrite(M2_Speed, 0);
  delay(1000);
}

void loop() {

  vpered();
  stop();

  nazad();
  stop();

  vlevo();
  stop();

  vpravo();
  stop();
}