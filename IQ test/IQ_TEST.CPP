#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <graphics.h>
#include "display.h"
#include "help.h"
#include "write.h"
#include "choosing.h"
#include "homepage.h"

int main()
     {

     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice,ch;
     char playername[20];
     time_t initialtime,finaltime;

     homepager();
     mainhome:

      printf("\n\t\t\t");
      textcolor(14);
      cprintf("WELCOME TO I.Q. TEST PROGRAM") ;
      printf("\n\t\t\t");
      textcolor(11);
      cprintf("------------------------------");
      printf("\n\n\t\t\t");
     textcolor(10);
     cprintf("Enter 'S' to start game");
     printf("\n\n\t\t\t");
     textcolor(11);
     cprintf("Enter 'V' to view high score");
     printf("\n\n\t\t\t");
     textcolor(14);
     cprintf("Enter 'H' for help");
     printf("\n\n\t\t\t");
     textcolor(13);
     cprintf("Enter 'Q' to quit");
     printf("\n\n\t\t\t");
     textcolor(11);
     cprintf("-------------------------------");
     choice=toupper(getch());
     if (choice=='V')
{
displayscore();
goto mainhome;
}
     else if (choice=='Q')
exit(1);
     else if (choice=='H')
{
helping();
//getch();
goto mainhome;
}
     else if(choice=='S'){
     printf("\n\n\n\t\t\t");
     textcolor(11);
     cprintf("Enter your name...");
     printf("\n\t\t\t");
     textcolor(10);
     cprintf("(only one word)");
     printf("\n\n\t\t\t");
     gets(playername);

     jao:

     choosing();
     ch=toupper(getch());
     //...................Question for option A.................//

     if(ch=='A')
     {

     home:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto start;

     switch(r)
{
//////////////EASY  QUESTION///////////////////////

case 1:

printf("\n\nWhat is the national tree of Bangladesh?\n\n");
textcolor(10);
cprintf("A.Pine apple    B.Jack fruit");
printf("\n\n");
textcolor(14);
cprintf("C.Mango    D.Orange");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
    textcolor(6);
    cprintf("wrong!!!");
    textcolor(13);
    cprintf("the correct answer is C.Mango");
    printf("\n\n");
break;}

case 2:
printf("\n\nWhat is the meaning of 'SIDR'?\n\n");
textcolor(10);
cprintf("A.Hand    B.Eye");
printf("\n\n");
textcolor(14);
cprintf("C.Forehead    D.Nose");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
    textcolor(6);
    cprintf("wrong!!!");
    textcolor(13);
    cprintf("the correct answer is B.Eye");
    printf("\n\n");
break;}

case 3:
printf("\n\nWho was got Nobel prize in 2009 for peace?\n\n");
textcolor(10);
cprintf("A.Yunus    B.Barak");
printf("\n\n");
textcolor(14);
cprintf("C.Gandhi    D.Leu Geaubo");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is B.Barak");
printf("\n\n");
break;}

case 4:
printf("\n\nWho did the first century in the world cup?\n\n");
textcolor(10);
cprintf("A.Mathu heyden    B.Jhon Devision");
	printf("\n\n");
textcolor(14);
cprintf("C.Ricky Ponting    D.Shewag");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is A.Mathu heyden");
printf("\n\n");
break;}

case 5:
    printf("\n\nWhat is the capital of Canada?\n\n");
textcolor(10);
cprintf("A.Granada    B.Ottowa");
	   printf("\n\n");
textcolor(14);
cprintf("C.Panama City    D.Maxico city");
countq++;
if(toupper(getch())=='B')
{
printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is B.Ottowa");
printf("\n\n");
break;}

case 6:
printf("\n\nWhich one is called Emerald  Island?\n\n");
textcolor(10);
cprintf("A.Italy    B.Norway");
	printf("\n\n");
textcolor(14);
cprintf("C.Ireland    D.Poland");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is C.Ireland");
printf("\n\n");
break;}

case 7:
printf("\n\nWhat is the most important element for the of color of human body?\n\n");
textcolor(10);
cprintf("A.Melanin    B.Thiamine");
	printf("\n\n");
textcolor(14);
cprintf("C.Carotene    D.Haemoglobin");
countq++;
if(toupper(getch())=='A')
{
printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is A.Melanin");
printf("\n\n");
break;}

case 8:
    printf("\n\nWhat is the national symbol of Germany?\n\n");
textcolor(10);
cprintf("A.Lion    B.Eagle");
    printf("\n\n");
textcolor(14);
cprintf("C.Lotus    D.Pea cock");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is B.Eagle");
printf("\n\n");
break;}

case 9:
printf("\n\nWhat is the result of permutation of Kobi?\n\n");
textcolor(10);
cprintf("A.4!    B.3!");
printf("\n\n");
textcolor(14);
cprintf("C.2!    D.1!");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is A.4!");
printf("\n\n");
break;}

case 10:

printf("\n\nWho is the first lady president in the world?\n\n");
textcolor(10);
cprintf("A.Queen Isabella Peron    B.Srimavo Bondopaddhay");
printf("\n\n");
textcolor(14);
cprintf("C.Khaleda zia    D.Indira Gandhi");
countq++;
if(toupper(getch())=='A')
{
printf("\n\n");
textcolor(11);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(6);
cprintf("wrong!!!");
textcolor(13);
cprintf("the correct answer is A.Queen Isabella Peron");
printf("\n\n");
break;}

}
i++;
if (i<=5) goto start;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Easy Question,WORK HARD");}
}
     //...................Question for option B.................//
	  if(ch=='B')
     {
     ho:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     st:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto st;

     switch(r)
{
////////////////Current world////////////////////////////////

case 1:
printf("\n\nWhen will NATO leave Afghanistan?");
printf("\n\n");
textcolor(6);
cprintf("A.2014    B.2015");
printf("\n\n");
textcolor(3);
cprintf("C.2016    D.2017");
countq++;
if(toupper(getch())=='A')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.2014");
printf("\n\n");
break;}


case 2:

printf("\n\nWhat is the name of metro train which has no driver?");
printf("\n\n");
textcolor(6);
cprintf("A.Metro    B.The Dubai metro");
printf("\n\n");
textcolor(3);
cprintf("C.The train    D.The comet");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.The Dubai metro");
printf("\n\n");
break;}


case 3:

printf("\n\nWhere is the present name of Saur’s tower?");
printf("\n\n");
textcolor(6);
cprintf("A.Cameron  tower    B.Outtjon Tower");
printf("\n\n");
textcolor(3);
cprintf("C.Wilson tower    D.Tokyo tower");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is C.Wilson tower");
printf("\n\n");
break;}

case 4:

printf("\n\nWho is the founder of Sydney Opera office?");
printf("\n\n");
textcolor(6);
cprintf("A.Jhorn Outjhon    B.Plensa");
printf("\n\n");
textcolor(3);
cprintf("C.Churchill    D.Jim curter");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Jhorn Outjhon");
printf("\n\n");
break;}

case 5:

printf("\n\nWhat is the full meaning of ‘DAP’?");
    printf("\n\n");
textcolor(6);
cprintf("A.Detail Area Plan    B.Detailed Area Plan");
    printf("\n\n");
textcolor(3);
cprintf("C.Detailed Accommodate Plane    D.None");
countq++;
if(toupper(getch())=='B')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Detailed Area Plan");
printf("\n\n");
break;}


case 6:

printf("\n\nWho is the chief of DETECTIVE ORGANIGASION of America?");
        printf("\n\n");
textcolor(6);
cprintf("A.James Cluper    B.James Cruise");
textcolor(3);
printf("\n\n");
cprintf("C.James Libert    D.James fog");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.James Cluper");
printf("\n\n");
break;}

case 7:

printf("\n\nWhat is the no smoking city of EGYPT?");
printf("\n\n");
textcolor(6);
cprintf("A.Zandriya    B.Aleksandra");
printf("\n\n");
textcolor(3);
cprintf("C.Cairo    D.None");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Aleksandra");
printf("\n\n");
break;}

case 8:

printf("\n\nWho did the first hatred in 2010 world football cup?");
printf("\n\n");
textcolor(6);
cprintf("A.Mandala    B.Messy");
printf("\n\n");
textcolor(3);
cprintf("C.Ronaldo    D.Higuyaan");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Higuyaan");
printf("\n\n");
break;}

case 9:

printf("\n\nWho is the winner of world chess game for the four times?");
printf("\n\n");
textcolor(6);
cprintf("A.Bishwanath    B.Morshed");
printf("\n\n");
textcolor(3);
cprintf("C.Casperv    D.Fidey");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Bishwanath");
printf("\n\n");
break;}


case 10:

printf("\n\nWhere is the SAARC university situated?");
printf("\n\n");
textcolor(6);
cprintf("A.Bangladesh    B.India");
printf("\n\n");
textcolor(3);
cprintf("C.Bhutan    D.Pakistan");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(4);
cprintf("the correct answer is B.India");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto st;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Current world,WORK HARD");}
}
     //...................Question for option C.................//

    if(ch=='C')
     {
     hom:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     sta:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto sta;

     switch(r)
{
/////////////////Award and Nobel prize///////////////////////

case 1:

printf("\n\nThe nobel prize for economics was introduced in?");
printf("\n\n");
textcolor(6);
cprintf("A.1969    B.1970");
	printf("\n\n");
textcolor(3);
cprintf("C.1968    D.1972");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.1969");
printf("\n\n");
break;}

case 2:

printf("\n\nAward of Nobel prize in literature was started from the year?");
printf("\n\n");
textcolor(6);
cprintf("A.1901    B.1911");
printf("\n\n");
textcolor(3);
cprintf("C.1913    D.1917");
countq++;
if(toupper(getch())=='A')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.1901");
printf("\n\n");
break;}

case 3:

printf("\n\nUS president Barack Obama won the Nobel prize for?");
printf("\n\n");
textcolor(6);
cprintf("A.International Affairs    B.leadership");
printf("\n\n");
textcolor(3);
cprintf("C.Peace    D.Economics");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Peace");
printf("\n\n");
break;}

case 4:

printf("\n\nwhich statesmen received Nobel prize for literary work?");
printf("\n\n");
textcolor(6);
cprintf("A.Statin    B.Churchill");
printf("\n\n");
textcolor(3);
cprintf("C.Nixon    D.Roosevelt");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Churchill");
printf("\n\n");
break;}

case 5:

printf("\n\nThe 1st woman to win nobel prize in economics is?");
    printf("\n\n");
textcolor(6);
cprintf("A.Herta mueller    B.Elinor Ostrom");
    printf("\n\n");
textcolor(3);
cprintf("C.Dorris lessing    D.Naine Gordimer");
countq++;
if(toupper(getch())=='B')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Elinor Ostrom");
 printf("\n\n");
break;}

case 6:

printf("\n\nShirin Ebadi is a....?");
printf("\n\n");
textcolor(6);
cprintf("A.Famous Scientist    B.Nobel Laureate");
printf("\n\n");
textcolor(3);
cprintf("C.famous actress    D.famous writter");
countq++;
if(toupper(getch())=='B')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Nobel laureate");
printf("\n\n");
break;}

case 7:

printf("\n\nwho is the first muslim women to win the Nobel peace prize?");
printf("\n\n");
textcolor(6);
cprintf("A.Benazir Bhutto    B.Monika ali");
printf("\n\n");
textcolor(3);
cprintf("C.Shirin Ebadi    D.Mother Teresa");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Shirin Ebadi");
printf("\n\n");
break;}

case 8:

printf("\n\nBooker prize is a...........?");
    printf("\n\n");
textcolor(6);
cprintf("A.Peace award    B.Literary award");
    printf("\n\n");
textcolor(3);
cprintf("C.Award for outstanding struggle for human rights    D.population award");
countq++;
if(toupper(getch())=='B')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Literary award");
printf("\n\n");
break;}

case 9:

printf("\n\nHome country of Alfred Nobel is........?");
    printf("\n\n");
textcolor(6);
cprintf("A.France    B.USA");
    printf("\n\n");
textcolor(3);
cprintf("C.Sweden    D.France");
countq++;
if(toupper(getch())=='C')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
    textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Sweden");
break;}

case 10:

printf("\n\nShirin Ebadi, who won the nobel peace prize in 2003,is from...........?");
printf("\n\n");
textcolor(6);
cprintf("A.Iraq    B.Iran");
printf("\n\n");
textcolor(3);
cprintf("C.Libya    D.Egypt");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
    textcolor(4);
    cprintf("wrong!!!");
    textcolor(1);
    cprintf("the correct answer is B.Iran\n\n");
break;}


}
i++;
if (i<=5) goto sta;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Award & nobel,WORK HARD");}
}

    //...........Question for option D............................//

	  if(ch=='D')
     {
     h:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     star:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto star;

     switch(r)
{
////////////////////geography////////////////////////////
case 1:
printf("\n\nwhich of those is not a planet in the Solar system?");
printf("\n\n");
textcolor(6);
cprintf("A.Mars    B.Venus");
printf("\n\n");
textcolor(3);
cprintf("C.Neptune    D.Pluto");
countq++;
if(toupper(getch())=='D')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Pluto");
printf("\n\n");
break;}


case 2:

printf("\n\nwhich planet is the nearest to sun?");
printf("\n\n");
textcolor(6);
cprintf("A.Mercury    B.venus");
printf("\n\n");
textcolor(3);
cprintf("C.jupiter    D.Mars");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Mercury");
printf("\n\n");
break;}


case 3:

printf("\n\nApproximate distance of the moon from the earth?");
printf("\n\n");
textcolor(6);
cprintf("A.257*10^5 miles    B.250*10^3 miles");
printf("\n\n");
textcolor(3);
cprintf("C.930*10^5 miles    D.67*10^5 miles");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is B.250*10^3 miles");
printf("\n\n");
break;}

case 4:

printf("\n\nThe distance between the earth and the moon is about?");
printf("\n\n");
textcolor(6);
cprintf("A.2,39,000 miles    B.2,59,000 miles");
printf("\n\n");
textcolor(3);
cprintf("C.2,49,000 miles    D.2,69,000 miles");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.2,39,000 miles");
printf("\n\n");
break;}

case 5:

printf("\n\n'Sputnik' is the name of.....?");
    printf("\n\n");
textcolor(6);
cprintf("A.A commet    B.An American space object");
    printf("\n\n");
textcolor(3);
cprintf("C.the first space satellite    D.none of the above");
countq++;
if(toupper(getch())=='C')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.the first space satellite");
printf("\n\n");
break;}


case 6:

printf("\n\nIn which year man landed on the moon?");
        printf("\n\n");
textcolor(6);
cprintf("A.20th June,1969    B.25th July,1968");
textcolor(3);
printf("\n\n");
cprintf("C.20th July,1969    D.20th August,1969");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.20th July,1969");
printf("\n\n");
break;}

case 7:

printf("\n\nThe 'Hubble Telescope' is.....");
printf("\n\n");
textcolor(6);
cprintf("A.The name of a book    B.An observatory in UK");
printf("\n\n");
textcolor(3);
cprintf("C.Placed in orbit round the earth for cosmic observation");
printf("\n");
textcolor(3);
cprintf("D.Used in space crafts");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Placed in orbit round the earth for cosmic observation");
printf("\n\n");
break;}

case 8:

printf("\n\nAvarage Sp.gr. of the earth....");
printf("\n\n");
textcolor(6);
cprintf("A.3.517    B.4.517");
printf("\n\n");
textcolor(3);
cprintf("C.5.517    D.9.517");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.5.517");
printf("\n\n");
break;}

case 9:


printf("\n\nWhich is the longest day of the year?");
printf("\n\n");
textcolor(6);
cprintf("A.6th June    B.115th June");
printf("\n\n");
textcolor(3);
cprintf("C.26th June    D.None of these");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.None of these");
printf("\n\n");
break;}


case 10:

printf("\n\nThe south pole is located in the...");
printf("\n\n");
textcolor(6);
cprintf("A.Arctric    B.Antarctic");
printf("\n\n");
textcolor(3);
cprintf("C.Antipodes    D.Occide");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Antarctic");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto star;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Geography,WORK HARD");}
}

    //..........Question for option E.............................//

	  if(ch=='E')
     {
     mh:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     s:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto s;

     switch(r)
{
//////////////////////History///////////////////////////

case 1:

printf("\n\nJulius caesar was the ruler of Rume about?");
printf("\n\n");
textcolor(6);
cprintf("A.1000 years ago    B.1500");
printf("\n\n");
textcolor(3);
cprintf("C.2000    D.3000");
countq++;
if(toupper(getch())=='C')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.2000");
printf("\n\n");
break;}


case 2:


printf("\n\nAcademy was establish by...........?");
printf("\n\n");
textcolor(6);
cprintf("A.Socrates    B.Ploto");
printf("\n\n");
textcolor(3);
cprintf("C.Aristotle    D.Rousseau");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Ploto");
printf("\n\n");
break;}


case 3:

printf("\n\nPloto is the citizen of.......?");
printf("\n\n");
textcolor(6);
cprintf("A.France    B.Greece");
printf("\n\n");
textcolor(3);
cprintf("C.USA    D.Germany");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is B.Greece");
printf("\n\n");
break;}

case 4:

printf("\n\nwhich of the following is the oldest civilization of the world?");
printf("\n\n");
textcolor(6);
cprintf("A.Greece    B.Mesopotamia");
printf("\n\n");
textcolor(3);
cprintf("C.Rome    D.India");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Mesopotamia");
printf("\n\n");
break;}

case 5:


printf("\n\nthe earleast civilization was flourished in?");
printf("\n\n");
textcolor(6);
cprintf("A.Babylon    B.sumeria");
    printf("\n\n");
textcolor(3);
cprintf("C.Egypt    D.China");
countq++;
if(toupper(getch())=='C')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Egypt");
printf("\n\n");
break;}


case 6:


printf("\n\nFirst atom bomb was dropped on ?");
printf("\n\n");
textcolor(6);
cprintf("A.Germany    B.japan");
textcolor(3);
printf("\n\n");
cprintf("C.Australia    D.Italy");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.japan");
printf("\n\n");
break;}

case 7:

printf("\n\nthe historical'D-day'is related with...?");
printf("\n\n");
textcolor(6);
cprintf("A.Gulf war    B.First world war");
printf("\n\n");
textcolor(3);
cprintf("C.second world war    D.Iraq war");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.second world war");
printf("\n\n");
break;}

case 8:

printf("\n\nwho was the last mughal Emperor?");
printf("\n\n");
textcolor(6);
cprintf("A.Humayan    B.Bahadur Shah");
printf("\n\n");
textcolor(3);
cprintf("C.Shahijahan    D.Akbar");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Bahadur Shah");
printf("\n\n");
break;}

case 9:


printf("\n\nwhich of the following was not a Mughal Emperor?");
printf("\n\n");
textcolor(6);
cprintf("A.Akbar    B.Humayun");
printf("\n\n");
textcolor(3);
cprintf("C.Isha khan    D.Babar");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Isha khan");
printf("\n\n");
break;}


case 10:

printf("\n\nwho was the commander in chief of liberation war of bangladesh?");
printf("\n\n");
textcolor(6);
cprintf("A.Major    B.Tajuddin ahmed");
printf("\n\n");
textcolor(3);
cprintf("C.SK.Mujib    D.M A G Osmani");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.M A G Osmani");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto s;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN History,WORK HARD");}
}

    //...........Question for option F............................//

	  if(ch=='F')
     {
     mhr:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     sm:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto sm;

     switch(r)
{
////////////////////Bangladesh////////////////////////////

case 1:

printf("\n\nWho is the sculpture of ‘Shabash Bangladesh’?");
printf("\n\n");
textcolor(6);
cprintf("A.Hamiduzzaman    B.Nitun kundu");
printf("\n\n");
textcolor(3);
cprintf("C.Mrinal Haque    D.Shamim Shikhder");
countq++;
if(toupper(getch())=='B')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Nitun kundu");
printf("\n\n");
break;}


case 2:


printf("\n\nWhen did International Mother Language Day get acknowledgement?");
printf("\n\n");
textcolor(6);
cprintf("A.1998    B.1999");
printf("\n\n");
textcolor(3);
cprintf("C.2000    D.2001");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.1999");
printf("\n\n");
break;}


case 3:

printf("\n\nWhat is the first district of Bangladesh?");
printf("\n\n");
textcolor(6);
cprintf("A.Dhaka    B.Sylhet");
printf("\n\n");
textcolor(3);
cprintf("C.Chittagong    D.Rajshahi");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is C.Chittagong");
printf("\n\n");
break;}

case 4:

printf("\n\nWho is the establisher of ‘East Bengal Regiment’?");
printf("\n\n");
textcolor(6);
cprintf("A. B.N.S Osman    B.Major Goni");
printf("\n\n");
textcolor(3);
cprintf("C.Khalid Bin Walid    D.Abu Bokor");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Major Goni");
printf("\n\n");
break;}

case 5:


printf("\n\nWhen was Bangla Academy established?");
printf("\n\n");
textcolor(6);
cprintf("A.1955    B.1965");
    printf("\n\n");
textcolor(3);
cprintf("C.1952    D.1962");
countq++;
if(toupper(getch())=='A')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.1955");
printf("\n\n");
break;}


case 6:


printf("\n\nHow many public university stay in Bangladesh?");
printf("\n\n");
textcolor(6);
cprintf("A.14    B.24");
textcolor(3);
printf("\n\n");
cprintf("C.34    D.50");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.34");
printf("\n\n");
break;}

case 7:

printf("\n\nHow many parts were created in Bangladesh at the liberation war?");
printf("\n\n");
textcolor(6);
cprintf("A.4    B.9");
printf("\n\n");
textcolor(3);
cprintf("C.11    D.14");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.11");
printf("\n\n");
break;}

case 8:

printf("\n\nWho is the designer of Bangladesh’s map?");
printf("\n\n");
textcolor(6);
cprintf("A.Kamrul Hasan    B.Narayon Das");
printf("\n\n");
textcolor(3);
cprintf("C.Grinish Chandra    D.Major Games Ranel");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Major Games Ranel");
printf("\n\n");
break;}

case 9:


printf("\n\nwhich rock is called ‘Darjeeling of Bengal’?");
printf("\n\n");
textcolor(6);
cprintf("A.Tajing dong    B.Chimbuk rock");
printf("\n\n");
textcolor(3);
cprintf("C.Alutila  rock    D.Kulaura rock");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Chimbuk rock");
printf("\n\n");
break;}


case 10:

printf("\n\nZillur Rahman is the______th number president  of Bangladesh.");
printf("\n\n");
textcolor(6);
cprintf("A.19    B.18");
printf("\n\n");
textcolor(3);
cprintf("C.20    D.17");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.19");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto sm;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Bangladesh,WORK HARD");}
}

        //..............Question for option G.........................//

	  if(ch=='G')
     {
     mn:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     mo:
     srand ( time(NULL) );
     r=rand()%9+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto mo;

     switch(r)
{
////////////////International////////////////////////////////

case 1:
printf("\n\n\nWho was the first US President?");
printf("\n\n");
textcolor(6);
cprintf("A.Richard Nikson    B.Abraham Linkon");
printf("\n\n");
textcolor(3);
cprintf("C.John F. Kennedy    D.George Washington");
countq++;
if(toupper(getch())=='D')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.George Washington");
printf("\n\n");
break;}


case 2:


printf("\n\n\nWhat is the capital of Denmark?");
printf("\n\n");
textcolor(6);
cprintf("A.Copenhagen    B.Helsinki");
printf("\n\n");
textcolor(3);
cprintf("C.Rome    D.Madrid");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Copenhagen");
printf("\n\n");
break;}


case 3:

printf("\n\n\nWhich country is Maria Sarapova from?");
printf("\n\n");
textcolor(6);
cprintf("A.Russia    B.Switzerland");
printf("\n\n");
textcolor(3);
cprintf("C.Argentina    D.Spain");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is A.Russia");
printf("\n\n");
break;}

case 4:

printf("\n\n\nWhat is the smallest district of Nepal?");
printf("\n\n");
textcolor(6);
cprintf("A.Lalitpur    B.Karnali");
printf("\n\n");
textcolor(3);
cprintf("C.Bhaktapur    D.Gulmi");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Bhaktapur");
printf("\n\n");
break;}

case 5:


printf("\n\n\nWhat is the headquarter of Western Development Region?");
printf("\n\n");
textcolor(6);
cprintf("A.Dhankuta    B.Kathmandu");
    printf("\n\n");
textcolor(3);
cprintf("C.Dhangadhi    D.Pokhara");
countq++;
if(toupper(getch())=='D')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Pokhara");
printf("\n\n");
break;}


case 6:


printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
printf("\n\n");
textcolor(6);
cprintf("A.Dharan    B.Kathmandu");
textcolor(3);
printf("\n\n");
cprintf("C.Pokhara    D.Butwal");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Pokhara");
printf("\n\n");
break;}

case 7:

printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
printf("\n\n");
textcolor(6);
cprintf("A.Rome    B.Vactican City");
printf("\n\n");
textcolor(3);
cprintf("C.Madrid    D.Berlin");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Rome");
printf("\n\n");
break;}

case 8:

printf("\n\n\nName the country where there no mosquito is found?");
printf("\n\n");
textcolor(6);
cprintf("A.Germany    B.Spain");
printf("\n\n");
textcolor(3);
cprintf("C.Japan    D.France");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.France");
printf("\n\n");
break;}

case 9:


printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
printf("\n\n");
textcolor(6);
cprintf("A.1st    B.2nd");
printf("\n\n");
textcolor(3);
cprintf("C.3rd    D.4th");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.3rd");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto mo;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN International,WORK HARD");}
}

        //..............Question for option H.........................//

	  if(ch=='H')
     {
     swampa:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     sumi:
     srand ( time(NULL) );
     r=rand()%13+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto sumi;

     switch(r)
{
////////////////////sports////////////////////////////

case 1:

printf("\n\nSAF Games are held every....?");
printf("\n\n");
textcolor(6);
cprintf("A.4 years    B.2 years");
printf("\n\n");
textcolor(3);
cprintf("C.1 year    D.5 years");
countq++;
if(toupper(getch())=='B')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is  B.2 years");
printf("\n\n");
break;}


case 2:


printf("\n\n2012 summer Olympic game held in....?");
printf("\n\n");
textcolor(6);
cprintf("A.new york    B.london");
printf("\n\n");
textcolor(3);
cprintf("C.paris    D.madrid");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.london");
printf("\n\n");
break;}


case 3:

printf("\n\nEden Garden is a?");
printf("\n\n");
textcolor(6);
cprintf("A.park    B.resort");
printf("\n\n");
textcolor(3);
cprintf("C.cricket stadium    D.none of the above");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is C.cricket stadium");
printf("\n\n");
break;}

case 4:

printf("\n\nIn what sportsdo players take both long and short corners?");
printf("\n\n");
textcolor(6);
cprintf("A.Hockey    B.soccer");
printf("\n\n");
textcolor(3);
cprintf("C.snooker    D.handball");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Hockey");
printf("\n\n");
break;}

case 5:


printf("\n\nfree style, brest storkes,crawl those word related to which game...?");
printf("\n\n");
textcolor(6);
cprintf("A.Hockey    B.swimming");
    printf("\n\n");
textcolor(3);
cprintf("C.soccer    D.cricket");
countq++;
if(toupper(getch())=='B')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.swimming");
printf("\n\n");
break;}


case 6:


printf("\n\n'thomas Cup'is related to...?");
printf("\n\n");
textcolor(6);
cprintf("A.Badminton    B.Horserace");
textcolor(3);
printf("\n\n");
cprintf("C.Tennis    D.Golf");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Badminton");
printf("\n\n");
break;}

case 7:

printf("\n\nwhat is the national game of USA?");
printf("\n\n");
textcolor(6);
cprintf("A.Tennis    B.Baseball");
printf("\n\n");
textcolor(3);
cprintf("C.cricket    D.swimming");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Baseball");
printf("\n\n");
break;}

case 8:


printf("\n\nthe famous footballer 'pale' comes from?");
printf("\n\n");
textcolor(6);
cprintf("A.Argentina    B.Brazil");
printf("\n\n");
textcolor(3);
cprintf("C.Italy    D.Uruguay");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Brazil");
printf("\n\n");
break;}

case 9:


printf("\n\nwhich country won the world cup football Trophy fivtimes?");
printf("\n\n");
textcolor(6);
cprintf("A.Brazil    B.Atrgentina");
printf("\n\n");
textcolor(3);
cprintf("C.Chili    D.West germany");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Brazil");
printf("\n\n");
break;}


case 10:


printf("\n\nICC stands for .............?");
printf("\n\n");
textcolor(6);
cprintf("A.International cricket council    B.International cricket countries");
printf("\n\n");
textcolor(3);
cprintf("C.International cricket committee    D.None");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.International cricket council");
printf("\n\n");
break;}


case 11:


printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
printf("\n\n");
textcolor(6);
cprintf("A.South Africa    B.Italy");
printf("\n\n");
textcolor(3);
cprintf("C.Argentina    D.Spain");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.South Africa");
printf("\n\n");
break;}

case 12:


printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
printf("\n\n");
textcolor(6);
cprintf("A.Adam Gilchrist    B.M.S.Dhoni");
printf("\n\n");
textcolor(3);
cprintf("C.Herschel Gibbs    D.Sanath Jayasurya");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Herschel Gibbs");
printf("\n\n");
break;}

case 13:


printf("\n\n\nWho was the only player to take 4 successive wickets?");
printf("\n\n");
textcolor(6);
cprintf("A.Malinga Bandara    B.Lasith Malinga");
printf("\n\n");
textcolor(3);
cprintf("C.Bret Lee    D.Murali Daran");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Lasith Malinga");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto sumi;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Sports,WORK HARD");}
}

        //..........Question for option I.............................//

	  if(ch=='I')
     {
     sohel:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     rana:
     srand ( time(NULL) );
     r=rand()%9+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto rana;

     switch(r)
{
////////////////science and technoligy////////////////////////////////

case 1:

printf("\n\nMP4 is?");
printf("\n\n");
textcolor(6);
cprintf("A.image format    B.audio format");
printf("\n\n");
textcolor(3);
cprintf("C.video format    D.audio video format");
countq++;
if(toupper(getch())=='D')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.audio video format");
printf("\n\n");
break;}


case 2:


printf("\n\nwhich is the word relatate within 'international Roaming'?");
printf("\n\n");
textcolor(6);
cprintf("A. Mobile    B.bank");
printf("\n\n");
textcolor(3);
cprintf("C.visit    D.business");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A. Mobile");
printf("\n\n");
break;}


case 3:

printf("\n\nwhat is the full meaning of FM Radio?");
printf("\n\n");
textcolor(6);
cprintf("A.frequency mode    B.free mode");
printf("\n\n");
textcolor(3);
cprintf("C.favorite model    D.frequency modulation");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is A.frequency mode");
printf("\n\n");
break;}

case 4:

printf("\n\n'WiMAX' is a...........?");
printf("\n\n");
textcolor(6);
cprintf("A.wireless broadband technology    B.brand watch");
printf("\n\n");
textcolor(3);
cprintf("C.mobile phone    D.DVD player");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.wireless broadband technology");
printf("\n\n");
break;}

case 5:


printf("\n\n'submarine cable'is the term used in...........?");
printf("\n\n");
textcolor(6);
cprintf("A.telecommunication    B.information technology");
    printf("\n\n");
textcolor(3);
cprintf("C.cable TV network    D.navigational communication");
countq++;
if(toupper(getch())=='B')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.information technology");
printf("\n\n");
break;}


case 6:


printf("\n\n'Green House'is a.......?");
printf("\n\n");
textcolor(6);
cprintf("A.Green coloured house    B.Gas");
textcolor(3);
printf("\n\n");
cprintf("C.House in the green    D.House in which green is grown");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.House in which green is grown");
printf("\n\n");
break;}

case 7:

printf("\n\nwhat was the rate of increase inglobal warming in the last century? ");
printf("\n\n");
textcolor(6);
cprintf("A.20%    B.100%");
printf("\n\n");
textcolor(3);
cprintf("C.80%    D.60%");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.100%");
printf("\n\n");
break;}

case 8:

printf("\n\nWho is the devloper of Avro Bangla software?");
printf("\n\n");
textcolor(6);
cprintf("A.Kamrul Hasan    B.Narayon Das");
printf("\n\n");
textcolor(3);
cprintf("C.Mehedi Hasan Khan    D.Major Games Ranel");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Mehedi Hasan Khan");
printf("\n\n");
break;}

case 9:


printf("\n\n'RAM’ mean's?");
printf("\n\n");
textcolor(6);
cprintf("A.Random access memory    B.Redy access memory");
printf("\n\n");
textcolor(3);
cprintf("C.Rapid access memory    D.Read only memory");
countq++;
if(toupper(getch())=='A')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Random access memory");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto rana;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Technology,WORK HARD");}
}


  //..............Question for option J.........................//

	  if(ch=='J')
     {
     habib:
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     masu:
     srand ( time(NULL) );
     r=rand()%10+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto masu;

     switch(r)
{
////////////////////Architect & sculpture////////////////////////////

case 1:

printf("\n\nwhich of the following is s sculpture by artist 'Kundu'?");
printf("\n\n");
textcolor(6);
cprintf("nA.Shabash Bangladesh    B.Shurjodoyer Prante");
printf("\n\n");
textcolor(3);
cprintf("C.Oprajeyo Banhla    D.Roktim Nithor");
countq++;
if(toupper(getch())=='A')
{
printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is A.Shabash Bangladesh");
printf("\n\n");
break;}


case 2:


printf("\n\nThe most ancient historical place of Bangladesh...");
printf("\n\n");
textcolor(6);
cprintf("A.Paharpur    B.Mohasthangarh");
printf("\n\n");
textcolor(3);
cprintf("C.Sonargaon    D.Moynamoti");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Mohasthangarh");
printf("\n\n");
break;}


case 3:

printf("\n\nWhich one is not in Bangladesh?");
printf("\n\n");
textcolor(6);
cprintf("A.Sona Masjid    B.Tara Masjid");
printf("\n\n");
textcolor(3);
cprintf("C.Babri Masjid    D.Parai Masjid");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
printf("\n\n");
textcolor(1);
cprintf("the correct answer is C.Babri Masjid");
printf("\n\n");
break;}

case 4:

printf("\n\nIn which district is the historic 'Pahar pur' situeted?");
printf("\n\n");
textcolor(6);
cprintf("A.Rajshahi    B.Bogra");
printf("\n\n");
textcolor(3);
cprintf("C.Naogaon    D.Comilla");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Naogaon");
printf("\n\n");
break;}

case 5:


printf("\n\nWhere is the 'Uttora Ganobhaban' situeted?");
printf("\n\n");
textcolor(6);
cprintf("A.Dinajpur    B.Naogaon");
    printf("\n\n");
textcolor(3);
cprintf("C.Bogra    D.Natore");
countq++;
if(toupper(getch())=='D')
{    printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{
        printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Natore");
printf("\n\n");
break;}


case 6:


printf("\n\nWho is the architect of Kamlapur Railway station?");
printf("\n\n");
textcolor(6);
cprintf("A.Mazaharul Islam    B.Paul Rudolf");
textcolor(3);
printf("\n\n");
cprintf("C.Bob Bouigh    D.Shah Alam Jahiruddin");
countq++;
if(toupper(getch())=='C')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is C.Bob Bouigh");
printf("\n\n");
break;}

case 7:

printf("\n\nWho was the designer of central Shahid Minar of Bangladesh?");
printf("\n\n");
textcolor(6);
cprintf("A.Shamim Sikhdar    B.Hamidur Rahman");
printf("\n\n");
textcolor(3);
cprintf("C.Jainul Abedin    D.Kamrul Hasan");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
printf("correct!!!");countr++;break;
}
else{
    printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Hamidur Rahman");
printf("\n\n");
break;}

case 8:

printf("\n\nWhere is the 'Dulahazara Safari Park' located?");
printf("\n\n");
textcolor(6);
cprintf("A.Barisal    B.Cox's Bazar");
printf("\n\n");
textcolor(3);
cprintf("C.Gazipur    D.Rangpur");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Cox's Bazar");
printf("\n\n");
break;}

case 9:


printf("\n\n'The last supper' is painted by..");
printf("\n\n");
textcolor(6);
cprintf("A.Michel Angelo    B.Raphael");
printf("\n\n");
textcolor(3);
cprintf("C.Botticelli    D.Leonardo da vinci");
countq++;
if(toupper(getch())=='D')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is D.Leonardo da vinci");
printf("\n\n");
break;}


case 10:

printf("\n\nWhich is the first mosque of Dhaka city?");
printf("\n\n");
textcolor(6);
cprintf("A.Sona Masjid    B.Binat Bibir Masjid");
printf("\n\n");
textcolor(3);
cprintf("C.Tara Masjid    D.Babri Masjid");
countq++;
if(toupper(getch())=='B')
{printf("\n\n");
textcolor(2);
cprintf("correct!!!");countr++;break;
}
else{printf("\n\n");
textcolor(4);
cprintf("wrong!!!");
textcolor(1);
cprintf("the correct answer is B.Binat Bibir Masjid");
printf("\n\n");
break;}


}
i++;
if (i<=5) goto masu;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100){ printf("\n\n");textcolor(11);cprintf("EXCELLENT!!! KEEP IT UP");}
else if (score>=80 && score<100){ printf("\n\n");textcolor(11);cprintf("VERY GOOD!!");}
else if (score>=60 &&score<80) { printf("\n\n");textcolor(11);cprintf("GOOD! BUT YOU NEED TO KNOW MORE.");}
else if (score>=40 && score<60) { printf("\n\n");textcolor(11);cprintf("SATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");}
else {printf("\n\n");textcolor(11);cprintf("YOU ARE VERY POOR IN Architecture,WORK HARD");}
}



puts("\n\nNEXT PLAY?(Y/N)");
if (toupper(getch())=='Y')
goto jao;
else
{
writescore(score,playername);
goto mainhome;
}
}

return 0;

}
