#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void homepager()
{
    int h=0,m,i;
    initgraph(&h,&m,"c:\\tc\\bgi");
    for(i=0; i<35; i++)
    {
        setcolor(i);
        circle(50,20,i);
        delay(40);
    }
    for(i=0; i<45; i++)
    {
        setcolor(i);
        circle(30,70,i);
        delay(45);
    }
    for(i=0; i<50; i++)
    {
        setcolor(i);
        circle(70,60,i);
        delay(30);
    }
    for(i=0; i<35; i++)
    {
        setcolor(i);
        circle(600,370,i);
        delay(30);
    }
    for(i=0; i<45; i++)
    {
        setcolor(i);
        circle(570,410,i);
        delay(40);
    }
    for(i=0; i<50; i++)
    {
        setcolor(i);
        circle(620,415,i);
        delay(20);
    }

    settextstyle(0,0,5);
//settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    setcolor(11);
    outtextxy(220,180,"WELCOME");
    settextstyle(1,0,1);
    setcolor(14);
    outtextxy(280,230,"TO OUR IQ TEST");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(6);
    outtextxy(140,440,"PRESS ENTER TO CONTINUE");
    getch();
    closegraph();
}
