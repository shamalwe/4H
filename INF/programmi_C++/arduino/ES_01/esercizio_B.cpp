//SHAMAL WELIKADAGE
class LED 
{
  private:
    int pin;

  public:
    LED(int piedino) 
    {
      pin = piedino;
      pinMode(pin, OUTPUT);
    }

    void accendi() 
    {
      digitalWrite(pin, HIGH);
    }

    void spegni() 
    {
      digitalWrite(pin, LOW);
    }
};

class Pulsante 
{
  private:
    int pin;

  public:
    Pulsante(int piedino) 
    {
      pin = piedino;
      pinMode(pin, INPUT_PULLUP);
    }

    bool premi() 
    {
      return digitalRead(pin) == LOW;
    }
};

LED ledGreen(12);
LED ledBlue(13);
Pulsante pulsante(2);

void setup() {}

void loop() 
{
    
  if (pulsante.premi()) 
  {
    ledGreen.spegni();
    ledBlue.accendi();
  } 
  else 
  {
    ledGreen.accendi();
    ledBlue.spegni();
  }
}