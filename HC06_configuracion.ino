// Código para configurar el HC-06, solo hace falta hacerlo una vez
int PWRBL = ; // Pint al que va alimentado el HC-06

void setup () {
  pinMode(PWRBL,OUTPUT);   
                    // Se puede poner un led
  digitalWrite(PWRBL, HIGH); 
  
  Serial.begin(9600);
  
  Serial.print("AT");
  delay(1000);
  Serial.print("AT+NAMEDronArroyo"); //Nombre
  delay(1000);
  Serial.print("AT+BAUD8"); //velocidad en este caso 115200
  delay(1000);
  Serial.print("AT+PIN1212"); //PIN
  delay(1000);
  //Si ponemos LED aqui se enciende
  
}
void loop() {}

