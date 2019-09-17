
void setup() {
    pinMode(D7, OUTPUT);
    Particle.function("doAll", doAllFunction);   
}

void loop() {

}

int myReturn = 0;

int doAllFunction(String myParams) {
    if  (myParams == "toggleLED"){
        digitalWrite(D7, !digitalRead(D7));
        myReturn = digitalRead(D7);    // just so it is either 0 or 1
        Particle.publish("Received Params: " + String(myParams), "Returned: " + String(myReturn), 60, PRIVATE);  

    } else 
    
    if (myParams == "photoResistor"){
        myReturn = analogRead(A0);   
        Particle.publish("Received Params: " + String(myParams), "Returned: " + String(myReturn), 60, PRIVATE);  
    } else {
        myReturn = -1;   // showing an incorrect argument
    }
    return myReturn;                                
}
