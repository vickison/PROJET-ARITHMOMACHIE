
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include"headers.h"

extern int A[8][16];
extern int B[8][16];

void prise(int ec1i,int ec1j,int ec2i,int ec2j)
{
     int bc=0;

     //prise cercle
    if((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+2]>0)&&(B[ec1i-2][ec1j+2]>0)&&(B[ec1i-2][ec1j]>0)||
       (B[ec1i][ec2i]>0)&&(B[ec1i-2][ec1j]>0)&&(B[ec1i-2][ec1j-2]>0)&&(B[ec1i][ec1j-2]>0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-2]>0)&&(B[ec1i+1][ec1j-2]>0)&&(B[ec1i+2][ec1j]>0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i+2][ec1j]>0)&&(B[ec1i+2][ec1j+2]>0)&&(B[ec1i][ec1j+2]>0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+2]>0)&&(ec1i-1==0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-2]>0)&&(ec1i-1==0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i-2][ec1j]>0)&&(ec1j-1==0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i+2][ec1j]>0)&&(ec1j-1==0)||
       (B[ec1i][ec1j]>0)&&(B[ec1i+2][ec1j]>0)&&(ec1j+1==15)||
       (B[ec1i][ec1j]>0)&&(B[ec1i-2][ec1j]>0)&&(ec1j+1==15)||
       (B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+2]>0)&&(ec1i-1==7)||
       (B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+2]>0)&&(ec1i-1==7)||
       (B[ec1i][ec1j]>0)&&(ec1i-1==0)&&(ec1j+1==15)||
       (B[ec1i][ec1j]>0)&&(ec1i-1==7)&&(ec1j+1==15)||
       (B[ec1i][ec1j]>0)&&(ec1i-1==0)&&(ec1j+1==0)||
       (B[ec1i][ec1j]>0)&&(ec1i+1==7)&&(ec1j-1==0))
    {
        if((ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1j-1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1i-1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==-ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==-ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1j-1]==-ce)))
        {

         A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         Beep(6000,50);
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);;
         printf("cercle en position d'etre pris\n");
        }
    }

   else if((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+2]<0)&&(B[ec1i-2][ec1j+2]<0)&&(B[ec1i-2][ec1j]<0)||
           (B[ec1i][ec2i]<0)&&(B[ec1i-2][ec1j]<0)&&(B[ec1i-2][ec1j-2]<0)&&(B[ec1i][ec1j-2]<0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-2]<0)&&(B[ec1i+1][ec1j-2]<0)&&(B[ec1i+2][ec1j]<0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i+2][ec1j]<0)&&(B[ec1i+2][ec1j+2]<0)&&(B[ec1i][ec1j+2]<0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+2]<0)&&(ec1i-1==0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-2]<0)&&(ec1i-1==0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i-2][ec1j]<0)&&(ec1j-1==0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i+2][ec1j]<0)&&(ec1j-1==0)||
           (B[ec1i][ec1j]<0)&&(B[ec1i+2][ec1j]<0)&&(ec1j+1==15)||
           (B[ec1i][ec1j]<0)&&(B[ec1i-2][ec1j]<0)&&(ec1j+1==15)||
           (B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+2]<0)&&(ec1i-1==7)||
           (B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+2]<0)&&(ec1i-1==7)||
           (B[ec1i][ec1j]<0)&&(ec1i-1==0)&&(ec1j+1==15)||
           (B[ec1i][ec1j]<0)&&(ec1i-1==7)&&(ec1j+1==15)||
           (B[ec1i][ec1j]<0)&&(ec1i-1==0)&&(ec1j+1==0)||
           (B[ec1i][ec1j]<0)&&(ec1i+1==7)&&(ec1j-1==0))
    {
        if((ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1j-1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1i-1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j+1&&(B[ec1i-1][ec1j+1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j+1&&(B[ec1i+1][ec1j+1]==ce))||
           (ec2i==ec1i-1&&ec2j==ec1j-1&&(B[ec1i-1][ec1j-1]==ce))||
           (ec2i==ec1i+1&&ec2j==ec1j-1&&(B[ec1i+1][ec1j-1]==ce)))
        {

         A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         printf("cercle en position d'etre pris\n");
        }
    }
//prise triangle
   if(((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+3]>0||B[ec1i][ec1j+4]>0)&&(B[ec1i-1][ec1j+2]>0||B[ec1i-2][ec1j+2]>0)&&(B[ec1i+1][ec1j+2]>0||B[ec1i+2][ec1j+2]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j]>0||B[ec1i-4][ec1j]>0)&&(B[ec1i-2][ec1j-1]>0||B[ec1i-2][ec1j-2]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-3]>0||B[ec1i][ec1j-4]>0)&&(B[ec1i+1][ec1j-2]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j]>0||B[ec1i+4][ec1j]>0)&&(B[ec1i+2][ec1j-1]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+3]>0||B[ec1i][ec1j+4]>0)&&(B[ec1i+1][ec1j+2]>0||B[ec1i+2][ec1j+2]>0)&&(ec1i==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-3]>0||B[ec1i][ec1j-4]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1i==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-2][ec1j-1]>0||B[ec1i-2][ec1j-2]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0)&&(ec1i-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+3]>0||B[ec1i][ec1j+4]>0)&&(B[ec1i+1][ec1j+2]>0||B[ec1i+2][ec1j+2]>0)&&(ec1i-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-3]>0||B[ec1i][ec1j-4]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1i-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-2][ec1j-1]>0||B[ec1i-2][ec1j-2]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0)&&(ec1i-3==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+3]>0||B[ec1i][ec1j+4]>0)&&(B[ec1i-1][ec1j+2]>0||B[ec1i-2][ec1j+2]>0)&&(ec1i==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-3]>0||B[ec1i][ec1j-4]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1i==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+2][ec1j-1]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0)&&(ec1i+2==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+3]>0||B[ec1i][ec1j+4]>0)&&(B[ec1i-1][ec1j+2]>0||B[ec1i-2][ec1j+2]>0)&&(ec1i+1==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-3]>0||B[ec1i][ec1j-4]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1i+1==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+2][ec1j-1]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0)&&(ec1i+3==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j]>0||B[ec1i-4][ec1j]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0)&&(ec1j==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j]>0||B[ec1i+4][ec1j]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0)&&(ec1j==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-2]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1j-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j]>0||B[ec1i-4][ec1j]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j]>0||B[ec1i+4][ec1j]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-2]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1j-3==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j]>0||B[ec1i-4][ec1j]>0)&&(B[ec1i-2][ec1j-1]>0||B[ec1i-2][ec1j-2]>0)&&(ec1j==15))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j]>0||B[ec1i+4][ec1j]>0)&&(B[ec1i+2][ec1j-1]>0||B[ec1i+2][ec1j-2]>0)&&(ec1j==15))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-1]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1j-2==15))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j]>0||B[ec1i-4][ec1j]>0)&&(B[ec1i-2][ec1j+1]>0||B[ec1i-2][ec1j+2]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j]>0||B[ec1i+4][ec1j]>0)&&(B[ec1i+2][ec1j+1]>0||B[ec1i+2][ec1j+2]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-2]>0||B[ec1i+2][ec1j-2]>0)&&(B[ec1i-1][ec1j-2]>0||B[ec1i-2][ec1j-2]>0)&&(ec1j-3==0))
      )
   {
    if((ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==-tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==-tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr)))
    {
        A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         printf("triangle en position d'etre pris\n");
    }
   }

    else if(((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+3]<0||B[ec1i][ec1j+4]<0)&&(B[ec1i-1][ec1j+2]<0||B[ec1i-2][ec1j+2]<0)&&(B[ec1i+1][ec1j+2]<0||B[ec1i+2][ec1j+2]<0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-3][ec1j]<0||B[ec1i-4][ec1j]<0)&&(B[ec1i-2][ec1j-1]<0||B[ec1i-2][ec1j-2]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-3]<0||B[ec1i][ec1j-4]<0)&&(B[ec1i+1][ec1j-2]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+3][ec1j]<0||B[ec1i+4][ec1j]<0)&&(B[ec1i+2][ec1j-1]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+3]<0||B[ec1i][ec1j+4]<0)&&(B[ec1i+1][ec1j+2]<0||B[ec1i+2][ec1j+2]<0)&&(ec1i==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-3]<0||B[ec1i][ec1j-4]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1i==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-2][ec1j-1]<0||B[ec1i-2][ec1j-2]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0)&&(ec1i-2==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+3]<0||B[ec1i][ec1j+4]<0)&&(B[ec1i+1][ec1j+2]<0||B[ec1i+2][ec1j+2]<0)&&(ec1i-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-3]<0||B[ec1i][ec1j-4]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1i-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-2][ec1j-1]<0||B[ec1i-2][ec1j-2]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0)&&(ec1i-3==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+3]<0||B[ec1i][ec1j+4]<0)&&(B[ec1i-1][ec1j+2]<0||B[ec1i-2][ec1j+2]<0)&&(ec1i==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-3]<0||B[ec1i][ec1j-4]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1i==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+2][ec1j-1]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0)&&(ec1i+2==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+3]<0||B[ec1i][ec1j+4]<0)&&(B[ec1i-1][ec1j+2]<0||B[ec1i-2][ec1j+2]<0)&&(ec1i+1==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-3]<0||B[ec1i][ec1j-4]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1i+1==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+2][ec1j-1]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0)&&(ec1i+3==7))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-3][ec1j]<0||B[ec1i-4][ec1j]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0)&&(ec1j==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+3][ec1j]<0||B[ec1i+4][ec1j]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0)&&(ec1j==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+1][ec1j-2]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1j-2==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-3][ec1j]<0||B[ec1i-4][ec1j]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0)&&(ec1j-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+3][ec1j]<0||B[ec1i+4][ec1j]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0)&&(ec1j-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+1][ec1j-2]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1j-3==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-3][ec1j]<0||B[ec1i-4][ec1j]<0)&&(B[ec1i-2][ec1j-1]<0||B[ec1i-2][ec1j-2]<0)&&(ec1j==15))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+3][ec1j]<0||B[ec1i+4][ec1j]<0)&&(B[ec1i+2][ec1j-1]<0||B[ec1i+2][ec1j-2]<0)&&(ec1j==15))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+1][ec1j-1]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1j-2==15))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i-3][ec1j]<0||B[ec1i-4][ec1j]<0)&&(B[ec1i-2][ec1j+1]<0||B[ec1i-2][ec1j+2]<0)&&(ec1j-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+3][ec1j]<0||B[ec1i+4][ec1j]<0)&&(B[ec1i+2][ec1j+1]<0||B[ec1i+2][ec1j+2]<0)&&(ec1j-1==0))||
            ((B[ec1i][ec1j]<0)&&(B[ec1i+1][ec1j-2]<0||B[ec1i+2][ec1j-2]<0)&&(B[ec1i-1][ec1j-2]<0||B[ec1i-2][ec1j-2]<0)&&(ec1j-3==0)))
   {
    if((ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==-tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j-2&&(B[ec1i][ec1j-2]==tr))||
       (ec2i==ec1i-2&&ec2j==ec1j&&(B[ec1i-2][ec1j]==tr))||
       (ec2i==ec1i+2&&ec2j==ec1j&&(B[ec1i+2][ec1j]==tr))||
       (ec2i==ec1i&&ec2j==ec1j+2&&(B[ec1i][ec1j+2]==tr)))
    {
        A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         printf("triangle en position d'etre pris\n");
    }
   }

   //prise carre
   if(((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i-1][ec1j+3]>0||B[ec1i-2][ec1j+3]>0||B[ec1i-3][ec1j+3]>0)&&(B[ec1i+1][ec1j+3]>0||B[ec1i+2][ec1j+3]>0||B[ec1i+3][ec1j+3]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-4][ec1j]>0||B[ec1i-5][ec1j]>0||B[ec1i-6][ec1j]>0)&&(B[ec1i-3][ec1j-1]>0||B[ec1i-3][ec1j-2]>0||B[ec1i-3][ec1j-3]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i+1][ec1j-3]>0||B[ec1i+2][ec1j-3]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+4][ec1j]>0||B[ec1i+5][ec1j]>0||B[ec1i+6][ec1j]>0)&&(B[ec1i+3][ec1j-1]>0||B[ec1i+3][ec1j-2]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i+1][ec1j+3]>0||B[ec1i+2][ec1j+3]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i+1][ec1j-3]>0||B[ec1i+2][ec1j-3]>0||B[ec1i+3][ec1j-3]>0)&&(ec1i==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j-1]>0||B[ec1i-3][ec1j-2]>0||B[ec1i-3][ec1j-3]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i-3==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i+1][ec1j+3]>0||B[ec1i+2][ec1j+3]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1i-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j-1]>0||B[ec1i-3][ec1j-2]>0||B[ec1i-3][ec1j-3]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i-4==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i+1][ec1j+3]>0||B[ec1i+2][ec1j+3]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1i-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-3][ec1j-1]>0||B[ec1i-3][ec1j-2]>0||B[ec1i-3][ec1j-3]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i-5==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i-1][ec1j+3]>0||B[ec1i-2][ec1j+3]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1i==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j-1]>0||B[ec1i+3][ec1j-2]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i+3==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i-1][ec1j+3]>0||B[ec1i-2][ec1j+3]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i+1==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1i+1==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j-1]>0||B[ec1i+3][ec1j-2]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i+4==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j+4]>0||B[ec1i][ec1j+5]>0||B[ec1i][ec1j+6]>0)&&(B[ec1i-1][ec1j+3]>0||B[ec1i-2][ec1j+3]>0||B[ec1i-3][ec1j+3]>0)&&(ec1i+2==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i][ec1j-4]>0||B[ec1i][ec1j-5]>0||B[ec1i][ec1j-6]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1i+2==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+3][ec1j-1]>0||B[ec1i+3][ec1j-2]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1i+5==7))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-4][ec1j]>0||B[ec1i-5][ec1j]>0||B[ec1i-6][ec1j]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1j==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+4][ec1j]>0||B[ec1i+5][ec1j]>0||B[ec1i+6][ec1j]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1j==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-3]>0||B[ec1i+2][ec1j-3]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1j-3==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-4][ec1j]>0||B[ec1i-5][ec1j]>0||B[ec1i-6][ec1j]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+4][ec1j]>0||B[ec1i+5][ec1j]>0||B[ec1i+6][ec1j]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1j-1==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-3]>0||B[ec1i+2][ec1j-3]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1j-4==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i-4][ec1j]>0||B[ec1i-5][ec1j]>0||B[ec1i-6][ec1j]>0)&&(B[ec1i-3][ec1j+1]>0||B[ec1i-3][ec1j+2]>0||B[ec1i-3][ec1j+3]>0)&&(ec1j-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+4][ec1j]>0||B[ec1i+5][ec1j]>0||B[ec1i+6][ec1j]>0)&&(B[ec1i+3][ec1j+1]>0||B[ec1i+3][ec1j+2]>0||B[ec1i+3][ec1j+3]>0)&&(ec1j-2==0))||
      ((B[ec1i][ec1j]>0)&&(B[ec1i+1][ec1j-3]>0||B[ec1i+2][ec1j-3]>0||B[ec1i+3][ec1j-3]>0)&&(B[ec1i-1][ec1j-3]>0||B[ec1i-2][ec1j-3]>0||B[ec1i-3][ec1j-3]>0)&&(ec1j-5==0))
      )


   {
    if((ec2i==ec1i&&ec2j==ec1j+3&&(B[ec1i][ec1j+3]==-ca))||
       (ec2i==ec1i-3&&ec2j==ec1j&&(B[ec1i-3][ec1j]==-ca))||
       (ec2i==ec1i&&ec2j==ec1j-3&&(B[ec1i][ec1j-3]==-ca))||
       (ec2i==ec1i+3&&ec2j==ec1j&&(B[ec1i+3][ec1j]==-ca))||
       (ec2i==ec1i&&ec2j==ec1j+3&&(B[ec1i][ec1j+3]==-ca))||
       (ec2i==ec1i&&ec2j==ec1j-3&&(B[ec1i][ec1j-3]==-ca))||
       (ec2i==ec1i-3&&ec2j==ec1j&&(B[ec1i-3][ec1j]==-ca))||
       (ec2i==ec1i-3&&ec2j==ec1j&&(B[ec1i-3][ec1j]==-ca))
       )
    {
         A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         printf("carre en position d'etre pris\n");
    }
   }

   else if(((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j+4]<0||B[ec1i][ec1j+5]<0||B[ec1i][ec1j+6]<0)&&(B[ec1i-1][ec1j+3]<0||B[ec1i-2][ec1j+3]<0||B[ec1i-3][ec1j+3]<0)&&(B[ec1i+1][ec1j+3]<0||B[ec1i+2][ec1j+3]<0||B[ec1i+3][ec1j+3]<0))||
           ((B[ec1i][ec1j]<0)&&(B[ec1i-4][ec1j]<0||B[ec1i-5][ec1j]<0||B[ec1i-6][ec1j]<0)&&(B[ec1i-3][ec1j-1]<0||B[ec1i-3][ec1j-2]<0||B[ec1i-3][ec1j-3]<0)&&(B[ec1i-3][ec1j+1]<0||B[ec1i-3][ec1j+2]<0||B[ec1i-3][ec1j+3]<0))||
           ((B[ec1i][ec1j]<0)&&(B[ec1i][ec1j-4]<0||B[ec1i][ec1j-5]<0||B[ec1i][ec1j-6]<0)&&(B[ec1i+1][ec1j-3]<0||B[ec1i+2][ec1j-3]<0||B[ec1i+3][ec1j-3]<0)&&(B[ec1i-1][ec1j-3]<0||B[ec1i-2][ec1j-3]<0||B[ec1i-3][ec1j-3]<0))||
           ((B[ec1i][ec1j]<0)&&(B[ec1i+4][ec1j]<0||B[ec1i+5][ec1j]<0||B[ec1i+6][ec1j]<0)&&(B[ec1i+3][ec1j-1]<0||B[ec1i+3][ec1j-2]<0||B[ec1i+3][ec1j-3]<0)&&(B[ec1i+3][ec1j+1]<0||B[ec1i+3][ec1j+2]<0||B[ec1i+3][ec1j+3]<0)))
   {
    if((ec2i==ec1i&&ec2j==ec1j+3&&(B[ec1i][ec1j+3]==ca))||
       (ec2i==ec1i-3&&ec2j==ec1j&&(B[ec1i-3][ec1j]==ca))||
       (ec2i==ec1i&&ec2j==ec1j-3&&(B[ec1i][ec1j-3]==ca))||
       (ec2i==ec1i+3&&ec2j==ec1j&&(B[ec1i+3][ec1j]==ca)))
    {
         A[ec2i][ec2j]=A[ec1i][ec1j];
         A[ec1i][ec1j]=0;
         B[ec2i][ec2j]=B[ec1i][ec1j];
         B[ec1i][ec1j]=0;
         bc=1;
         setfillstyle(SOLID_FILL,(7,8,6) );
         rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
         floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
        printf("carre en position d'etre pris\n");
    }
   }
}
