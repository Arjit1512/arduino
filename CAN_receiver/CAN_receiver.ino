#include <SPI.h>            //Library for using SPI Communication
#include <mcp2515.h>        //Library for using CAN Communication (https://github.com/autowp/arduino-mcp2515/)
 
struct can_frame canMsg;
 
MCP2515 mcp2515(10);              // SPI CS Pin 10
 
 
void setup()
{
  Serial.begin(9600);             //Begins Serial Communication at 9600 baudrate
  SPI.begin();                    //Begins SPI communication
  Serial.println("CANBUS TUTORIAL");
  delay(3000);
 
  mcp2515.reset();
  mcp2515.setBitrate(CAN_500KBPS, MCP_8MHZ); //Sets CAN at speed 500KBPS and Clock 8MHz
  mcp2515.setNormalMode();                //Sets CAN at normal mode
}
 
 
void loop()
{
  if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK) // To receive data (Poll Read)
  {
  int x = canMsg.data[0];
  int y = canMsg.data[1];
 
  Serial.println(x);
  Serial.println('+');
  Serial.println(y);
  delay(1000);
  }
}
