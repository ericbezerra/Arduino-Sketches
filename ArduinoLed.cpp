#define led 5

void setup
{
    pinMode(led, OUTPUT);
}

void loop
{
    static int i = 0;

    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
}
