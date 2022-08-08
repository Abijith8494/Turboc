#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

void main(){
int gdriver=DETECT,gmode,col=480,row=640,font=4,direction=2,size=8,color=15;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
cleardevice();
while(!kbhit()){
    settexts
    tyle(random(font),random(direction),random(size));
    setcolor(random(color));
    outtextxy(random(col),random(row),"Nandini Shigavan");
    delay(300);
}
closegraph();
}