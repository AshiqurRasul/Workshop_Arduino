const int buttonPin = 2;
const int ledPin = 8;
int ledState = HIGH;
int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}
void loop() {
  int reading  = digitalRead(buttonPin);
  if (reading != lastButtonState){
    lastDebounceTime = millis();}
  if ((millis() - lastDebounceTime) > debounceDelay){
    if (reading != buttonState){
      buttonState = reading;
    if (buttonState == HIGH){
      ledState = !ledState;
    }}}
  digitalWrite(ledPin, ledState);
  lastButtonState = reading;
}
