#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"
int matrice()
{
    int i,j;
    int e=42;
    int A[8][16];
    int a=0;
    int b=0;

for(i=0;i<7;i++)
{

    for(j=0;j<15;j++)
      A[i][j]=0;
    switch(i)
    {

      case 0: if(j==2)
               A[i][j]=1;

            else if(j==3)
            A[i][j]=2;

            else if(j==4)
            A[i][j]=3;

             else if(j==11)
             A[i][j]=4;

             else if(j==12)
             A[i][j]=5;

             else if(j==13)
             A[i][j]=6;
             break;

      case 1: if(j==2)
             A[i][j]=7;

             else if(j==3)
             A[i][j]=8;

             else if(j==4)
             A[i][j]=9;

             else if(j==11)
             A[i][j]=10;

             else if(j==12)
             A[i][j]=11;

             else if(j==13)
             A[i][j]=12;
             break;
      case 2: if(j==3)
             A[i][j]=13;

             else if(j==4)
             A[i][j]=14;

             else if(j==5)
             A[i][j]=15;

             else if(j==10)
             A[i][j]=16;

             else if(j==11)
             A[i][j]=17;

             else if(j==12)
             A[i][j]=18;
             break;
      case 3: if(j==3)
              A[i][j]=19;

              else if(j==4)
               A[i][j]=20;

              else if(j==5)
               A[i][j]=21;

              else if(j==10)
               A[i][j]=22;

              else if(j==11)
               A[i][j]=23;

              else if(j==12)
               A[i][j]=24;
               break;

      case 4: if(j==3)
              A[i][j]=25;

              else if(j==4)
               A[i][j]=26;

              else if(j==5)
               A[i][j]=27;

              else if(j==10)
               A[i][j]=28;

              else if(j==11)
               A[i][j]=29;

              else if(j==12)
               A[i][j]=30;
              break;

      case 5: if(j==3)
               A[i][j]=31;

              else if(j==4)
               A[i][j]=32;

               else if(j==5)
                A[i][j]=33;

               else if(j==10)
                A[i][j]=34;

               else if(j==11)
                A[i][j]=35;

               else if(j==12)
                A[i][j]=36;
                break;
       case 6: if(j==2)
                A[i][j]=37;

               else if(j==3)
                A[i][j]=38;

               else if(j==4)
                A[i][j]=39;

               else if(j==11)
                A[i][j]=40;

               else if(j==12)
                A[i][j]=41;

               else if(j==13)
                A[i][j]=42;
                break;

       case 7: if(j==2)
                A[i][j]=43;

               else if(j==3)
                A[i][j]=44;

               else if(j==4)
                A[i][j]=45;

               else if(j==11)
                A[i][j]=46;

               else if(j==12)
                A[i][j]=47;

               else if(j==13)
                A[i][j]=48;
                break;
    }
  }

for(i=0;i<7;i++)
{
  for(j=0;j<15;j++)
      A[i][j]=0;
    switch(A[i][j])
    {

    case 1:
        pioncarre(getmaxx()/4+2*e+getmaxx()/35,getmaxy()/4+getmaxx()/35,getmaxx()/4+3*e-getmaxx()/35,getmaxy()/4+e-getmaxy()/21,getmaxx()/4+5*e/2,getmaxy()/4+e/2,15,BLACK);

    case 7:
        pioncarre(getmaxx()/4+2*e+getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+3*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+5*e/2,getmaxy()/4+3*e/2,15,BLACK);

    case 8:
        pioncarre(getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+7*e/2,getmaxy()/4+3*e/2,15,BLACK);

    case 37:
        pioncarre(getmaxx()/4+2*e+getmaxx()/35,getmaxy()/4+6*e+getmaxy()/21,getmaxx()/4+3*e-getmaxx()/35,getmaxy()/4+7*e-getmaxx()/35,getmaxx()/4+5*e/2,getmaxy()/4+13*e/2,15,BLACK);

    case 43:
        pioncarre(getmaxx()/4+2*e+getmaxx()/35,getmaxy()/4+7*e+getmaxy()/21,getmaxx()/4+3*e-getmaxx()/35,getmaxy()/4+8*e-getmaxx()/35,getmaxx()/4+5*e/2,getmaxy()/4+15*e/2,15,BLACK);

    case 38:
        pioncarre(getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+6*e+getmaxx()/35,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+7*e-getmaxx()/35,getmaxx()/4+7*e/2,getmaxy()/4+13*e/2,15,BLACK);

    case 44:
       pioncarre(getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+7*e+getmaxx()/35,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+8*e-getmaxx()/35,getmaxx()/4+7*e/2,getmaxy()/4+15*e/2,15,BLACK);

    case 5:
        pioncarre(getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+e-getmaxy()/21,getmaxx()/4+25*e/2,getmaxy()/4+e/2,15,WHITE);

    case 6:
        pioncarre(getmaxx()/4+13*e+getmaxx()/35,getmaxy()/4+getmaxy()/21,getmaxx()/4+14*e-getmaxx()/35,getmaxy()/4+e-getmaxy()/21,getmaxx()/4+27*e/2,getmaxy()/4+e/2,15,WHITE);

    case 11:
       pioncarre(getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+25*e/2,getmaxy()/4+3*e/2,15,WHITE);

    case 12:
       pioncarre(getmaxx()/4+13*e+getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+14*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+27*e/2,getmaxy()/4+3*e/2,15,WHITE);

    case 47:
        pioncarre(getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+7*e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+8*e-getmaxy()/21,getmaxx()/4+25*e/2,getmaxy()/4+15*e/2,15,WHITE);

    case 48:
        pioncarre(getmaxx()/4+13*e+getmaxx()/35,getmaxy()/4+7*e+getmaxy()/21,getmaxx()/4+14*e-getmaxx()/35,getmaxy()/4+8*e-getmaxy()/21,getmaxx()/4+27*e/2,getmaxy()/4+15*e/2,15,WHITE);

    case 42:
        pioncarre(getmaxx()/4+13*e+getmaxx()/35,getmaxy()/4+6*e+getmaxy()/21,getmaxx()/4+14*e-getmaxx()/35,getmaxy()/4+7*e-getmaxy()/21,getmaxx()/4+27*e/2,getmaxy()/4+13*e/2,15,WHITE);

    case 14:
        pioncercle(getmaxx()/4+9*e/2,getmaxy()/4+5*e/2,getmaxy()/50,getmaxx()/4+9*e/2,getmaxy()/4+5*e/2,15,BLACK);

    case 20:
        pioncercle(getmaxx()/4+9*e/2,getmaxy()/4+7*e/2,getmaxy()/50,getmaxx()/4+9*e/2,getmaxy()/4+7*e/2,15,BLACK);

    case 26:
        pioncercle(getmaxx()/4+9*e/2,getmaxy()/4+9*e/2,getmaxy()/50,getmaxx()/4+9*e/2,getmaxy()/4+9*e/2,15,BLACK);

    case 32:
        pioncercle(getmaxx()/4+9*e/2,getmaxy()/4+11*e/2,getmaxy()/50,getmaxx()/4+9*e/2,getmaxy()/4+11*e/2,15,BLACK);

    case 15:
        pioncercle(getmaxx()/4+11*e/2,getmaxy()/4+5*e/2,getmaxy()/50,getmaxx()/4+11*e/2,getmaxy()/4+5*e/2,15,BLACK);

    case 21:
        pioncercle(getmaxx()/4+11*e/2,getmaxy()/4+7*e/2,getmaxy()/50,getmaxx()/4+11*e/2,getmaxy()/4+7*e/2,15,BLACK);

    case 27:
        pioncercle(getmaxx()/4+11*e/2,getmaxy()/4+9*e/2,getmaxy()/50,getmaxx()/4+11*e/2,getmaxy()/4+9*e/2,15,BLACK);

    case 33:
        pioncercle(getmaxx()/4+11*e/2,getmaxy()/4+11*e/2,getmaxy()/50,getmaxx()/4+11*e/2,getmaxy()/4+11*e/2,15,BLACK);

    case 16:
         pioncercle(getmaxx()/4+23*e/2,getmaxy()/4+5*e/2,getmaxy()/50,getmaxx()/4+23*e/2,getmaxy()/4+5*e/2,15,WHITE);

    case 22:
         pioncercle(getmaxx()/4+23*e/2,getmaxy()/4+7*e/2,getmaxy()/50,getmaxx()/4+23*e/2,getmaxy()/4+7*e/2,15,WHITE);

    case 28:
         pioncercle(getmaxx()/4+23*e/2,getmaxy()/4+9*e/2,getmaxy()/50,getmaxx()/4+23*e/2,getmaxy()/4+9*e/2,15,WHITE);

    case 34:
         pioncercle(getmaxx()/4+23*e/2,getmaxy()/4+11*e/2,getmaxy()/50,getmaxx()/4+23*e/2,getmaxy()/4+11*e/2,15,WHITE);

    case 17:
        pioncercle(getmaxx()/4+21*e/2,getmaxy()/4+5*e/2,getmaxy()/50,getmaxx()/4+21*e/2,getmaxy()/4+5*e/2,15,WHITE);

    case 23:
        pioncercle(getmaxx()/4+21*e/2,getmaxy()/4+7*e/2,getmaxy()/50,getmaxx()/4+21*e/2,getmaxy()/4+7*e/2,15,WHITE);

    case 29:
        pioncercle(getmaxx()/4+21*e/2,getmaxy()/4+9*e/2,getmaxy()/50,getmaxx()/4+21*e/2,getmaxy()/4+9*e/2,15,WHITE);

    case 35:
        pioncercle(getmaxx()/4+21*e/2,getmaxy()/4+11*e/2,getmaxy()/50,getmaxx()/4+21*e/2,getmaxy()/4+11*e/2,15,WHITE);


    case 3:
        piontriangle(getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+getmaxy()/21,getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+e-getmaxy()/21,getmaxx()/4+4*e+getmaxx()/35,getmaxy()/4+e/2,getmaxx()/4+9*e/2,getmaxy()/4+e/2,BLACK,15);


    case 9:
        piontriangle(getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+4*e+getmaxx()/35,getmaxy()/4+3*e/2,getmaxx()/4+9*e/2,getmaxy()/4+3*e/2,BLACK,15);


    case 13:
        piontriangle(getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+2*e+getmaxy()/21,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+3*e-getmaxy()/21,getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+5*e/2,getmaxx()/4+7*e/2,getmaxy()/4+5*e/2,BLACK,15);

    case 19:
        piontriangle(getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+3*e+getmaxy()/21,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+4*e-getmaxy()/21,getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+7*e/2,getmaxx()/4+7*e/2,getmaxy()/4+7*e/2,BLACK,15);

    case 25:
         piontriangle(getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+4*e+getmaxy()/21,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+5*e-getmaxy()/21,getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+9*e/2,getmaxx()/4+7*e/2,getmaxy()/4+9*e/2,BLACK,15);


    case 31:
        piontriangle(getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+5*e+getmaxy()/21,getmaxx()/4+4*e-getmaxx()/35,getmaxy()/4+6*e-getmaxy()/21,getmaxx()/4+3*e+getmaxx()/35,getmaxy()/4+11*e/2,getmaxx()/4+7*e/2,getmaxy()/4+11*e/2,BLACK,15);

    case 39:
        piontriangle(getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+6*e+getmaxy()/21,getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+7*e-getmaxy()/21,getmaxx()/4+4*e+getmaxx()/35,getmaxy()/4+13*e/2,getmaxx()/4+9*e/2,getmaxy()/4+13*e/2,BLACK,15);


    case 45:
         piontriangle(getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+7*e+getmaxy()/21,getmaxx()/4+5*e-getmaxx()/35,getmaxy()/4+8*e-getmaxy()/21,getmaxx()/4+4*e+getmaxx()/35,getmaxy()/4+15*e/2,getmaxx()/4+9*e/2,getmaxy()/4+15*e/2,BLACK,15);


    case 4:
         piontriangle(getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+getmaxy()/21,getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+e-getmaxy()/21,getmaxx()/4+11*e+getmaxx()/35,getmaxy()/4+e/2,getmaxx()/4+23*e/2,getmaxy()/4+e/2,WHITE,15);


    case 10:
         piontriangle(getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+e+getmaxy()/21,getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+2*e-getmaxy()/21,getmaxx()/4+11*e+getmaxx()/35,getmaxy()/4+3*e/2,getmaxx()/4+23*e/2,getmaxy()/4+3*e/2,WHITE,15);


    case 18:
        piontriangle(getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+2*e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+3*e-getmaxy()/21,getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+5*e/2,getmaxx()/4+25*e/2,getmaxy()/4+5*e/2,WHITE,15);


    case 24:
        piontriangle(getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+3*e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+4*e-getmaxy()/21,getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+7*e/2,getmaxx()/4+25*e/2,getmaxy()/4+7*e/2,WHITE,15);


    case 30:
         piontriangle(getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+4*e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+5*e-getmaxy()/21,getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+9*e/2,getmaxx()/4+25*e/2,getmaxy()/4+9*e/2,WHITE,15);


    case 36:
        piontriangle(getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+5*e+getmaxy()/21,getmaxx()/4+13*e-getmaxx()/35,getmaxy()/4+6*e-getmaxy()/21,getmaxx()/4+12*e+getmaxx()/35,getmaxy()/4+11*e/2,getmaxx()/4+25*e/2,getmaxy()/4+11*e/2,WHITE,15);


    case 40:
        piontriangle(getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+6*e+getmaxy()/21,getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+7*e-getmaxy()/21,getmaxx()/4+11*e+getmaxx()/35,getmaxy()/4+13*e/2,getmaxx()/4+23*e/2,getmaxy()/4+13*e/2,WHITE,15);


    case 46:
        piontriangle(getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+7*e+getmaxy()/21,getmaxx()/4+12*e-getmaxx()/35,getmaxy()/4+8*e-getmaxy()/21,getmaxx()/4+11*e+getmaxx()/35,getmaxy()/4+15*e/2,getmaxx()/4+23*e/2,getmaxy()/4+15*e/2,WHITE,15);

    }
  }
}




