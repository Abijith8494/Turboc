#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm=0,i,j,k;
   clrscr();
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   cleardevice();
   for(i=0;i<200;i++)
   for(j=0;j<100;j++)
   for(k=0;k<50;k++)
   {
   putpixel(300+i,200,90);
   putpixel(400,100+i,90);
   putpixel(400-j,100+j,90);
   putpixel(400+j,100+j,90);
   putpixel(300+j,200+j,90);
   putpixel(500-j,200+j,90);
   putpixel(400+k,300+k,90);
   putpixel(400-k,300+k,90);
   putpixel(350+j,350,90);
   putpixel(400,350+k,90);


   }
   getch();
   closegraph();
   }