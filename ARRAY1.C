//wap to accept 5 numbers from the useer and print its ascending and decending order
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n[5];
 clrscr();
 for(i=0;i<5;i++)
 {
 printf("\nenter number %d :",i+1);
 scanf("%d",&n[i]);
 }
 printf("\n the numbers in entered order are : ");
 for (i=0;i<5;i++)
 {
 printf("\t %d",n[i]);
 }
 printf("\n the numbers in reverse order are : ");
 for(i=4;i>=0;i--)
 {
 printf("\t %d",n[i]);
 }
 getch();
 }