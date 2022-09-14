
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

const int counter = 0;
const int cantor = 9;
void setup() {
 pinMode (cantor , OUTPUT);

}

void loop() {
 
firstSection();
beep (gS , 1000);
tone (cantor , 500);
delay (500);
tone (cantor , 83);
delay (500);
}

void beep(int note, int duration)
{
  
  tone(cantor, note, duration);//Play tone on buzzerPin
 
  
  if(counter % 2 == 0)//Play different LED depending on value of 'counter'
  {
        delay(duration);
   }else
  {
       delay(duration);
     }
  
  noTone(cantor);//Stop tone on buzzerPin
 
  delay(50);
 
  //Increment counter
  
}
 void firstSection()
{
  beep(a, 500);
  beep(a, 500);    
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);  
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);
 
  delay(500);
 
  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);  
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);
 
  delay(500);
}
