
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"
#include<windows.h>

extern int A[8][16];
extern int B[8][16];
extern int Pb[2][6], Pn[2][5], Pbr, Pnr;
extern int ech;


void echange(int f, int ec1i, int ec1j,int ec2i, int ec2j)
{
    int pp=0;
    int blocc1=0;
    if(f==py||-f==py)
    {
        int j, sn=0, n=A[ec1i][ec1j];
        if(f<0)
        {
            for(j=0;j<6;j++)
            {
                sn=sn+Pb[0][j];
            }
            if(sn!=n){
                pp=1;
                f=Pb[1][Pbr];
            }
       }
       else if(f>0)
      {
            for(j=0;j<5;j++){
                sn=sn+Pn[0][j];
            }
            if(sn!=n){
                pp=1;
                f=Pn[1][Pnr];
            }
       }
    }

    switch(f)
    {

    case ce:
         if((ec2i==ec1i-1&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-1)||(ec2i==ec1i-1&&ec2j==ec1j+1)||(ec2i==ec1i+1&&ec2j==ec1j+1))
         {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+3+ec1j*42,getmaxy()/4+3+ec1i*42,getmaxx()/4+ec1j*42+44,getmaxy()/4+ec1i*42+44);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);

         }

        break;
    case -ce:
         if((ec2i==ec1i-1&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-1)||(ec2i==ec1i-1&&ec2j==ec1j+1)||(ec2i==ec1i+1&&ec2j==ec1j+1))
         {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         }

        break;
    case tr:

        if((ec2i==ec1i-2&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j+2)||(ec2i==ec1i+1&&ec2j==ec1j+2)||(ec2i==ec1i+2&&ec2j==ec1j+1)||
           (ec2i==ec1i+2&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-2)||(ec2i==ec1i-1&&ec2j==ec1j-2)||(ec2i==ec1i-2&&ec2j==ec1j-1))
        {
            if(!pp)
            {
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }


         else if((ec2i==ec1i-2&&ec2j==ec1j&&A[ec1i-1][ec1j]==0&&A[ec1i-2][ec1j]==0&&B[ec1i-1][ec1j]==0&&B[ec1i-2][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j+2&&A[ec1i][ec1j+1]==0&&A[ec1i][ec1j+2]==0&&B[ec1i][ec1j+1]==0&&B[ec1i][ec1j+2]==0)
                ||(ec2i==ec1i+2&&ec2j==ec1j&&A[ec1i+1][ec1j]==0&&A[ec1i+2][ec1j]==0&&B[ec1i+1][ec1j]==0&&B[ec1i+2][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j-2&&A[ec1i][ec1j-1]==0&&A[ec1i][ec1j-2]==0&&B[ec1i][ec1j-1]==0&&B[ec1i][ec1j-2]==0))


               {
                   A[ec2i][ec2j]=A[ec1i][ec1j];
                   A[ec1i][ec1j]=0;
                   B[ec2i][ec2j]=B[ec1i][ec1j];
                   B[ec1i][ec1j]=0;
                   ech=1;
                   Beep(800,6);
                   setfillstyle(SOLID_FILL,(7,8,6) );
                   rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                   floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
               }


        break;
        case -tr:

        if((ec2i==ec1i-2&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j+2)||(ec2i==ec1i+1&&ec2j==ec1j+2)||(ec2i==ec1i+2&&ec2j==ec1j+1)||
           (ec2i==ec1i+2&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-2)||(ec2i==ec1i-1&&ec2j==ec1j-2)||(ec2i==ec1i-2&&ec2j==ec1j-1))
        {
            if(!pp)
            {
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }


         else if((ec2i==ec1i-2&&ec2j==ec1j&&A[ec1i-1][ec1j]==0&&A[ec1i-2][ec1j]==0&&B[ec1i-1][ec1j]==0&&B[ec1i-2][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j+2&&A[ec1i][ec1j+1]==0&&A[ec1i][ec1j+2]==0&&B[ec1i][ec1j+1]==0&&B[ec1i][ec1j+2]==0)
                ||(ec2i==ec1i+2&&ec2j==ec1j&&A[ec1i+1][ec1j]==0&&A[ec1i+2][ec1j]==0&&B[ec1i+1][ec1j]==0&&B[ec1i+2][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j-2&&A[ec1i][ec1j-1]==0&&A[ec1i][ec1j-2]==0&&B[ec1i][ec1j-1]==0&&B[ec1i][ec1j-2]==0))


               {
                   A[ec2i][ec2j]=A[ec1i][ec1j];
                   A[ec1i][ec1j]=0;
                   B[ec2i][ec2j]=B[ec1i][ec1j];
                   B[ec1i][ec1j]=0;
                   ech=1;
                   Beep(800,6);
                   setfillstyle(SOLID_FILL,(7,8,6) );
                   rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                   floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
               }


        break;
    case ca:
              if((ec2i==ec1i-3&&ec2j==ec1j&&A[ec1i-1][ec1j]==0&&A[ec1i-2][ec1j]==0&&A[ec1i-3][ec1j]==0&&B[ec1i-1][ec1j]==0&&B[ec1i-2][ec1j]==0&&B[ec1i-3][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j+3&&A[ec1i][ec1j+1]==0&&A[ec1i][ec1j+2]==0&&A[ec1i][ec1j+3]==0&&B[ec1i][ec1j+1]==0&&B[ec1i][ec1j+2]==0&&B[ec1i][ec1j+3]==0)
                ||(ec2i==ec1i+3&&ec2j==ec1j&&A[ec1i+1][ec1j]==0&&A[ec1i+2][ec1j]==0&&A[ec1i+3][ec1j]==0&&B[ec1i+1][ec1j]==0&&B[ec1i+2][ec1j]==0&&B[ec1i+3][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j-3&&A[ec1i][ec1j-1]==0&&A[ec1i][ec1j-2]==0&&A[ec1i][ec1j-3]==0&&B[ec1i][ec1j-1]==0&&B[ec1i][ec1j-2]==0&&B[ec1i][ec1j-3]==0))

        {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
        }
        else if((ec2i==ec1i-3&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j+3)||(ec2i==ec1i+1&&ec2j==ec1j+3)||(ec2i==ec1i+3&&ec2j==ec1j+1)||
           (ec2i==ec1i+3&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-3)||(ec2i==ec1i-1&&ec2j==ec1j-3)||(ec2i==ec1i-3&&ec2j==ec1j-1))
        {
            if(!pp){
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }
        break;
        case -ca:
              if((ec2i==ec1i-3&&ec2j==ec1j&&A[ec1i-1][ec1j]==0&&A[ec1i-2][ec1j]==0&&A[ec1i-3][ec1j]==0&&B[ec1i-1][ec1j]==0&&B[ec1i-2][ec1j]==0&&B[ec1i-3][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j+3&&A[ec1i][ec1j+1]==0&&A[ec1i][ec1j+2]==0&&A[ec1i][ec1j+3]==0&&B[ec1i][ec1j+1]==0&&B[ec1i][ec1j+2]==0&&B[ec1i][ec1j+3]==0)
                ||(ec2i==ec1i+3&&ec2j==ec1j&&A[ec1i+1][ec1j]==0&&A[ec1i+2][ec1j]==0&&A[ec1i+3][ec1j]==0&&B[ec1i+1][ec1j]==0&&B[ec1i+2][ec1j]==0&&B[ec1i+3][ec1j]==0)
                ||(ec2i==ec1i&&ec2j==ec1j-3&&A[ec1i][ec1j-1]==0&&A[ec1i][ec1j-2]==0&&A[ec1i][ec1j-3]==0&&B[ec1i][ec1j-1]==0&&B[ec1i][ec1j-2]==0&&B[ec1i][ec1j-3]==0))

        {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
        }
        else if((ec2i==ec1i-3&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j+3)||(ec2i==ec1i+1&&ec2j==ec1j+3)||(ec2i==ec1i+3&&ec2j==ec1j+1)||
           (ec2i==ec1i+3&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-3)||(ec2i==ec1i-1&&ec2j==ec1j-3)||(ec2i==ec1i-3&&ec2j==ec1j-1))
        {
            if(!pp){
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }
        break;

    case py:
         if(((ec2i==ec1i-1&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-1)||(ec2i==ec1i-1&&ec2j==ec1j+1)||(ec2i==ec1i+1&&ec2j==ec1j+1))||
            ((ec2i==ec1i-2&&ec2j==ec1j-2)||(ec2i==ec1i+2&&ec2j==ec1j-2)||(ec2i==ec1i-2&&ec2j==ec1j+2)||(ec2i==ec1i+2&&ec2j==ec1j+2))&&
            ((A[ec1i-1][ec1j-1]==0)||(A[ec1i+1][ec1j-1]==0)||(A[ec1i-1][ec1j+1]==0)||(A[ec1i+1][ec1j+1]==0))||
            ((ec2i==ec1i-3&&ec2j==ec1j-3)||(ec2i==ec1i+3&&ec2j==ec1j-3)||(ec2i==ec1i-3&&ec2j==ec1j+3)||(ec2i==ec1i+3&&ec2j==ec1j+3))&&
            ((A[ec1i-2][ec1j-2]==0)||(A[ec1i+2][ec1j-2]==0)||(A[ec1i-2][ec1j+2]==0)||(A[ec1i+2][ec1j+2]==0)))

         {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         }

        if(((ec2i==ec1i&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j))||
           (((ec2i==ec1i&&ec2j==ec1j+2)||(ec2i==ec1i-2&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-2)||(ec2i==ec1i+2&&ec2j==ec1j))&&
           ((A[ec1i][ec1j+1]==0||A[ec1i-1][ec1j]==0||A[ec1i][ec1j-1]==0||A[ec1i][ec1j+1]==0)))||
           (((ec2i==ec1i&&ec2j==ec1j+3)||(ec2i==ec1i-3&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-3)||(ec2i==ec1i+3&&ec2j==ec1j))&&
           ((A[ec1i][ec1j+2]==0||A[ec1i-2][ec1j]==0||A[ec1i][ec1j-2]==0||A[ec1i][ec1j+2]==0))))
        {
            if(!pp)
            {
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }


         
        break;
        case -py:
         if(((ec2i==ec1i-1&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j-1)||(ec2i==ec1i-1&&ec2j==ec1j+1)||(ec2i==ec1i+1&&ec2j==ec1j+1))||
            ((ec2i==ec1i-2&&ec2j==ec1j-2)||(ec2i==ec1i+2&&ec2j==ec1j-2)||(ec2i==ec1i-2&&ec2j==ec1j+2)||(ec2i==ec1i+2&&ec2j==ec1j+2))&&
            ((A[ec1i-1][ec1j-1]==0)||(A[ec1i+1][ec1j-1]==0)||(A[ec1i-1][ec1j+1]==0)||(A[ec1i+1][ec1j+1]==0))||
            ((ec2i==ec1i-3&&ec2j==ec1j-3)||(ec2i==ec1i+3&&ec2j==ec1j-3)||(ec2i==ec1i-3&&ec2j==ec1j+3)||(ec2i==ec1i+3&&ec2j==ec1j+3))&&
            ((A[ec1i-2][ec1j-2]==0)||(A[ec1i+2][ec1j-2]==0)||(A[ec1i-2][ec1j+2]==0)||(A[ec1i+2][ec1j+2]==0)))

         {
            A[ec2i][ec2j]=A[ec1i][ec1j];
            A[ec1i][ec1j]=0;
            B[ec2i][ec2j]=B[ec1i][ec1j];
            B[ec1i][ec1j]=0;
            ech=1;
            Beep(800,6);
            setfillstyle(SOLID_FILL,(7,8,6) );
            rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
            floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
         }
         
         if(((ec2i==ec1i&&ec2j==ec1j+1)||(ec2i==ec1i-1&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-1)||(ec2i==ec1i+1&&ec2j==ec1j))||
           (((ec2i==ec1i&&ec2j==ec1j+2)||(ec2i==ec1i-2&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-2)||(ec2i==ec1i+2&&ec2j==ec1j))&&
           ((A[ec1i][ec1j+1]==0||A[ec1i-1][ec1j]==0||A[ec1i][ec1j-1]==0||A[ec1i][ec1j+1]==0)))||
           (((ec2i==ec1i&&ec2j==ec1j+3)||(ec2i==ec1i-3&&ec2j==ec1j)||(ec2i==ec1i&&ec2j==ec1j-3)||(ec2i==ec1i+3&&ec2j==ec1j))&&
           ((A[ec1i][ec1j+2]==0||A[ec1i-2][ec1j]==0||A[ec1i][ec1j-2]==0||A[ec1i][ec1j+2]==0))))
        {
            if(!pp)
            {
                A[ec2i][ec2j]=A[ec1i][ec1j];
                A[ec1i][ec1j]=0;
                B[ec2i][ec2j]=B[ec1i][ec1j];
                B[ec1i][ec1j]=0;
                ech=1;
                Beep(800,6);
                setfillstyle(SOLID_FILL,(7,8,6) );
                rectangle(getmaxx()/4+2+ec1j*42,getmaxy()/4+2+ec1i*42,getmaxx()/4+ec1j*42+43,getmaxy()/4+ec1i*42+43);
                floodfill(getmaxx()/4+ec1j*42+10,getmaxy()/4+ec1i*42+10,15);
            }
        }

        
        break;
    }
}
