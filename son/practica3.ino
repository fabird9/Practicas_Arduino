const int pinBuzzer = 9;
const int tonos[] = {261,277,294,311,330,349,370,392,415,440,466,494};
const int countTonos = 10;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 10 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int iTono = 0 ; iTono <countTonos ; iTono++)
  {
    
    tone(pinBuzzer,440);
 
       delay (250) ;
    noTone(pinBuzzer);
    
       delay (250) ;

       
    
  }
}
