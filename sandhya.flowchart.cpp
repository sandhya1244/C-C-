#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	long int fact;
	printf("enter an integer:");
	scanf("%d",&n);
	fact=1;
	if(n==0//n==1)
	
	{
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
	}
	printf("the factorial of %d is%d",n,fact);
	getch();
	return 0;
}
