void setup()
{
pinMode(3, OUTPUT);      // Fija el pin 3 como salida.
}

void loop()
{
  int i;
  for (i=100;  i< 1000; i++){
  delay(100);
  tone(3, i, 250);
 }


}



