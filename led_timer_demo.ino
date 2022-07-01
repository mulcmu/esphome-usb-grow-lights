#define CH1 14
#define CH2 5
#define CH3 12
#define CH4 13
#define CH5 4
#define CH6 15

#define SW1 0  //POWER
#define SW2 2  //CLOCK
#define SW3 3  //CYCLE
#define SW4 16 //± BRIGHTNESS

int b1, b2, b3, b4;

void setup() {

  Serial.begin(115200, SERIAL_8N1, SERIAL_TX_ONLY);
  Serial.print("led timer demo");
  
  // initialize led outputs
  pinMode( CH1 , OUTPUT);
  pinMode( CH2 , OUTPUT);
  pinMode( CH3 , OUTPUT);
  pinMode( CH4 , OUTPUT);
  pinMode( CH5 , OUTPUT);
  pinMode( CH6 , OUTPUT);

  // initialisze the buttons
  pinMode( SW1 , INPUT_PULLUP);
  pinMode( SW2 , INPUT_PULLUP);
  pinMode( SW3 , INPUT_PULLUP);
  pinMode( SW4 , INPUT_PULLDOWN_16);

}

void loop() {
  
  //The brightness button is inverted
  //0 when released, 1 when depressed
  b1=!digitalRead(SW1);
  b2=!digitalRead(SW2);
  b3=!digitalRead(SW3);
  b4=digitalRead(SW4);

  Serial.printf("%d\t%d\t%d\t%d\n",b1, b2, b3, b4);

  digitalWrite(CH1, b1);
  digitalWrite(CH2, b2);
  digitalWrite(CH3, b3);
  digitalWrite(CH4, b4);
  digitalWrite(CH5, !b1);
  digitalWrite(CH6, !b2);

  
}
