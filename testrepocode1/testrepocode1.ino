bool thisBit;
int waitTime = 500;
bool stopSorting;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  while (!thisBit)
  {
    Serial.print("Initializing cookie sorting machine...");
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
        Serial.print("\nCookie sorting machine initialized.");
      }
    }
  }

  while (thisBit)
  {
    if (!stopSorting)
    {
      Serial.print("\nBegin cookie sorting");
    }
  }
}
