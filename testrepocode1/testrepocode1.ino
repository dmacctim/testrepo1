bool thisBit;
int waitTime = 500;
bool stopSorting;
short cookieType; //0 = choco chip, 1 = sugar, 2 = peanut butter, 3 = snickerdoodle
short cookiesSorted;
short chocoChipCount;
short sugarCount;
short pbCount;
short snickerdoodleCount;

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
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
    
  if (!stopSorting && cookiesSorted < 10)
  {
    if (cookieType == 0)
    {
      chocoChipCount++;
    }

    else if (cookieType == 1)
    {
      sugarCount++;
    }

    else if (cookieType == 2)
    {
      pbCount++;
    }

    else if (cookieType == 3)
    {
      snickerdoodleCount++;
    }

    cookiesSorted++;
    Serial.print("\nCookies sorted: ");
    Serial.print(cookiesSorted);
  }

  else if (cookiesSorted == 10)
  {
    stopSorting = true;
    Serial.print("\nCookie Count: \n");
    Serial.print(chocoChipCount); Serial.print(" chocolate chip cookies\n");
    Serial.print(sugarCount); Serial.print(" sugar cookies\n");
    Serial.print(pbCount); Serial.print(" peanut butter cookies\n");
    Serial.print(snickerdoodleCount); Serial.print(" snickerdoodle cookies\n");
    cookiesSorted = 0;
  }
}
