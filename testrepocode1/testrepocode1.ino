bool thisBit;
int waitTime = 500;
bool stopSorting;
short cookieType; //0 = choco chip, 1 = sugar, 2 = peanut butter, 3 = snickerdoodle

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

  cookieType = random(0, 4);
  
  if (!stopSorting)
  {
    Serial.println();
    delay(waitTime);
    Serial.print(cookieType);
  }
}
