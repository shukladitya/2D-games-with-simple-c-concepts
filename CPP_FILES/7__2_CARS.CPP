#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
void main()
{
 textcolor(RED);
 textbackground(GREEN);
 int x,c11=3.5,c12=4.25,c13=5.5,c21=21,c22=22,c23=23,l1x=70,l12x=70,r=1,rand,rand2,l2x=35,s=1,rand3,rand4/**/,l3x=70,rand5,rand6,l32x=70,t=1,u=1,l4x=70;
 char winds=92,com,gk=178,ak=257;
 for(x=72;;x--)
  {
   clrscr();
   gotoxy(1,1);
   if(x%2==0)
   cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
   if(x%2!=0)
   cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
   gotoxy(1,13);
   if(x%2==0)
   cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
   if(x%2!=0)
   cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
   gotoxy(1,25);
   if(x%2==0)
   cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
   if(x%2!=0)
   cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
   gotoxy(1,7.5);
   cout<<"-------------------------------------------------------------------------------";
   gotoxy(1,19);
   cout<<"-------------------------------------------------------------------------------";
   gotoxy(1,c11);
   cout<<"    /~~~~~~"<<winds;
   gotoxy(1,c12);
   cout<<"  I` ||  || `---,  ";
   gotoxy(1,c13);
   cout<<"  `- 0 -- 0 ----'";
   gotoxy(1,c21);
   cout<<"    /~~~~~~"<<winds;
   gotoxy(1,c22);
   cout<<"  I` ||  || `---,  ";
   gotoxy(1,c23);
   cout<<"  `- 0 -- 0 ----'";
    if(l1x==70)
    goto random1;
    again:
    if((rand==0)||(rand==2)||(rand==4)||(rand==6)||(rand==8))
     {gotoxy(l1x,3.5);
      cout<<ak<<ak<<ak;
      gotoxy(l1x,4.5);
      cout<<ak<<ak<<ak;
      gotoxy(l1x,5.5);
      cout<<ak<<ak<<ak;
     if(l1x==0)
      l1x=70;
      l1x--;}
    if((rand==1)||(rand==3)||(rand==5)||(rand==7)||(rand==9))
    {gotoxy(l1x,3.5);
     cout<<gk<<gk<<gk;
     gotoxy(l1x,4.5);
     cout<<gk<<gk<<gk;
     gotoxy(l1x,5.5);
     cout<<gk<<gk<<gk;
     if(l1x==0)
     l1x=70;
     l1x--;}



     if(r>=2)
     {
     if(l12x==70)
    goto random2;
    again2:
    if((rand2==0)||(rand2==2)||(rand2==4)||(rand2==6)||(rand2==8))
     {gotoxy(l12x,3.5);
      cout<<ak<<ak<<ak;
      gotoxy(l12x,4.5);
      cout<<ak<<ak<<ak;
      gotoxy(l12x,5.5);
      cout<<ak<<ak<<ak;
     if((l12x==0)&&(l1x<=35))
      l12x=70;
      l12x--;}
    if((rand2==1)||(rand2==3)||(rand2==5)||(rand2==7)||(rand2==9))
    {gotoxy(l12x,3.5);
     cout<<gk<<gk<<gk;
     gotoxy(l12x,4.5);
     cout<<gk<<gk<<gk;
     gotoxy(l12x,5.5);
     cout<<gk<<gk<<gk;
     if((l12x==0)&&(l1x<=35))
     l12x=70;
     l12x--;}
     }
 if(l1x==0)
 l1x=70;
 if(l12x==0)
 l12x=70;
 if(l1x==25)
 r++;
 if((l2x==70)||((l2x==35)&&(s==1)))
    goto random3;
    again3:
    if((rand3==0)||(rand3==2)||(rand3==4)||(rand3==6)||(rand3==8))
     {gotoxy(l2x,9.5);
      cout<<ak<<ak<<ak;
      gotoxy(l2x,10.5);
      cout<<ak<<ak<<ak;
      gotoxy(l2x,11.5);
      cout<<ak<<ak<<ak;
     if(l2x==0)
      l2x=70;
      l2x--;}
    if((rand3==1)||(rand3==3)||(rand3==5)||(rand3==7)||(rand3==9))
    {gotoxy(l2x,9.5);
     cout<<gk<<gk<<gk;
     gotoxy(l2x,10.5);
     cout<<gk<<gk<<gk;
     gotoxy(l2x,11.5);
     cout<<gk<<gk<<gk;
     if(l2x==0)
     l2x=70;
     l2x--;}
 if(l2x==0)
 l2x=70;
 if(l2x==35)
 s++;





///////////////////////////////////////////////////






 if(l3x==70)
    goto random4;
    again4:
    if((rand4==0)||(rand4==2)||(rand4==4)||(rand4==6)||(rand4==8))
     {gotoxy(l3x,15);
      cout<<ak<<ak<<ak;
      gotoxy(l3x,16);
      cout<<ak<<ak<<ak;
      gotoxy(l3x,17);
      cout<<ak<<ak<<ak;
     if(l3x==0)
      l3x=70;
      l3x--;}
    if((rand4==1)||(rand4==3)||(rand4==5)||(rand4==7)||(rand4==9))
    {gotoxy(l3x,15);
     cout<<gk<<gk<<gk;
     gotoxy(l3x,16);
     cout<<gk<<gk<<gk;
     gotoxy(l3x,17);
     cout<<gk<<gk<<gk;
     if(l3x==0)
     l3x=70;
     l3x--;}



     if(t>=2)
     {
     if(l32x==70)
    goto random5;
    again5:
    if((rand5==0)||(rand5==2)||(rand5==4)||(rand5==6)||(rand5==8))
     {gotoxy(l32x,15);
      cout<<ak<<ak<<ak;
      gotoxy(l32x,16);
      cout<<ak<<ak<<ak;
      gotoxy(l32x,17);
      cout<<ak<<ak<<ak;
     if((l32x==0)&&(l3x<=35))
      l32x=70;
      l32x--;}
    if((rand5==1)||(rand5==3)||(rand5==5)||(rand5==7)||(rand5==9))
    {gotoxy(l32x,15);
     cout<<gk<<gk<<gk;
     gotoxy(l12x,16);
     cout<<gk<<gk<<gk;
     gotoxy(l12x,17);
     cout<<gk<<gk<<gk;
     if((l32x==0)&&(l3x<=35))
     l32x=70;
     l32x--;}
     }
 if(l3x==0)
 l3x=70;
 if(l32x==0)
 l32x=70;
 if(l3x==35)
 t++;
 if((l4x==70)||((l4x==35)&&(u==1)))
    goto random6;
    again6:
    if((rand6==0)||(rand6==2)||(rand6==4)||(rand6==6)||(rand6==8))
     {gotoxy(l4x,21);
      cout<<ak<<ak<<ak;
      gotoxy(l4x,22);
      cout<<ak<<ak<<ak;
      gotoxy(l4x,23);
      cout<<ak<<ak<<ak;
     if(l4x==0)
      l4x=70;
      l4x--;}
    if((rand6==1)||(rand6==3)||(rand6==5)||(rand6==7)||(rand6==9))
    {gotoxy(l4x,21);
     cout<<gk<<gk<<gk;
     gotoxy(l4x,22);
     cout<<gk<<gk<<gk;
     gotoxy(l4x,23);
     cout<<gk<<gk<<gk;
     if(l4x==0)
     l4x=70;
     l4x--;}
 if(l4x==0)
 l4x=70;
 if(l4x==35)
 u++;

/////////////////////////////////////////////////////////////////////////

   if(kbhit())
    {
     com=getch();
     if(com=='q')
     exit(0);
     if(com=='H')
      {
       c21=15;
       c22=16;
       c23=17;
      }
     if(com=='P')
      {
       c21=21;
       c22=22;
       c23=23;
      }
     if(com=='w')
      {
       c11=3.5;
       c12=4.5;
       c13=5.5;
      }
     if(com=='s')
      {
       c11=9.5;
       c12=10.5;
       c13=11.5;
      }
    }
   delay(50);

 }

 {random1:
  for(int ra=0;;ra++)
  {rand=random(10);
   if(l1x==70)
   goto again;}
 }
 {random2:
  for(int ra2=0;;ra2++)
  {rand2=random(10);
   if(l12x==70)
   goto again2;}
 }
 {random3:
  for(int ra3=0;;ra3++)
  {rand3=random(10);
  if((l2x==70)||((l2x==35)&&(s==1)))
  goto again3;}
 }
////////////////////////////////////
 {random4:
  for(int ra4=0;;ra4++)
  {rand4=random(10);
   if(l3x==70)
   goto again4;}
 }
 {random5:
  for(int ra5=0;;ra5++)
  {rand5=random(10);
   if(l32x==70)
   goto again5;}
 }
 {random6:
  for(int ra6=0;;ra6++)
  {rand6=random(10);
  if((l4x==70)||((l4x==35)&&(u==1)))
  goto again6;}
 }




}
