const int led = 13;//set pin# of led
int thisChar;
byte msg;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);//set the led for output
  Serial.begin(9600);//set the baud number of the serial monitor
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  Serial.println("Enter a message, up to 100 characters at a time");
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  //get message from user
  if (Serial.available() > 0) {
     msg  = Serial.read();
//     word(msg);
     //char txtMsg[200];
     //readSerial(msg);
     
    Serial.println(msg);
    
    //blink morse code for message written
    char c = (char) msg;
    
    switch (c) {
     case 'a':
      dot();
      dash();
      //Serial.println("Message Sent");
      break;
     case 'b':
      dash();
      dot();
      dot();
      dot();
      break;
     case 'c':
      dash();
      dot();
      dash();
      dot();
      break;
     case 'd':
      dash();
      dot();
      dot();
      break;
     case 'e':
      dot();
      break;
     case 'f':
      dot();
      dot();
      dash();
      dot();
      break;
     case 'g':
      dash();
      dash();
      dot();
      break;
     case 'h':
      dot();
      dot();
      dot();
      dot();
      break;
     case 'i':
      dot();
      dot();
      break;
     case 'j':
      dot();
      dash();
      dash();
      dash();
      break;
     case 'k':
      dash();
      dot();
      dash();
      break;
     case 'l':
      dot();
      dash();
      dot();
      dot();
      break;
     case 'm':
      dash();
      dash();
      break;
     case 'n':
      dash();
      dot();
      break;
     case 'o':
      dash();
      dash();
      dash();
      break;
     case 'p':
      dot();
      dash();
      dash();
      dot();
      break;
     case 'q':
      dash();
      dash();
      dot();
      dash();
      break;
     case 'r':
      dot();
      dash();
      dot();
      break;
     case 's':
      dot();
      dot();
      dot();
      break;
     case 't':
      dash();
      break;
     case 'u':
      dot();
      dot();
      dash();
      break;
     case 'v':
      dot();
      dot();
      dot();
      dash();
      break;
     case 'w':
      dot();
      dash();
      dash();
      break;
     case 'x':
      dash();
      dot();
      dot();
      dash();
      break;
     case 'y':
      dash();
      dot();
      dash();
      dash();
      break;
     case 'z':
      dash();
      dash();
      dot();
      dot();
      break;
     case '1':
      dot();
      dash();
      dash();
      dash();
      dash();
      break;
     case '2':
      dot();
      dot();
      dash();
      dash();
      dash();
      break;
     case '3':
      dot();
      dot();
      dot();
      dash();
      dash();
      break;
     case '4':
      dot();
      dot();
      dot();
      dot();
      dash();
      break;
     case '5':
      dot();
      dot();
      dot();
      dot();
      dot();
      break;
     case '6':
      dash();
      dot();
      dot();
      dot();
      dot();
      break;
     case '7':
      dash();
      dash();
      dot();
      dot();
      dot();
      break;
     case '8':
      dash();
      dash();
      dash();
      dot();
      dot();
      break;
     case '9':
      dash();
      dash();
      dash();
      dash();
      dot();
      break;
     case '0':
      dash();
      dash();
      dash();
      dash();
      dash();
      break;
    }
  //}
  }
   //char msg[100] = Serial.read();
  //readSerial(msg);
  //Serial.println("Sending...");
  }
  
//}

void dash() {
  //Serial.println("dash");
  digitalWrite(led, HIGH);
  delay(600);
  digitalWrite(led, LOW);
  delay(400);
}

void dot() {
  //Serial.println("dot");
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(400);
}

/*
  Read input serial
 */
int readSerial(char result[])
{
  int i = 0;
  while(1)
  {
    while (Serial.available() > 0)
    {
      char inChar = Serial.read();
      if (inChar == '\n')
      {
        result[i] = '\0';
        Serial.flush();
        return 0;
      }
      if(inChar!='\r')
      {
        result[i] = inChar;
        i++;
      }
    }
  }
}
