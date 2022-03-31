/*create metrix and check it is diagonal or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter value for a[%d][%d]:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("_________________________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("__________________________________________________________\n");
	if(a[0][0]>0 && a[1][1]>0 && a[2][2]>0)
	{
		if(a[i][j]<1)
		{
			printf("THE METRIX IS DIAGONAL");
		}
	}
	else
	{
		printf("THE METRIX IS NOT DIAGONAL");
	}
	getch();
}
