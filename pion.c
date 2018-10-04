#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"

extern int Pb[2][6], Pn[2][5], Pbr, Pnr;

void pion(int cx,int cy,int n, int form)
{

    char num_c[6];
    int pp=0;
    //snprintf(num_c,6,"%d",n);

    if(form==py||-form==py){
        int j, sn=0;
        if(form<0)
         {
            for(j=0;j<6;j++)
            {
                sn=sn+Pb[0][j];
            }
            if(sn!=n)
            {
                pp=1;
                form=Pb[1][Pbr];
                n=Pb[0][Pbr];
            }
          }
       else if(form>0)
        {
            for(j=0;j<5;j++)
            {
                sn=sn+Pn[0][j];
            }
            if(sn!=n)
            {
                pp=1;
                form=Pn[1][Pnr];
                n=Pn[0][Pnr];
            }
       }
    }
    if(form>0)
    {
        setfillstyle(SOLID_FILL,RED);
        setbkcolor(RED);
    }
    else if(form<0)
    {
        setfillstyle(SOLID_FILL,BLUE);
        setbkcolor(BLUE);
    }
    form=(int)fabs(form);

    snprintf(num_c,6,"%d",n);
    int nc_num=(n<10)?1:((n>=10&&n<100)?2:3);

    switch (form)
    {

    case ce:
         setcolor(14);
         circle(cx,cy,getmaxx()/80);
         floodfill(cx,cy,14);
         if(pp)
         circle(cx,cy,getmaxx()/100);
         settextstyle(2, HORIZ_DIR, 4);
         outtextxy(cx-nc_num/2.0*5,cy-3,num_c);
        break;
    case tr:
        setcolor(14);
        int poly1[6];
        poly1[0]=cx-15;
        poly1[1]=cy;
        poly1[2]=cx+15;
        poly1[3]=cy-15;
        poly1[4]=cx+15;
        poly1[5]=cy+15;
        fillpoly(3,poly1);
        if(pp)
        {
            setcolor(14);
        int poly1[6];
        poly1[0]=cx-13;
        poly1[1]=cy;
        poly1[2]=cx+13;
        poly1[3]=cy-13;
        poly1[4]=cx+13;
        poly1[5]=cy+13;
        fillpoly(3,poly1);
        }
        settextstyle(2, HORIZ_DIR, 4);
        floodfill(cx,cy,14);
        settextstyle(2, HORIZ_DIR, 4);
        outtextxy(cx-nc_num/2.0,cy-4,num_c);
        break;
    case ca:
      setcolor(14);
      if(pp)
        {
      rectangle(cx-13,cy-13,cx+13,cy+13);
      floodfill(cx,cy,14);
      settextstyle(2, HORIZ_DIR, 4);
      outtextxy(cx-nc_num/2.0*4,cy-3,num_c);
        }
      rectangle(cx-15,cy-15,cx+15,cy+15);
      floodfill(cx,cy,14);
      settextstyle(2, HORIZ_DIR, 4);
      outtextxy(cx-nc_num/2.0*4,cy-3,num_c);
        break;
    case py:
        setcolor(14);
        int poly[8];
        poly[0]=cx-17;
        poly[1]=cy;
        poly[2]=cx;
        poly[3]=cy-17;
        poly[4]=cx+13;
        poly[5]=cy;
        poly[6]=cx;
        poly[7]=cy+17;

        fillpoly(4,poly);
        settextstyle(2, HORIZ_DIR, 4);
        floodfill(cx-5,cy-10,14);
        settextstyle(2, HORIZ_DIR, 4);
        outtextxy(cx-nc_num/2.0*5,cy-3,num_c);
        break;

        break;

    }

}
