#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{
clrscr();
textbackground(CYAN);
textcolor(BLUE);
int x=1,y=12,xw=7,yw=12,xr=1,yr=14,xc=72,yc=1,xc2=72,yc2=2,xc3=72,yc3=3,xc4=72,yc4=4,xc5=72,yc5=5,xb11=72,yb11=17,xb12=72,yb12=18,xb13=72,yb13=19,xb14=72,yb14=20,xb15=72,yb15=21,xb16=72,yb16=22,xb17=72,yb17=23,xb18=72,yb18=24,xb19=72,yb19=25,xb21=72,yb21=15,xb22=72,yb22=16,xb23=72,yb23=17,xb24=72,yb24=18,xb25=72,yb25=19,xb26=72,yb26=20,xb27=72,yb27=21,xb28=72,yb28=22,xb29=72,yb29=23;
char com;
for(int i=0;;i++)
{
clrscr();
gotoxy(x,y);
cout<<"                            \n";
cout<<"                []          \n";
cout<<"           /~~~~~~~~~~D     \n";
cout<<"IIIIIIIIIII      I~I   ~~>  \n";
cout<<"          I_____________/   \n";
cout<<"              I     I       \n";
cout<<"            ~~~~~~~~~~~     \n";
sound(100);
if(i%2==0)
{gotoxy(xw,yw);
cout<<"I-------------------I";
sound(500);
gotoxy(xr,yr);
cout<<"X";
}
else if(i%2!=0)
{
gotoxy(xw,yw);
cout<<"I | | | | | | | | | I";
gotoxy(xr,yr);
cout<<"-";
     if(kbhit())
     {
       com=getch();
       if(com=='H')
	{ y--;
	  yw--;
	  yr--;}
       if(com=='P')
	{ y++;
	  yw++;
	  yr++;}
       if(com=='q')
	{nosound();
	 exit(0);}
     }
gotoxy(xc,yc);
cout<<"  (((()))))                  .                            \n";
gotoxy(xc2,yc2);
cout<<" ((())(((())))                                      .     \n";
gotoxy(xc3,yc3);
cout<<"(((())))())))))         .                  ((((()      .  \n";
gotoxy(xc4,yc4);
cout<<" ((((())))))))                    .      ((()))))))       \n";
gotoxy(xc5,yc5);
cout<<"  ~(((()))))               .               ())))))   .    \n";
xc--;
xc2--;
xc3--;
xc4--;
xc5--;
if(xc==0)
    {xc=72;
    xc2=72;
    xc3=72;
    xc4=72;
    xc5=72;
    }



gotoxy(xb11,yb11);
cout<<"I~==~~~==~~I";
gotoxy(xb12,yb12);
cout<<"I ||   ||  I";
gotoxy(xb13,yb13);
cout<<"I          I";
gotoxy(xb14,yb14);
cout<<"I ||   ||  I";
gotoxy(xb15,yb15);
cout<<"I          I";
gotoxy(xb16,yb16);
cout<<"I ||   ||  I";
gotoxy(xb17,yb17);
cout<<"I          I";
gotoxy(xb18,yb18);
cout<<"I ||   ||  I";
gotoxy(xb19,yb19);
cout<<"I          I";

xb11--;xb12--;xb13--;xb14--;xb15--;xb16--;xb17--;xb18--;xb19--;

    if(xb21==0)
    {xb11=72;xb12=72;xb13=72;xb14=72;xb15=72;xb16=72;xb17=72;xb18=72;xb19=72;
    }
    if((x+21==xb11)&&(y+6==yb11)||(x+21==xb11)&&(y+5==yb11)||(x+23==xb11)&&(y+4==yb11)||(x+24==xb11)&&(y+3==yb11)||(x+24==xb11)&&(y+2==yb11)||(x+24==xb11)&&(y+1==yb11)||(x+24==xb11)&&(y==yb11))
    exit(0);
if(xb11<=59)
{gotoxy(xb21,yb21);
cout<<"I~==~~~==~~I";
gotoxy(xb22,yb22);
cout<<"I||||||||||I";
gotoxy(xb23,yb23);
cout<<"I          I";
gotoxy(xb24,yb24);
cout<<"I||||||||||I";
gotoxy(xb25,yb25);
cout<<"I          I";
gotoxy(xb26,yb26);
cout<<"I||||||||||I";
gotoxy(xb27,yb27);
cout<<"I          I";
gotoxy(xb28,yb28);
cout<<"I||||||||||I";
gotoxy(xb29,yb29);
cout<<"I          I";

xb21--;xb22--;xb23--;xb24--;xb25--;xb26--;xb27--;xb28--;xb29--;

    if(xb21==0)
    {xb21=72;xb22=72;xb23=72;xb24=72;xb25=72;xb26=72;xb27=72;xb28=72;xb29=72;
    }
    if((x+21==xb21)&&(y+6==yb21)||(x+21==xb21)&&(y+5==yb21)||(x+23==xb21)&&(y+4==yb21)||(x+24==xb21)&&(y+3==yb21)||(x+24==xb21)&&(y+2==yb21)||(x+24==xb21)&&(y+1==yb21)||(x+24==xb21)&&(y==yb21))
    exit(0);
}



    if(y==18)
    {exit(0);}
   }
  delay(25);
 }
}