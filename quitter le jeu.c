#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"

void quit()
{
    int i,j;
   while(1)
    if( ismouseclick (WM_LBUTTONDOWN))
    {getmouseclick(WM_LBUTTONDOWN,i,j);
      if((i>getmaxx()/4-getmaxx()/7)&&( j>getmaxy()-getmaxy()/8-getmaxy()/19)&&(i<getmaxx()/2+getmaxx()/7)&&(j<getmaxy()-getmaxy()/8+getmaxy()/19))
      {
        cleardevice();
        main();
      }
    }
}


