#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],temp,i,j;
clrscr();
printf("\n enter the array elemnts :");
for(i=0;i<5;i++)
	{
	scanf("\t %d",&a[i]);
	}
		for (i=0;i<5;i++)
		{
			for (j=i+1;j<5;j++)
			{
				if(a[i]>a[j])
				{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
				}
					}
						}
						printf("\n array elements in ascending order are:");
							for (i=0;i<5;i++)
							{
								printf("\t %d",a[i]);
								}
getch();
}

