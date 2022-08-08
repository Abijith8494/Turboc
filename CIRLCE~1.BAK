#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

void main() {
	//initilizing graphic driver and 
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph function with 
	//certain parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(10, 10 + 10, "Program to draw circle and ellipse in C graphics");

	//calling circle function
	circle(100, 100, 50);

	//calling ellipse function
	ellipse(300,110,0,360,100,50);

	getch();
}