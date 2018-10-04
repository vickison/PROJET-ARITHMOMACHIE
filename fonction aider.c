#include<stdio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include"headers.h"


void aide ()
{
    int i, j;


    while(1)

        if( ismouseclick (WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,i,j);

            if((i>50)&&( j>50)&&(i<230)&&(j<100))
            {
               main();
            }

            else if((i>getmaxx()/2-150)&&( j>getmaxy()-150)&&(i<getmaxx())&&(j<getmaxy()))

            {
              readimagefile("aide2.gif",0,0,getmaxx(),getmaxy());
            }

            else if((i>getmaxx()-230)&&( j>40)&&(i<getmaxx())&&(j<120))
            {
              readimagefile("aide3.gif",0,0,getmaxx(),getmaxy());
            }
            else if((i>40)&&( j>getmaxy()-230)&&(i<230)&&(j<getmaxy()))
            {
            readimagefile("aide4.gif",0,0,getmaxx(),getmaxy());
            }

        }
}


