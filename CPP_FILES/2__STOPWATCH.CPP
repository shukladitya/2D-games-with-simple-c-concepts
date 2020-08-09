#include <iostream>
#include <conio.h>
#include <dos.h>

using namespace std;

int main()
{
textcolor(GREEN);
int a, b, c, d, e;
for(a = 0; ;a++)
{
 for(b = 0; b <= 60; b++)
{
  for(c = 0; c <= 60; c++)
{
   for(d = 1; d <= 100; d++)
{
    gotoxy(35,12);
    cout << a << ":" << b << ":" << c << ":" << d;
    delay(10);
    clrscr();
   }
  }
 }
}
}
