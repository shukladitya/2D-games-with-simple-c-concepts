#include <iostream.h>
#include <conio.h>
#include <dos.h>

using namespace std;

int main()
{
clrscr();
int i, j = 1;
char a;
for(i = 0; i < 266; i++)
{
a = i;
cout << j << "." << a << "  ";
j = j + 1;
delay(50);
}
return 0;
}
