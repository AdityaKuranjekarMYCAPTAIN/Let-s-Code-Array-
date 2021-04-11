#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3];
	int *p;
	int *f;
	p=&a[0][0];
	int i , j ;
	printf("Enter nine elements for 3*3 array:(Enter from 1 to 9)\n");
	for (i=0;i<9;i++)
	{
		scanf("%d",(p+i));
	}
	printf("\n");
	for (i=0;i<9;i++)
	{
		{
		printf("%d ",*(p+i));
		}
		if (i==2)
		printf("\n");
		if (i==5)
		printf("\n");
	}
	j=a[0][0]+a[1][1]+a[2][2];
	f=&j;
	printf("\n\nSum of diagonal : %d",*f);
	getch();
}
