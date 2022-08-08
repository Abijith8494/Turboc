#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm=0,i;
float sx,sy,t,l,b,r;
clrscr();
initgraph(&gm,&gd,"c://turboc3//bgi");
cleardevice();
for(i=0;i<250;i++){
line(230-1,177,512-i,177);
line(513-i,177,459-i,254);
line(459-i,254,274-i,254);
line(274-i,254,230-i,177);
line(230-i,177,458-i,95);
line(458-i,95,490-i,177);
delay(100);
cleardevice();
line(230-1,177,512-i,177);
line(510-i,177,459-i,254);
line(459-i,254,274-i,254);
line(274-i,254,230-i,177);
line(230-i,177,458-i,95);
line(458-i,95,490-i,177);
}
}