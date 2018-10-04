#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include"headers.h"

int A[8][16]={0,0,361,190,100,0,0,0,0,0,0,9,15,25,0,0,
                  0,0,225,120,90,0,0,0,0,0,0,6,45,81,0,0,
                  0,0,0,64,81,9,0,0,0,0,2,4,25,0,0,0,
                  0,0,0,56,49,7,0,0,0,0,4,16,20,0,0,0,
                  0,0,0,30,25,5,0,0,0,0,6,36,42,0,0,0,
                  0,0,0,36,9,3,0,0,0,0,8,64,49,0,0,0,
                  0,0,121,66,12,0,0,0,0,0,0,72,91,169,0,0,
                  0,0,49,28,16,0,0,0,0,0,0,81,153,289,0,0};

int B[8][16]={0,0,ca,py,tr,0,0,0,0,0,0,-tr,-ca,-ca,0,0,
                  0,0,ca,ca,tr,0,0,0,0,0,0,-tr,-ca,-ca,0,0,
                  0,0,0,tr,ce,ce,0,0,0,0,-ce,-ce,-tr,0,0,0,
                  0,0,0,tr,ce,ce,0,0,0,0,-ce,-ce,-tr,0,0,0,
                  0,0,0,tr,ce,ce,0,0,0,0,-ce,-ce,-tr,0,0,0,
                  0,0,0,tr,ce,ce,0,0,0,0,-ce,-ce,-tr,0,0,0,
                  0,0,ca,ca,tr,0,0,0,0,0,0,-tr,-py,-ca,0,0,
                  0,0,ca,ca,tr,0,0,0,0,0,0,-tr,-ca,-ca,0,0};

int Pn[2][5]={{16,25,36,49,64},
              {ce,tr,tr,ca,ca}};

int Pb[2][6]={{1,4,9,16,25,36},
             {-ce,-ce,-tr,-tr,-ca,-ca}};
int Pnr=0,Pbr=0;
int jj=-1;
int ech;

main()
{
    int i,j,x,y;

    initwindow(getmaxwidth(), getmaxheight(),"ARITHMOMACHIE");
    readimagefile("QQQ.jpg",0,0,getmaxx(),getmaxy());
    readimagefile("pict.jpg",getmaxx()-getmaxx()/8,getmaxy()/8,getmaxx(),getmaxy()/4);
    readimagefile("tikiki.jpg",0,getmaxy()/8,getmaxx()/8,getmaxy()/4);
    //rectangle(getmaxx()/4+15*42-15,getmaxy()/4+10*45-20,getmaxx()-getmaxx()/7+40,getmaxy()-getmaxy()/8-30);
       while(1)


        if( ismouseclick (WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,i,j);
            if((i>getmaxx()/4+15*43)&&(j>getmaxy()/4+6*47)&&(i<getmaxx()-getmaxx()/6)&&(j<getmaxy()-getmaxy()/3-7))
            {
                cleardevice();
                debut();


            }
            else if((i>getmaxx()/4+15*43)&&(j>getmaxy()/4+8*44)&&(i<getmaxx()-getmaxx()/6)&&(j<getmaxy()-getmaxy()/4))
            {
               cleardevice();
               readimagefile("aide1.gif",0,0,getmaxx(),getmaxy());
               aide();
            }

            if((i>getmaxx()/4+15*42-15)&&(j>getmaxy()/4+10*45-20)&&(i<getmaxx()-getmaxx()/7+40)&&(j<getmaxy()-getmaxy()/8-30))
            {
               cleardevice();
               readimagefile("Historicite.jpg",0,0,getmaxx(),getmaxy());

                while(1)
               if( ismouseclick (WM_LBUTTONDOWN))
                 {
                   getmouseclick(WM_LBUTTONDOWN,i,j);
                     if((i>10)&&(j>0)&&(i<getmaxx()/4+150)&&(j<getmaxy()/4))
                       {

                         cleardevice();
                         main();
                       }
                 }
            }
            else if((i>getmaxx()/4+15*42)&&(j>getmaxy()/4+11*45)&&(i<getmaxx()-getmaxx()/7)&&(j<getmaxy()-getmaxy()/12+5))
            {
               cleardevice();
               closegraph();
            }
    if((i>0)&&(j>getmaxy()-50)&&(i<200)&&(j<getmaxy()-30))
                    {

                      cleardevice();
                      main();
                    }

    }


    getch();
    closegraph();

}



