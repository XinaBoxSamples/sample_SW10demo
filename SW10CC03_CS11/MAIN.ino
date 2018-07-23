void main_code(void) {

  // Request SW10 to get the temperature measurement and store in
  // the temperature variable   
  tempC = SW10.getTempC(); // Temperature in Celcuis
  tempF = SW10.getTempF(); // Temperature in Farenheit
  

  // Display the recoreded data on the OLED screen
  OD01.set2X();
  OD01.println("SW10 Data"); 

  OD01.set1X();
  OD01.println("Hold sensor to ");
  OD01.println("increase temperature");
  OD01.println(" ");   
  OD01.print("Temperature: ");
  OD01.print(tempC);
  OD01.println("*C");
  OD01.print("Temperature: ");
  OD01.print(tempF);
  OD01.println("F"); 
  
}

