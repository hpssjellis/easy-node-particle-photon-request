void setup() {
    pinMode(D7, OUTPUT);
    Particle.function("myTogglePin", myTogglePinFunction);
}

void loop() {

}

int myTogglePinFunction(String myCommand) {
    digitalWrite(D7, !digitalRead(D7));
    Particle.publish("myCommand variable is: ", myCommand, 60, PRIVATE);  
    
    return digitalRead(D7);
}
