#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{
int xs,bs,sps,x=35,y=12,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,speed,xfood=30,yfood=5,score=0;
char cho,b1=176,b2=177,b3=178,b4=220,com,head=2,body,food1=3,food2=4;
clrscr();
textcolor(WHITE);
textbackground(BLUE);
gotoxy(35,12);
cout<<"C7 snake\n\n\n";
delay(1000);
for(xs=1;xs<=80;xs++)
{
gotoxy(xs,15);
cout<<"  /~-@-----@------@-------@-----@---------/~~~~|_         \n";
gotoxy(xs,16);
cout<<" <~    @       @       @      @     @        O   |======  \n";
gotoxy(xs,17);
cout<<"  ?_____@__________@_______@_____@_________  O   /======  \n";
gotoxy(xs,18);
cout<<"                                          |____/         \n";
delay(80);
if(xs<=40)
sound(xs*100);
else if(xs>40)
sound(xs*10);
}

delay(1000);
again:
clrscr();
nosound();
gotoxy(1,5);
cout<<"select your snake's body:\n\n";
cout<<"1."<<b1;
cout<<"\n\n2."<<b2;
cout<<"\n\n3."<<b3;
cout<<"\n\n4."<<b4;
cout<<"\n\nyour choise:";
cin>>bs;
if(bs==1)
body=b1;
if(bs==2)
body=b2;
if(bs==3)
body=b3;
if(bs==4)
body=b4;
clrscr();
delay(500);
gotoxy(1,5);
cout<<"select your difficulty:\n\n";
cout<<"1.play like a kid";
cout<<"\n\n2.just want to test it";
cout<<"\n\n3.want to feel reality";
cout<<"\n\n4.insane,just for loosing";
cout<<"\n\nyour choise:";
cin>>sps;
if(sps==1)
speed=100;
if(sps==2)
speed=70;
if(sps==3)
speed=50;
if(sps==4)
speed=10;
clrscr();
gotoxy(39,12);
cout<<"3";
delay(1000);
clrscr();
gotoxy(39,12);
cout<<"2";
delay(1000);
clrscr();
gotoxy(39,12);
cout<<"1";
delay(1000);
clrscr();
gotoxy(39,12);
cout<<"GO";
delay(300);
clrscr();



textcolor(YELLOW);
textbackground(BLUE);
gotoxy(x,y);
cout<<head;
for(x;x<=70;x++)
 {clrscr();
 pa:
 gotoxy(1,1);
 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|_____________________________________________________________________|\n";
  gotoxy(72,4);
  cout<<"score:"<<score*10;
  gotoxy(72,2);
  cout<<"level:"<<sps;
  gotoxy(xfood,yfood);
  if(score%2==0)
  cout<<food1;
  else
  cout<<food2;
  gotoxy(x,y);
  cout<<head;
  x1=x-1;y1=y;
  gotoxy(x1,y1);
  cout<<body;
  x2=x1-1;y2=y1;
  gotoxy(x2,y2);
  cout<<body;
  x3=x2-1;y3=y2;
  gotoxy(x3,y3);
  cout<<body;
  x4=x3-1;y4=y3;
  gotoxy(x4,y4);
  cout<<body;
  x5=x4-1;y5=y4;
  gotoxy(x5,y5);
  cout<<body;
  delay(speed);
  nosound();
  if((x==xfood)&&(y==yfood))
  {clrscr();
  score=score+1;
  sound(500);
  if(score==1){xfood=50;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==2){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==3){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==4){xfood=10;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==5){xfood=20;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==6){xfood=5;yfood=16;speed=speed-1;sps=sps+1;}
  if(score==7){xfood=50;yfood=4;speed=speed-1;sps=sps+1;}
  if(score==8){xfood=50;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==9){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==10){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==11){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==12){xfood=5;yfood=8;speed=speed-2;sps=sps+1;}
   if(score==13){xfood=50;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==14){xfood=40;yfood=15;speed=speed-2;sps=sps+1;}
  if(score==15){xfood=45;yfood=18;speed=speed-2;sps=sps+1;}
  if(score==16){xfood=10;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==17){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==18){xfood=5;yfood=16;speed=speed-2;sps=sps+1;}
  if(score==19){xfood=50;yfood=4;speed=speed-2;sps=sps+1;}
  if(score==20){xfood=50;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==21){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==12){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==23){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==24){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
   if(score==25){xfood=50;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==26){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==27){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==28){xfood=10;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==29){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==30){xfood=5;yfood=16;speed=speed-3;sps=sps+1;}
  if(score==31){xfood=50;yfood=4;speed=speed-3;sps=sps+1;}
  if(score==32){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==33){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==34){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==35){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==36){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
  }
  if(x==70)
  goto ending;
  if(kbhit())
  {
   com=getch();
   if(com=='H')
   goto up;
   if(com=='M')
   goto right;
   else if(com=='P')
   goto down;
   else if(com=='c')
   {clrscr();
gotoxy(35,12);
cout<<"  you lose";
gotoxy(35,13);
cout<<"your score:99999999999999999999999999999999";
gotoxy(26,14);
cout<<" you went till level 9999999999999999999999,not bad.";
delay(5000);
getch();
again3:
clrscr();
gotoxy(20,12);
cout<<"Do you want to try again? (y=yes,n=no) ";
cho=getch();
if(cho=='y')
{
x=35;y=12;
score=0;
goto again;}
if(cho=='n')
exit(0);
else
cout<<"\n\n                          error:wrong input try again.";
delay(1000);
goto again3;
}
   else if(com=='p')
   {for(int i=0;;i++)
   {delay(50);
   if(kbhit())
   gotoxy(35,12);
   cout<<"PAUSED";
   goto pa;
   }
   }
   else if(com=='q')
   exit(0);
  }
 }
{up:
for(y;y>=0;y--)
{ clrscr();
 pa1:
 gotoxy(1,1);
 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|_____________________________________________________________________|\n";
      gotoxy(72,4);
  cout<<"score:"<<score*10;
  gotoxy(72,2);
  cout<<"level:"<<sps;
  gotoxy(xfood,yfood);
  if(score%2==0)
  cout<<food1;
  else
  cout<<food2;
  gotoxy(x,y);
  cout<<head;
  x1=x;y1=y+1;
  gotoxy(x1,y1);
  cout<<body;
  x2=x1;y2=y1+1;
  gotoxy(x2,y2);
  cout<<body;
  x3=x2;y3=y2+1;
  gotoxy(x3,y3);
  cout<<body;
  x4=x3;y4=y3+1;
  gotoxy(x4,y4);
  cout<<body;
  x5=x4;y5=y4+1;
  gotoxy(x5,y5);
  cout<<body;
  delay(speed);
  nosound();
  if((x==xfood)&&(y==yfood))
  {clrscr();
  score=score+1;
  sound(500);
  if(score==1){xfood=50;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==2){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==3){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==4){xfood=10;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==5){xfood=20;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==6){xfood=5;yfood=16;speed=speed-1;sps=sps+1;}
  if(score==7){xfood=50;yfood=4;speed=speed-1;sps=sps+1;}
  if(score==8){xfood=50;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==9){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==10){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==11){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==12){xfood=5;yfood=8;speed=speed-2;sps=sps+1;}
  if(score==13){xfood=50;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==14){xfood=40;yfood=15;speed=speed-2;sps=sps+1;}
  if(score==15){xfood=45;yfood=18;speed=speed-2;sps=sps+1;}
  if(score==16){xfood=10;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==17){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==18){xfood=5;yfood=16;speed=speed-2;sps=sps+1;}
  if(score==19){xfood=50;yfood=4;speed=speed-2;sps=sps+1;}
  if(score==20){xfood=50;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==21){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==12){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==23){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==24){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
   if(score==25){xfood=50;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==26){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==27){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==28){xfood=10;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==29){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==30){xfood=5;yfood=16;speed=speed-3;sps=sps+1;}
  if(score==31){xfood=50;yfood=4;speed=speed-3;sps=sps+1;}
  if(score==32){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==33){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==34){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==35){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==36){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
  }
  if(y==1)
  goto ending;
  if(kbhit())
  {
   com=getch();
   if(com=='H')
   goto up;
   if(com=='M')
   goto right;
   else if(com=='K')
   goto left;
   else if(com=='p')
   {for(int i=0;;i++)
   {delay(50);
   if(kbhit())
   gotoxy(35,12);
   cout<<"PAUSED";
   goto pa1;
   }
   }
   else if(com=='q')
   exit(0);
  }
}
}
{right:
for(x;x<=70;x++)
 {
  clrscr();
  pa2:
  gotoxy(1,1);
  cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|                                                                     |\n";
  cout<<"|_____________________________________________________________________|\n";
      gotoxy(72,4);
  cout<<"score:"<<score*10;
  gotoxy(72,2);
  cout<<"level:"<<sps;
  gotoxy(xfood,yfood);
  if(score%2==0)
  cout<<food1;
  else
  cout<<food2;
  gotoxy(x,y);
  cout<<body;
  x1=x+1;y1=y;
  gotoxy(x1,y1);
  cout<<body;
  x2=x1+1;y2=y1;
  gotoxy(x2,y2);
  cout<<body;
  x3=x2+1;y3=y2;
  gotoxy(x3,y3);
  cout<<body;
  x4=x3+1;y4=y3;
  gotoxy(x4,y4);
  cout<<body;
  x5=x4+1;y5=y4;
  gotoxy(x5,y5);
  cout<<head;
  delay(speed);
  nosound();
  if((x==xfood)&&(y==yfood))
  {clrscr();
  score=score+1;
  sound(500);
  if(score==1){xfood=50;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==2){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==3){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==4){xfood=10;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==5){xfood=20;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==6){xfood=5;yfood=16;speed=speed-1;sps=sps+1;}
  if(score==7){xfood=50;yfood=4;speed=speed-1;sps=sps+1;}
  if(score==8){xfood=50;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==9){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==10){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==11){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==12){xfood=5;yfood=8;speed=speed-2;sps=sps+1;}
   if(score==13){xfood=50;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==14){xfood=40;yfood=15;speed=speed-2;sps=sps+1;}
  if(score==15){xfood=45;yfood=18;speed=speed-2;sps=sps+1;}
  if(score==16){xfood=10;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==17){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==18){xfood=5;yfood=16;speed=speed-2;sps=sps+1;}
  if(score==19){xfood=50;yfood=4;speed=speed-2;sps=sps+1;}
  if(score==20){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==21){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==12){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==23){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==24){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
   if(score==25){xfood=50;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==26){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==27){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==28){xfood=10;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==29){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==30){xfood=5;yfood=16;speed=speed-3;sps=sps+1;}
  if(score==31){xfood=50;yfood=4;speed=speed-3;sps=sps+1;}
  if(score==32){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==33){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==34){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==35){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==36){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
  }
  if(x==65)
  goto ending;
  if(kbhit())
  {
   com=getch();
   if(com=='H')
   goto up;
   if(com=='M')
   goto right;
   else if(com=='P')
   goto down;
   else if(com=='p')
   {for(int i=0;;i++)
   {delay(50);
   if(kbhit())
   gotoxy(35,12);
   cout<<"PAUSED";
   goto pa2;
   }
   }
   else if(com=='q')
   exit(0);
  }
}
}
{down:
for(y;y<=24;y++){
  clrscr();
  pa3:
  gotoxy(1,1);
 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|_____________________________________________________________________|\n";
      gotoxy(72,4);
  cout<<"score:"<<score*10;
  gotoxy(72,2);
  cout<<"level:"<<sps;
  gotoxy(xfood,yfood);
  if(score%2==0)
  cout<<food1;
  else
  cout<<food2;
  gotoxy(x,y);
  cout<<head;
  x1=x;y1=y-1;
  gotoxy(x1,y1);
  cout<<body;
  x2=x1;y2=y1-1;
  gotoxy(x2,y2);
  cout<<body;
  x3=x2;y3=y2-1;
  gotoxy(x3,y3);
  cout<<body;
  x4=x3;y4=y3-1;
  gotoxy(x4,y4);
  cout<<body;
  x5=x4;y5=y4-1;
  gotoxy(x5,y5);
  cout<<body;
  delay(speed);
  nosound();
  if((x==xfood)&&(y==yfood))
  {clrscr();
  score=score+1;
  sound(500);
  if(score==1){xfood=50;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==2){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==3){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==4){xfood=10;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==5){xfood=20;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==6){xfood=5;yfood=16;speed=speed-1;sps=sps+1;}
  if(score==7){xfood=50;yfood=4;speed=speed-1;sps=sps+1;}
  if(score==8){xfood=50;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==9){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==10){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==11){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==12){xfood=5;yfood=8;speed=speed-2;sps=sps+1;}
   if(score==13){xfood=50;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==14){xfood=40;yfood=15;speed=speed-2;sps=sps+1;}
  if(score==15){xfood=45;yfood=18;speed=speed-2;sps=sps+1;}
  if(score==16){xfood=10;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==17){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==18){xfood=5;yfood=16;speed=speed-2;sps=sps+1;}
  if(score==19){xfood=50;yfood=4;speed=speed-2;sps=sps+1;}
  if(score==20){xfood=50;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==21){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==12){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==23){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==24){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
   if(score==25){xfood=50;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==26){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==27){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==28){xfood=10;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==29){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==30){xfood=5;yfood=16;speed=speed-3;sps=sps+1;}
  if(score==31){xfood=50;yfood=4;speed=speed-3;sps=sps+1;}
  if(score==32){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==33){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==34){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==35){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==36){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
  }
  if(y==24)
  goto ending;
  if(kbhit())
  {
   com=getch();
   if(com=='M')
   goto right;
   else if(com=='P')
   goto down;
   else if(com=='K')
   goto left;
   else if(com=='p')
   {for(int i=0;;i++)
   {delay(50);
   if(kbhit())
   gotoxy(35,12);
   cout<<"PAUSED";
   goto pa3;
   }
   }
   else if(com=='q')
   exit(0);
  }
}
}
{left:
for(x;x>=0;x--){
  clrscr();
  pa4:
  gotoxy(1,1);
 cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|                                                                     |\n";
 cout<<"|_____________________________________________________________________|\n";
      gotoxy(72,4);
  cout<<"score:"<<score*10;
  gotoxy(72,2);
  cout<<"level:"<<sps;
  gotoxy(xfood,yfood);
  if(score%2==0)
  cout<<food1;
  else
  cout<<food2;
  gotoxy(x,y);
  cout<<head;
  x1=x+1;y1=y;
  gotoxy(x1,y1);
  cout<<body;
  x2=x1+1;y2=y1;
  gotoxy(x2,y2);
  cout<<body;
  x3=x2+1;y3=y2;
  gotoxy(x3,y3);
  cout<<body;
  x4=x3+1;y4=y3;
  gotoxy(x4,y4);
  cout<<body;
  x5=x4+1;y5=y4;
  gotoxy(x5,y5);
  cout<<body;
  delay(speed);
  nosound();
  if((x==xfood)&&(y==yfood))
  {clrscr();
  score=score+1;
  sound(500);
  if(score==1){xfood=50;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==2){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==3){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==4){xfood=10;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==5){xfood=20;yfood=20;speed=speed-1;sps=sps+1;}
  if(score==6){xfood=5;yfood=16;speed=speed-1;sps=sps+1;}
  if(score==7){xfood=50;yfood=4;speed=speed-1;sps=sps+1;}
  if(score==8){xfood=50;yfood=10;speed=speed-1;sps=sps+1;}
  if(score==9){xfood=40;yfood=15;speed=speed-1;sps=sps+1;}
  if(score==10){xfood=45;yfood=18;speed=speed-1;sps=sps+1;}
  if(score==11){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==12){xfood=5;yfood=8;speed=speed-2;sps=sps+1;}
   if(score==13){xfood=50;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==14){xfood=40;yfood=15;speed=speed-2;sps=sps+1;}
  if(score==15){xfood=45;yfood=18;speed=speed-2;sps=sps+1;}
  if(score==16){xfood=10;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==17){xfood=20;yfood=20;speed=speed-2;sps=sps+1;}
  if(score==18){xfood=5;yfood=16;speed=speed-2;sps=sps+1;}
  if(score==19){xfood=50;yfood=4;speed=speed-2;sps=sps+1;}
  if(score==20){xfood=50;yfood=10;speed=speed-2;sps=sps+1;}
  if(score==21){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==12){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==23){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==24){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
   if(score==25){xfood=50;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==26){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==27){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==28){xfood=10;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==29){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==30){xfood=5;yfood=16;speed=speed-3;sps=sps+1;}
  if(score==31){xfood=50;yfood=4;speed=speed-3;sps=sps+1;}
  if(score==32){xfood=50;yfood=10;speed=speed-3;sps=sps+1;}
  if(score==33){xfood=40;yfood=15;speed=speed-3;sps=sps+1;}
  if(score==34){xfood=45;yfood=18;speed=speed-3;sps=sps+1;}
  if(score==35){xfood=20;yfood=20;speed=speed-3;sps=sps+1;}
  if(score==36){xfood=5;yfood=8;speed=speed-3;sps=sps+1;}
  }
  if(x==1)
  goto ending;
  if(kbhit())
  {
   com=getch();
   if(com=='H')
   goto up;
   else if(com=='P')
   goto down;
   else if(com=='K')
   goto left;
   else if(com=='p')
   {for(int i=0;;i++)
   {delay(50);
   if(kbhit())
   gotoxy(35,12);
   cout<<"PAUSED";
   goto pa4;
   }
   }
   else if(com=='q')
   exit(0);
  }
}
}

ending:
clrscr();
gotoxy(35,12);
cout<<"  you lose";
gotoxy(35,13);
cout<<"you ate "<<score<<" food";
gotoxy(26,14);
cout<<" you went till level "<<sps<<",not bad.";
gotoxy(33,15);
cout<<"your final score "<<score*sps;
delay(5000);
getch();
again2:
clrscr();
gotoxy(20,12);
cout<<"Do you want to try again? (y=yes,n=no) ";
cho=getch();
if(cho=='y')
{
x=35;y=12;
score=0;
goto again;}
if(cho=='n')
exit(0);
else
cout<<"\n\n                          error:wrong input try again.";
delay(1000);
goto again2;

}