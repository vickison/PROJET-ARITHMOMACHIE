#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include "headers.h"
  void board()
 {
    extern int A[8][16];
    extern int B[8][16];
    extern int Pb[2][6], Pn[2][5], Pbr, Pnr;

    int i,j,midx,midy,x,y;
    int ec2i,ec2j,e=42;
    void setbkcolor(int color);
    void setcolor(int color);
    int left, top,right,bottom;

   left = getmaxx() / 4 + e;
   top = getmaxy() / 4 + e;
   right = getmaxx() / 4 ;
   bottom = getmaxy() / 4;
   x=getmaxx()/4;
   y=getmaxy()/4;


    midx=getmaxx()/4;
    midy=getmaxy()/4;

    readimagefile("end.jpg",0,0,getmaxx(),getmaxy());
    setcolor(15);

    setfillstyle(SOLID_FILL,(7,8,6) );
    rectangle(getmaxx()/4-12,getmaxy()/4-12,getmaxx()/4+16*e+12,getmaxy()/4+8*e+12);
    floodfill(getmaxx()/2,getmaxy()/2,15);

    setfillstyle(SOLID_FILL,(7,8,6) );
    rectangle(getmaxx()/4-10,getmaxy()/4-10,getmaxx()/4+16*e+10,getmaxy()/4+8*e+10);
    floodfill(getmaxx()/2,getmaxy()/2,15);



            for(i=0; i<17; i++)
        {

            line (midx+i*e,getmaxy()/4,midx+i*e,getmaxy()/4+8*e);

        }

        for(j=0; j<9; j++)
        {
            line (getmaxx()/4,midy+j*e,getmaxx()/4+16*e,midy+j*e);
        }




  for(i=0;i<16;i++)
  {
      for(j=0;j<8;j++)
    {setfillstyle(SOLID_FILL,(7,8,6) );
    rectangle(getmaxx()/4+i*e,getmaxy()/4,getmaxx()/4+e+i*e,getmaxy()/4+e);
    floodfill(getmaxx()/4+getmaxx()/35+i*e,getmaxy()/4+getmaxy()/35+j*e,15);
    }
  }

  //vecteur pyramide
 for(i=0;i<5;i++)
  {
      rectangle(getmaxx()/4+i*42,getmaxy()/4-60,getmaxx()/4+i*42+42,getmaxy()/4-18);
  }

for(i=0;i<6;i++)
  {
      rectangle(getmaxx()/4+10*42+i*42,getmaxy()/4-60,getmaxx()/4+10*42+i*42+42,getmaxy()/4-18);
  }





      setfillstyle(SOLID_FILL,(9,7) );
      rectangle(0,getmaxy()/4+9*e,getmaxx()/12+e,getmaxy()/4+10*e);
      floodfill(getmaxx()/67,getmaxy()/4+9*e+getmaxy()/33,15);
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
      outtextxy(getmaxx()/48,getmaxy()/4+8*e+getmaxy()/14, "JOUEUR1");

      setfillstyle(SOLID_FILL,(9,7) );
      rectangle(getmaxx()/4+19*e,getmaxy()/4+9*e,getmaxx(),getmaxy()/4+10*e);
      floodfill(getmaxx()/4+19*e+getmaxx()/38,getmaxy()/4+8*e+getmaxy()/14,15);
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
      outtextxy(getmaxx()/4+19*e+getmaxx()/38,getmaxy()/4+8*e+getmaxy()/14, "JOUEUR2");


    float cx, cy;
    for(i=0;i<5;i++)
    {
        if(Pn[0][i])
        {
            cx=getmaxx()/4+e/2.0+i*e;
            cy=getmaxy()/4-57+e/2.0;
            pion( (int)cx,(int)cy, Pn[0][i], Pn[1][i]);
        }
    }

    for(i=0;i<6;i++)
    {
        if(Pb[0][i])
        {
            cx=getmaxx()/4+10*42+e/2.0+i*e;
            cy=getmaxy()/4-57+e/2.0;
            pion( (int)cx,(int)cy,Pb[0][i],Pb[1][i]);
        }
    }
      for(i=0; i<8; i++)
    {
       for(j=0;j<16;j++)
        {
            float cx, cy;
           if(A[i][j])
           {
               cx=getmaxx()/4+e/2.0+j*e;
               cy=getmaxy()/4+e/2.0+i*e;
               pion( (int)cx,(int)cy, A[i][j], B[i][j]);

           }
        }
    }


mat();
//quit();

getch();
closegraph();
return ;

 }
