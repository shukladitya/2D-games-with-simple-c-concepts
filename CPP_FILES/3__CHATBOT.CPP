#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
 clrscr();
 int choice,choice2;
 char a[50],b[100],c=0,username[20],password[20],loop=0;
 cout<<"   |~~~~~~~|                                 \n   "  ;
 cout<<"| |~~~  |                  WELCOME TO FASEBOOK      \n  "  ;
 cout<<" | |~~   |             \n   "  ;
 cout<<"| |     |             your computer now your friend                    \n   "  ;
 cout<<"|_______|                                 \n   "  ;
 gotoxy(22,12);
 cout<<"      Please log in to your profile.\n";
 cout<<"\n                    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
 cout<<"\n                    |USER NAME:                            |";
 cout<<"\n                    |                                      |";
 cout<<"\n                    |PASSWORD:                             |";
 cout<<"\n                    |______________________________________|";
 gotoxy(32,15);
 gets(username);
 gotoxy(31,17);
 gets(password);
 if((strcmpi(password,"Ilcic++")==0)&&(strcmpi(username,"aditya.shukla.0708@gmail.com")==0))
 again2:
 {clrscr();
 cout<<"   |~~~~~~~|                                 \n   "  ;
 cout<<"| |~~~  |                  WELCOME TO FASEBOOK      \n  "  ;
 cout<<" | |~~   |             \n   "  ;
 cout<<"| |     |             your computer now your friend                    \n   "  ;
 cout<<"|_______|                                 \n   "  ;
 delay(1000);
 gotoxy(23,14);
 cout<<"Loging in please wait";
 while(loop<6){delay(1000);
	       cout<<"  o";
	       loop++;
	      }
 clrscr();
 cout<<"   |~~~~~~~|                                 \n   "  ;
 cout<<"| |~~~  |                  WELCOME TO FASEBOOK      \n  "  ;
 cout<<" | |~~   |             \n   "  ;
 cout<<"| |     |             your computer now your friend                    \n   "  ;
 cout<<"|_______|                                 \n   "  ;
 delay(1000);
 gotoxy(23,14);
 cout<<"      YOU ARE GOOD TO GO..";
 delay(3000);
 clrscr();
 cout<<"   |~~~~~~~|                                 \n   "  ;
 cout<<"| |~~~  |                  WELCOME TO FASEBOOK      \n  "  ;
 cout<<" | |~~   |             \n   "  ;
 cout<<"| |     |             your computer now your friend                    \n   "  ;
 cout<<"|_______|                                 \n   "  ;
 gotoxy(23,14);
 cout<<"       IDENTIFYING THE USER\n\n";
 if((strcmpi(username,"aditya.shukla.0708@gmail.com")==0))
 delay(3000);
 gotoxy(24,16);
 cout<<"      welcome Aditya shukla";

 delay(2000);
 again3:
 clrscr();
 cout<<"   |~~~~~~~|                                 \n   "  ;
 cout<<"| |~~~  |                  WELCOME TO FASEBOOK      \n  "  ;
 cout<<" | |~~   |             \n   "  ;
 cout<<"| |     |             your computer now your friend                    \n   "  ;
 cout<<"|_______|                                 \n   "  ;
 delay(1000);
 gotoxy(23,14);
 cout<<"      SELECT YOUR OPTION..";
 delay(800);
 cout<<"\n    (1)Start chat.";
 delay(800);
 cout<<"\n\n    (2)Rules to chat.";
 delay(800);
 cout<<"\n\n    (3)exit.";
 delay(800);
 cout<<"\n\n    Your choice:";
 cin>>choice;
 if(choice==1)
 {clrscr();
 delay(1000);
 cout<<"\ncomputer:\nhi! lets talk something.\n\n";
 goto again;}
 else if(choice==3)
 exit(0);
 else if(choice==2)
 {clrscr();
 delay(1000);
 cout<<"\nTHERE ARE CERTAIN RULES WHICH YOU SHOULD FOLLOW BEFORE STARTING CHAT.\n\n\n";
 delay(2000);
 cout<<"1- Use very simple language.\n\n";
 delay(2000);
 cout<<"2- Don't use question marks, full stops or exclamtry marks eg. how? yo. hi!\n\n";
 delay(2000);
 cout<<"3- Don't start your sentences from capital letters eg. Namaste\n";
 delay(2000);
 cout<<"\n4- When you want to leave just type 'bye' or 'i want to leave' etc.";
 delay(2000);
 cout<<"\n\nThats it, Want to go back? press 1.";
 again4:
 cout<<"\nYour choice:";
 cin>>choice2;
 if(choice2==1)
 goto again3;
 else
 cout<<"  wrong button pressed";
 delay(1000);
 goto again4;
 }
 else
 cout<<"  wrong button pressed";
 delay(1000);
 goto again3;
 }
 else
 {gotoxy(61,17);
  cout<<"(wrong password)";
  gotoxy(67,16);
  cout<<"OR";
  gotoxy(61,15);
  cout<<"(wrong e-mail)";
  gotoxy(32,15);
  gets(username);
  gotoxy(31,17);
  gets(password);
  if((strcmpi(password,"demo")==0)&&(strcmpi(username,"demo@demo.com")==0))
  goto again2;
  else
  {gotoxy(61,17);
  cout<<"(wrong password)";
  gotoxy(67,16);
  cout<<"OR";
  gotoxy(61,15);
  cout<<"(still wrong mail)";
  gotoxy(32,15);
  gets(username);
  gotoxy(31,17);
  gets(password);
  if((strcmpi(password,"demo")==0)&&(strcmpi(username,"demo@demo.com")==0))
  goto again2;
   else
   {clrscr();
    delay(2000);
    gotoxy(22,12);
    cout<<"ARE YOU TRYING TO HACK ME ??";
    gotoxy(22,12);
    delay(3000);
    cout<<"DON'T YOU DARE TO DO IT AGAIN, BYE.";
    delay(3000);
    exit(0);
   }
  }
 }
 again:
 puts("you:");
 gets(a);
 if((strcmpi(a,"hi")==0)||(strcmpi(a,"hello")==0)||(strcmpi(a,"hey")==0)||(strcmpi(a,"namaste")==0)||(strcmpi(a,"mehow")==0)||(strcmpi(a,"salam")==0)||(strcmpi(a,"yo")==0))
 {puts("\ncomputer:\nhello, what is your name?\n");
  cout<<"you:\n";
  cin>>b;
  cout<<"\ncomputer:\nnice to meet you "<<b<<".\n\n";
  goto again;
 }

 else if ((strcmpi(a,"what is your name")==0)||(strcmpi(a,"who are you")==0)||(strcmpi(a,"what are you called")==0)||(strcmpi(a,"name please")==0)||(strcmpi(a,"apna naam bataao")==0)||(strcmpi(a,"tum ko kya bulayen")==0)||(strcmpi(a,"tmhara naam kya hai")==0))
 {puts("\ncomputer:\nI am chatbot\n");
 goto again;
 }
 else if ((strcmpi(a,"oh")==0)||(strcmpi(a,"ok")==0)||(strcmpi(a,"oooo")==0)||(strcmpi(a,"acchha")==0)||(strcmpi(a,"i understand")==0)||(strcmpi(a,"ooh")==0)||(strcmpi(a,"alright")==0))
 {puts("\ncomputer:\nYES\n");
 goto again;
 }
 else if ((strcmpi(a,"can you tell me more about your self")==0)||(strcmpi(a,"tell me about yourself")==0)||(strcmpi(a,"tell me more about your self")==0)||(strcmpi(a,"can you tell more about your self")==0)||(strcmpi(a,"tell me about your self")==0)||(strcmpi(a,"apne baare me batao")==0)||(strcmpi(a,"tell me more of you")==0))
 {
 puts("\ncomputer:\nI am chhiti speed 1 terahertz, memory 1 yotabite, hahahah just kidding,        i am a chatbot and my name is fasebook brother of facebook, it was              created by mark and i am created by Aditya.\n         he spend a lot of hour making me, phew, but i am thankful to him for bringing me.\n\n");
 goto again;
 }
 else if ((strcmpi(a,"who created you")==0)||(strcmpi(a,"who made you")==0)||(strcmpi(a,"who code you")==0)||(strcmpi(a,"who programmed you")==0)||(strcmpi(a,"who is your inventer")==0)||(strcmpi(a,"who build you")==0)||(strcmpi(a,"tumhe kis ne banaya hai")==0))
 {puts("\ncomputer:\nI am created by Aditya shukla, he coded me and gave me brain.\n\n");
  goto again;
  }
 else if ((strcmpi(a,"where are you right now")==0)||(strcmpi(a,"where are you")==0)||(strcmpi(a,"can you name the place where you are")==0)||(strcmpi(a,"tum iss samay kahan ho")==0)||(strcmpi(a,"?")==0)||(strcmpi(a,"can you tell the place where you are")==0)||(strcmpi(a,"tell me your place")==0))
 {puts("\ncomputer:\nI am in Bharat sir's lab, it is a computer lab in APS Faizabad.\n\n");
 goto again;
 }
 else if ((strcmpi(a,"whatsup")==0)||(strcmpi(a,"what are you doing")==0)||(strcmpi(a,"what are you upto")==0)||(strcmpi(a,"tum kya kar rahe ho")==0)||(strcmpi(a,"what are you doing wright now")==0)||(strcmpi(a,"whatsup dude")==0)||(strcmpi(a,"whatsup fasebook")==0))
 {puts("\ncomputer:\nNothing just sucking speed and memory from cpu to answer you.\n\n");
 goto again;
 }
 
 else if ((strcmpi(a,"will you do my work")==0)||(strcmpi(a,"can you do my work")==0)||(strcmpi(a,"can you do my homework")==0)||(strcmpi(a,"can you solve maths")==0)||(strcmpi(a,"will you do my homework")==0)||(strcmpi(a,"can you do home work")==0)||(strcmpi(a,"will you do my work")==0))
 {puts("\ncomputer:\nNO i can't.\n\n");
 goto again;
 }
 else if ((strcmpi(a,"how old are you")==0)||(strcmpi(a,"when were you born")==0)||(strcmpi(a,"what is your age")==0)||(strcmpi(a,"when were you created")==0)||(strcmpi(a,"when you came")==0)||(strcmpi(a,"how many days you have passed")==0)||(strcmpi(a,"tell your age")==0))
 {puts("\ncomputer:\nI was created in the first week of Jan 2017 AD.\n\n");
 goto again;
 }
 else if ((strcmpi(a,"exit")==0)||(strcmpi(a,"leave")==0)||(strcmpi(a,"bye")==0)||(strcmpi(a,"i want to leave")==0)||(strcmpi(a,"let me go")==0)||(strcmpi(a,"bye bye")==0)||(strcmpi(a,"ta ta")==0))
 {puts("\ncomputer:\nOk as your wish come back soon.");
 delay(1000);
 goto again3;}
 else if ((strcmpi(a,"")==0))
 {puts("\ncomputer:\nspeak something, i mean type some thing.\n");
 goto again;
 }
 else {cout<<"\ncomputer:\nthinking,please wait";
 while(c<=30){cout<<".";delay(500);c++;
 }clrscr();
 cout<<"\ncomputer:\nSorry, I didn't get any thig like that in my logic dictionary, try again.\n\n";
 goto again;
 }
 getch();


}