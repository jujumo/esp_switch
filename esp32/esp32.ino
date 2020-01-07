
#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>


// Replace the next variables with your SSID/Password combination
const char* wifi_ssid = "SSID";
const char* wifi_password = "PASSWD";
const char* mqtt_server = "192.168.0.127";

WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int status = WL_IDLE_STATUS;

void setup() {
  
  // put your setup code here, to run once:
    Serial.begin(115200);
    while (!Serial) {
      ; // wait for serial port to connect. Needed for Leonardo only
    }
    // We start by connecting to a WiFi network
    // attempt to connect to Wifi network:
    while ( status != WL_CONNECTED) {
      Serial.print("Attempting to connect to SSID: ");
      Serial.println(wifi_ssid);
      // Connect to WPA/WPA2 network. Change this line if using open or WEP network:    
      status = WiFi.begin(wifi_ssid, wifi_password);
      // wait 10 seconds for connection:
      delay(10000);
    }
    
    // print your WiFi shield's IP address:
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
}

int value = 0;

void loop() {
  // put your main code here, to run repeatedly:
    delay(5000);
    ++value;
    Serial.println("BIP");
}
