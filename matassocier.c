#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include"headers.h"

extern int A[8][16];
extern int B[8][16];
extern int Pb[2][6], Pn[2][5], Pbr, Pnr;
extern int jj;
extern int ech;
 int  mat()
 {

     int i,j,x,y;
     int  c1=0,c2=0,ec1i,ec1j,ec2i,ec2j;



while(1)
{
      if( ismouseclick (WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN,x,y);

              for(i=0;i<8;i++)
              {
                for(j=0;j<16;j++)


                if((x>getmaxx()/4+j*42)&&( y>getmaxy()/4+i*42)&&(x<getmaxx()/4+j*42+42)&&(y<getmaxy()/4+i*42+42))
                {
                    if(!c1&&!c2&&((jj>0&&B[i][j]>0)||(jj<0&&B[i][j]<0)))
                        {
                            ec1i=i;
                            ec1j=j;
                            printf("clique 1\n");
                            c1=1;

                            setcolor(0);
                            //direction cerle
                            if((B[ec1i][ec1j]==ce)||(B[ec1i][ec1j]==-ce))
                               {
                                   if((A[ec1i+1][ec1j-1]==0)&&((getmaxy()/4+ec1i*42+63)<=(getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+ec1j*42-21,getmaxy()/4+ec1i*42+63,2);
                                      }
                                   if((A[ec1i+1][ec1j+1]==0)&&((getmaxy()/4+ec1i*42+63)<=(getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+ec1j*42+63,getmaxy()/4+ec1i*42+63,2);
                                      }
                                   if((A[ec1i-1][ec1j-1]==0)&&((getmaxy()/4+ec1i*42-21)>=getmaxy()/4))
                                      {
                                           circle(getmaxx()/4+ec1j*42-21,getmaxy()/4+ec1i*42-21,2);
                                      }
                                   if((A[ec1i-1][ec1j+1]==0)&&((getmaxy()/4+ec1i*42-21)>=getmaxy()/4))
                                      {
                                           circle(getmaxx()/4+ec1j*42+63,getmaxy()/4+ec1i*42-21,2);
                                      }
                               }
                            // direction triangle
                            if((B[ec1i][ec1j]==tr)||(B[ec1i][ec1j]==-tr))
                            {
                                if(((A[ec1i-2][ec1j]==0)&&(A[ec1i-1][ec1j]==0))&&((getmaxy()/4+(ec1i-2)*42+21)>=getmaxy()/4))
                                      {
                                          circle(getmaxx()/4+ec1j*42+21,getmaxy()/4+(ec1i-2)*42+21,2);
                                      }
                                if((A[ec1i-2][ec1j-1]==0)&&((getmaxy()/4+(ec1i-2)*42+21)>=getmaxy()/4))
                                      {
                                          circle(getmaxx()/4+(ec1j-1)*42+21,getmaxy()/4+(ec1i-2)*42+21,2);
                                      }
                                if((A[ec1i-1][ec1j-2]==0)&&(((getmaxx()/4+(ec1j-2)*42+21)>=getmaxx()/4)&&(getmaxy()/4+(ec1i-1)*42+21>=getmaxy()/4)))
                                      {
                                          circle(getmaxx()/4+(ec1j-2)*42+21,getmaxy()/4+(ec1i-1)*42+21,2);
                                      }
                                if(((A[ec1i][ec1j-2]==0)&&(A[ec1i][ec1j-1]==0))&&((getmaxx()/4+(ec1j-2)*42+21)>=getmaxx()/4))
                                      {
                                          circle(getmaxx()/4+(ec1j-2)*42+21,getmaxy()/4+(ec1i)*42+21,2);
                                      }
                                if((A[ec1i+1][ec1j-2]==0)&&(((getmaxx()/4+(ec1j-2)*42+21)>=getmaxx()/4)&&(getmaxy()/4+(ec1i+1)*42+21<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j-2)*42+21,getmaxy()/4+(ec1i+1)*42+21,2);
                                      }
                                if((A[ec1i+2][ec1j-1]==0)&&((getmaxy()/4+(ec1i+2)*42+21)<=getmaxy()/4+8*42))
                                      {
                                          circle(getmaxx()/4+(ec1j-1)*42+21,getmaxy()/4+(ec1i+2)*42+21,2);
                                      }
                                if(((A[ec1i+2][ec1j]==0)&&(A[ec1i+1][ec1j]==0))&&(((getmaxy()/4+(ec1i+2)*42+21)<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+ec1j*42+21,getmaxy()/4+(ec1i+2)*42+21,2);
                                      }
                                if((A[ec1i+2][ec1j+1]==0)&&(((getmaxy()/4+(ec1i+2)*42+21)<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+1)*42+21,getmaxy()/4+(ec1i+2)*42+21,2);
                                      }
                                if((A[ec1i+1][ec1j+2]==0)&&(((getmaxx()/4+(ec1j+2)*42+21)<=getmaxx()/4+16*42)&&(getmaxy()/4+(ec1i+1)*42+21<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+2)*42+21,getmaxy()/4+(ec1i+1)*42+21,2);
                                      }
                                if(((A[ec1i][ec1j+2]==0)&&(A[ec1i][ec1j+1]==0))&&((getmaxx()/4+(ec1j+2)*42+21)<=getmaxx()/4+16*42))
                                      {
                                          circle(getmaxx()/4+(ec1j+2)*42+21,getmaxy()/4+ec1i*42+21,2);
                                      }
                                if((A[ec1i-1][ec1j+2]==0)&&(((getmaxx()/4+(ec1j+2)*42+21)<=getmaxx()/4+16*42)&&(getmaxy()/4+(ec1i-1)*42+21>=getmaxy()/4)))
                                      {
                                          circle(getmaxx()/4+(ec1j+2)*42+21,getmaxy()/4+(ec1i-1)*42+21,2);
                                      }
                                if((A[ec1i-2][ec1j+1]==0)&&(((getmaxy()/4+(ec1i-2)*42+21)>=getmaxy()/4)&&(getmaxx()/4+(ec1j+1)*42+21<=getmaxx()/4+16*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+1)*42+21,getmaxy()/4+(ec1i-2)*42+21,2);
                                      }
                            }
                            //direction carre
                            if((B[ec1i][ec1j]==ca)||(B[ec1i][ec1j]==-ca))
                            {
                                if(((A[ec1i-3][ec1j]==0)&&(A[ec1i-2][ec1j]==0)&&(A[ec1i-2][ec1j]==0))&&((getmaxy()/4+(ec1i-3)*42+21)>=getmaxy()/4))
                                      {
                                          circle(getmaxx()/4+ec1j*42+21,getmaxy()/4+(ec1i-3)*42+21,2);
                                      }
                                if((A[ec1i-3][ec1j-1]==0)&&((getmaxy()/4+(ec1i-2)*42+21)>=getmaxy()/4))
                                      {
                                          circle(getmaxx()/4+(ec1j-1)*42+21,getmaxy()/4+(ec1i-3)*42+21,2);
                                      }
                                if((A[ec1i-1][ec1j-3]==0)&&(((getmaxx()/4+(ec1j-3)*42+21)>=getmaxx()/4)&&(getmaxy()/4+(ec1i-1)*42+21>=getmaxy()/4)))
                                      {
                                          circle(getmaxx()/4+(ec1j-3)*42+21,getmaxy()/4+(ec1i-1)*42+21,2);
                                      }
                                if((((A[ec1i][ec1j-3]==0)&&(A[ec1i][ec1j-2]==0))&&(A[ec1i][ec1j-1]==0))&&((getmaxx()/4+(ec1j-3)*42+21)>=getmaxx()/4))
                                      {
                                          circle(getmaxx()/4+(ec1j-3)*42+21,getmaxy()/4+(ec1i)*42+21,2);
                                      }
                                if((A[ec1i+1][ec1j-3]==0)&&(((getmaxx()/4+(ec1j-3)*42+21)>=getmaxx()/4)&&(getmaxy()/4+(ec1i+1)*42+21<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j-3)*42+21,getmaxy()/4+(ec1i+1)*42+21,2);
                                      }
                                if((A[ec1i+3][ec1j-1]==0)&&((getmaxy()/4+(ec1i+3)*42+21)<=getmaxy()/4+8*42))
                                      {
                                          circle(getmaxx()/4+(ec1j-1)*42+21,getmaxy()/4+(ec1i+3)*42+21,2);
                                      }
                                if((((A[ec1i+3][ec1j]==0)&&(A[ec1i+2][ec1j]==0))&&(A[ec1i+1][ec1j]==0))&&(((getmaxy()/4+(ec1i+3)*42+21)<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+ec1j*42+21,getmaxy()/4+(ec1i+3)*42+21,2);
                                      }
                                if((A[ec1i+3][ec1j+1]==0)&&(((getmaxy()/4+(ec1i+3)*42+21)<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+1)*42+21,getmaxy()/4+(ec1i+3)*42+21,2);
                                      }
                                if((A[ec1i+1][ec1j+3]==0)&&(((getmaxx()/4+(ec1j+3)*42+21)<=getmaxx()/4+16*42)&&(getmaxy()/4+(ec1i+1)*42+21<=getmaxy()/4+8*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+3)*42+21,getmaxy()/4+(ec1i+1)*42+21,2);
                                      }
                                if((((A[ec1i][ec1j+3]==0)&&(A[ec1i][ec1j+2]==0))&&(A[ec1i][ec1j+1]==0))&&((getmaxx()/4+(ec1j+3)*42+21)<=getmaxx()/4+16*42))
                                      {
                                          circle(getmaxx()/4+(ec1j+3)*42+21,getmaxy()/4+ec1i*42+21,2);
                                      }
                                if((A[ec1i-1][ec1j+3]==0)&&(((getmaxx()/4+(ec1j+3)*42+21)<=getmaxx()/4+16*42)&&(getmaxy()/4+(ec1i-1)*42+21>=getmaxy()/4)))
                                      {
                                          circle(getmaxx()/4+(ec1j+3)*42+21,getmaxy()/4+(ec1i-1)*42+21,2);
                                      }
                                if((A[ec1i-3][ec1j+1]==0)&&(((getmaxy()/4+(ec1i-2)*42+21)>=getmaxy()/4)&&(getmaxx()/4+(ec1j+1)*42+21<=getmaxx()/4+16*42)))
                                      {
                                          circle(getmaxx()/4+(ec1j+1)*42+21,getmaxy()/4+(ec1i-3)*42+21,2);
                                      }

                                //direction pyram

                            }
                        }

                      else if(c1&&!c2)
                        {
                            ec2i=i;
                            ec2j=j;
                            printf("clique 2\n");
                            c2=1;
                        for(i=ec1i-4;i<ec1i+4;i++)
                            {
                                for(j=ec1j-4;j<ec1j+4;j++)
                                {
                                    if((A[i][j]==0)&&(getmaxx()/4+2+j*42>=getmaxx()/4)&&(getmaxy()/4+2+i*42>=getmaxy()/4)&&(getmaxx()/4+j*42+43<=getmaxx()/4+16*42)&&(getmaxy()/4+i*42+43<=getmaxy()/4+8*42))
                                    {
                                        setfillstyle(SOLID_FILL,(7,8,6) );
                                        rectangle(getmaxx()/4+2+j*42,getmaxy()/4+2+i*42,getmaxx()/4+j*42+43,getmaxy()/4+i*42+43);
                                        floodfill(getmaxx()/4+j*42+10,getmaxy()/4+i*42+10,15);
                                    }
                                }
                            }

                        }
                        if(c2&&!A[ec2i][ec2j])
                        {
                           echange( B[ec1i][ec1j], ec1i, ec1j, ec2i,ec2j);
                           if(ech)
                           {

                                jj=(jj>0)?-1:1;
                                c1=0; c2=0;
                           }

                           else

                           c2=0;
                             for(ec2i=0; ec2i<8; ec2i++)
                                {
                                   for(ec2j=0;ec2j<16;ec2j++)
                                    {
                                        float cx, cy;
                                        int e=42;
                                       if(A[ec2i][ec2j])
                                       {
                                           cx=getmaxx()/4+e/2.0+ec2j*e;
                                           cy=getmaxy()/4+e/2.0+ec2i*e;
                                           pion( (int)cx,(int)cy, A[ec2i][ec2j], B[ec2i][ec2j]);

                                       }
                                    }
                                }

                           ech=0;
                        }

                        else if((c2&&A[ec2i][ec2j])&&((jj>0&&B[ec2i][ec2j]>0)||(jj<0&&B[ec2i][ec2j]<0)))
                          {
                            ec1i=ec2i;
                            ec1j=ec2j;
                            c2=0;

                          }
                        else if((c2&&A[ec2i][ec2j])&&((jj>0&&B[ec2i][ec2j]<0)||(jj<0&&B[ec2i][ec2j]>0)))
                        {
                            prise(ec1i,ec1j,ec2i,ec2j);
                            prise_ar(ec1i,ec1j,ec2i,ec2j);
                            for(ec1i=0; ec1i<8; ec1i++)
                                {
                                   for(ec1j=0;ec1j<16;ec1j++)
                                    {
                                        float cx, cy;
                                        int e=42;
                                       if(A[ec1i][ec1j])
                                       {
                                           cx=getmaxx()/4+e/2.0+ec1j*e;
                                           cy=getmaxy()/4+e/2.0+ec1i*e;
                                           pion( (int)cx,(int)cy, A[ec1i][ec1j], B[ec1i][ec1j]);

                                       }
                                    }
                                }
                            jj=(jj>0)?-1:1;
                            c1=0;c2=0;
                          }
                         }

                       }
                    }






         if(ismouseclick (WM_RBUTTONDOWN))
         {
             getmouseclick(WM_RBUTTONDOWN,x,y);

              for(i=0;i<8;i++)
              {
                for(j=0;j<16;j++)


                if((x>getmaxx()/4+j*42)&&( y>getmaxy()/4+i*42)&&(x<getmaxx()/4+j*42+42)&&(y<getmaxy()/4+i*42+42))
                {
                    if(B[i][j]==py)
                    {
                        Pnr=(Pnr==4)?0:Pnr+1;
                        ec1i=i;
                        ec1j=j;
                        c1=1;
                        board();
                    }
                    else if(-B[i][j]==py)
                    {
                        Pbr=(Pbr==5)?0:Pbr+1;;
                        ec1i=i;
                        ec1j=j;
                        c1=1;
                        board();
                    }

                }

              }
           }
        }
 }






