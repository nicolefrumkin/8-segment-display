void setup() {
  DDRD = 0xFF; //PORTD ALL PINS AS O/P
  unsigned char numbers[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7C,0x07,0x7F,0x6F}, i=0;
}

void loop() {
  for (i=0;i<10;i++)
  {
    PORTD = numbers[i];
    delay(1000);
  }
}
