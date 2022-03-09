/*wap to enter to 3 by 3 matrix and and print a multiplacation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
	     {
		printf("\n enter value m1[%d][%d]:",i,j);
		scanf("%d",&m1[i][j]);
	     }
	}
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
	     {
		printf("\n enter value m2[%d][%d]:",i,j);
		scanf("%d",&m2[i][j]);
	     }
	}

	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
		m3[i][j]=m1[i][j]*m2[i][j];
	   }
	}
	for(i=0;i<3;i++)
	{
	     for(j=0;j<3;j++)
	     {
	       printf(" \t%d",m3[i][j]);
	     }
	     printf("\n");
	}
	getch();
}
