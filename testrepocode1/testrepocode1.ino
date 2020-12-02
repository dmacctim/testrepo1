bool thisBit;
int waitTime = 500;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  while (!thisBit)
  {
    Serial.print("thisBit isn't ready yet");
    delay(waitTime);
    for (short i = 10; i > 0; i--)
    {
      Serial.print("\n");
      Serial.print(i);
      Serial.print("...");
      delay(waitTime);
      if (i == 1)
      {
        thisBit = true;
        Serial.print("\nAll done! thisBit is ready.");
      }
    }
  }
}
