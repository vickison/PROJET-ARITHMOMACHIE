#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"

void debut()
{
    //readimagefile("foto.jpg",0,0,getmaxx(),getmaxy());
    int t;
    setfillstyle(SOLID_FILL, RED);
    setcolor(15);
    setbkcolor(0);

    rectangle(getmaxx()/4,getmaxy()-getmaxy()/8,getmaxx()/4+15*42,getmaxy()-getmaxy()/8-getmaxy()/22);
    settextstyle(10, HORIZ_DIR, 4);
    outtextxy(getmaxx()/4+getmaxx()/7+40,getmaxy()-getmaxy()/8-getmaxy()/7, "LOADING...");

    for(t=0;t<getmaxx()/2;t++)

    {
        bar(getmaxx()/4,getmaxy()-getmaxy()/8,getmaxx()/4+t,getmaxy()-getmaxy()/8-getmaxy()/22);
        delay(1);
        t++;
    }

    {

        cleardevice();
        board();

    }

    getch();
    closegraph( );
    }
