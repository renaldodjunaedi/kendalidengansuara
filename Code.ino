int sinyalsuara;
boolean statuss;
void setup() {
  Serial.begin(9600);
  pinMode(A4,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  sinyalsuara=digitalRead(A4);
  if (sinyalsuara==0){
    delay(200);
    statuss=!statuss;
    if (statuss==1){
      Serial.println("Lampu matii");  
    }
    else{
      Serial.println("Lampu matii");
    }
    
    digitalWrite(9,statuss);
    delay(200);  
  }
}
