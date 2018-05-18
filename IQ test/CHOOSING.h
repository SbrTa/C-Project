#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
char ch;
void choosing()
{
int driver=0,mode,i;
initgraph(&driver,&mode,"c:\\tc\\bgi");
for(i=0;i<50;i++)
{
setcolor(10);
line(610+i,1,610+i,490);
delay(50);
} for(i=0;i<40;i++)
{
setcolor(14);
line(1,1+i,610,1+i);
delay(50);}


setcolor(14);
settextstyle(0,HORIZ_DIR,2);
outtextxy(90,90,"You have to choose One ITEM");
setcolor(3);
setlinestyle(SOLID_LINE,1,3);
line(90,110,520,110);
setcolor(11);
setlinestyle(SOLID_LINE,1,1);
line(90,115,520,115);
setfillstyle(1,7);
bar(320,170,535,200);
bar(320,220,535,250);
bar(320,270,535,300);
bar(320,320,535,350);
bar(320,370,535,400);

bar(20,170,250,200);
bar(20,220,250,250);
bar(20,270,250,300);
bar(20,320,250,350);
bar(20,370,250,400);

settextstyle(1,0,2);
setcolor(0);
outtextxy(27,170,"A. EASY QUESTIONS");
setcolor(6);
outtextxy(27,220,"B. CURRENT WORLD");
setcolor(1);
outtextxy(27,270,"C. NOBEL & AWARD");
setcolor(0);
outtextxy(27,320,"D. GEOGRAPHY");
setcolor(1);
outtextxy(27,370,"E. HISYTORY");
setcolor(0);
outtextxy(327,170,"F. BANGLADESH");
setcolor(6);
outtextxy(327,220,"G. INTERNATIONAL");
setcolor(1);
outtextxy(327,270,"H. SPORTS");
setcolor(0);
outtextxy(327,320,"I. TECHNOLOGY");
setcolor(1);
outtextxy(327,370,"J. ARCHITECTURE");

settextstyle(0,HORIZ_DIR,2);
setcolor(11);
outtextxy(100,460,"PRESS ENTER, THEN CHOICE");
ch=toupper(getch());
closegraph();
}
