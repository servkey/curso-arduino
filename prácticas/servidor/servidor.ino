
#include <SPI.h>
#include <Ethernet.h>

// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;

byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(148,226,80,161);
EthernetServer server(80);


void setup() {
  Serial.begin(9600);
  Ethernet.begin(mac, ip);
  server.begin();
  Serial.print("servidor ejecutándose en ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    Serial.println("Cliente conectado");
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.println(c);

        
        
        if (c == '\n') {
          Serial.println("Salto de línea");  
        } 
      }
    }
    // give the web browser time to receive the data
    delay(1);
    client.stop();
    Serial.println("cliente desconectado");
  }
}
