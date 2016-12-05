int sensor=7; //The output of PIR sensor connected to pin 7
int push_switch=6; // push button switch connected to pin 6
int buzzer=8; // buzzer connected at pin 8
int sensor_value; //variable to hold read sensor value
void setup() {
  pinMode(sensor,INPUT); // configuring pin 7 as Input
  pinMode(push_switch,INPUT); // configuring pin 6 as Input
  pinMode(buzzer,OUTPUT); // configuring pin 8 as OUTPUT
}

void loop() {
  sensor_value=digitalRead(sensor); // Reading sensor value from pin 7
if(sensor_value==HIGH) // Checking if PIR sensor sends a HIGH signal to Arduino
{
  digitalWrite(buzzer,HIGH); // Activating the buzzer 
} 
if(digitalRead(push_switch==HIGH))// Checking if pushbutton was pressed 
{
digitalWrite(buzzer,LOW); // turning OFF the buzzer 
}}
