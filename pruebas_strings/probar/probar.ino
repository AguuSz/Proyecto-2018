// Buffer to store incoming commands from serial port
#include <SoftwareSerial.h>
String inData;

SoftwareSerial miBT (10,11);

void setup() {
    Serial.begin(9600);
    miBT.begin(38400);
    Serial.println("Serial conection started, waiting for instructions...");
}

void loop() {
    while (miBT.available() > 0)
    {
        char recieved = miBT.read();
        inData += recieved; 

        // Process message when new line character is recieved
        if (recieved == '\n')
        {
            Serial.print("Arduino Received: ");
            Serial.println(inData);

            // You can put some if and else here to process the message juste like that:

            if(inData == "h\n"){ // DON'T forget to add "\n" at the end of the string.
              Serial.println("OK. Press h for help.");
            }

            if(inData == "t\n"){ // DON'T forget to add "\n" at the end of the string.
              
            }
          
            if(inData >= 1357041600) {
              Serial.println("Tiempo establecido correctamente");
            }


            inData = ""; // Clear recieved buffer
        }
    }
}
