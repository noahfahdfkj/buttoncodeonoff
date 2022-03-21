int button_pin = 2;
int button_state = 0;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(button_pin,INPUT);
}


void loop() 
{
  button_state = digitalRead(button_pin);
  digitalWrite(LED_BUILTIN, button_state);   
}
