#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int x = 35, y = 12;
char dir, body = 221, head = 2;
again:
gotoxy(x, y);
cout << "*";
dir = getch();
if(dir == 'd')
{
  y = y + 1;
}
else if(dir == 's')
{
  x = x - 1;
}
else if(dir == 'w')
{
  y = y - 1;
}
else if(dir == 'q')
{
  exit(0);
}
goto again;
getch();
//HMPK
}
