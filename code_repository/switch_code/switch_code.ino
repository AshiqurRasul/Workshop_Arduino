const int buttonPin = 2; //pushbutton pin
const int ledPin = 8; //led pin
int buttonstate = 0; //variable for reading the pushbutton status

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop(){
  buttonstate = digitalRead(buttonPin);
  if (buttonstate == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}



