#include <SPI.h>
#include <Ethernet.h>

long randNumber;

byte mac[] = {  0xB8, 0x27, 0xEB, 0xFE, 0xB2, 0x49 };


IPAddress server(192,168,0,100);

bool connected = false;


EthernetClient client;

void setup() 
{
	Serial.begin(9600);
	
        randomSeed(analogRead(0));
	
	if (Ethernet.begin(mac) == 0) 
	{
		Serial.println("DHCP : NOT OK\n");  
   
    	for(;;);
        }
    Serial.println("Configuration Ethernet DHCP : OK \n@IP : ");
      for (byte thisByte = 0; thisByte < 4; thisByte++)
      {
			
            Serial.print(Ethernet.localIP()[thisByte], DEC);
            Serial.println("."); 
       }
    delay(1000);
}

int val=0;

void loop()
{	
	int val = random(300);
        String DatatoSend ="";
        DatatoSend += "Data=";
        DatatoSend += (val);
        
        Serial.println("DatatoSend :" + DatatoSend );
        
      
        	
	if (client.connect(server, 80)) 
	{
	    Serial.println("\nconnected...");
	    Serial.println("ARDUINO: forming HTTP request message");
	   	client.println("POST /Test/PhpPost.php HTTP/1.1");
	   	client.println("From: Arduino1 ");
	   	client.println("User-Agent: HTTPTool/1.0");
	   	client.println("Content-Type: application/x-www-form-urlencoded");
                client.print("Content-Length:");
                client.println(DatatoSend.length());
                client.println("Connection: close");
                client.println(DatatoSend);
                client.println();

	    Serial.println("ARDUINO: HTTP message sent");
	   	delay(3000);
   		if(client.available())
   		{
   			Serial.println("ARDUINO: HTTP message received");
   			Serial.println("ARDUINO: printing received headers and script response...\n");
   			
   			while(client.available())
   			{
   				char c = client.read();
   				Serial.print(c);
   			}
   		}
   		else
   		{
   			Serial.println("ARDUINO: no response received / no response received in time");
   		}
   		
   		client.stop();
   	}
    else
    {
    	Serial.println("connection failure");
    }
    delay(2000);

}
