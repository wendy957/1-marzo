int LedR=11;
int LedG=10;
int LedB=9;
int voltajeR;
int voltajeG;
int voltajeB;
int LumenesR;
int LumenesG;
int LumenesB;

void setup() {
pinMode(LedR,OUTPUT);
pinMode(LedG,OUTPUT);
pinMode(LedB,OUTPUT);
}

void loop() {
voltajeR=analogRead(A0);
LumenesR=map(voltajeR,0,1023,0,255);
analogWrite(LedR,LumenesR);

voltajeG=analogRead(A1);
LumenesG=map(voltajeG,0,1023,0,255);
analogWrite(LedG,LumenesG);

voltajeB=analogRead(A2);
LumenesB=map(voltajeB,0,1023,0,255);
analogWrite(LedB,LumenesB);
}
