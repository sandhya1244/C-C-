#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int a,b,r;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	if (a>0 && b>0)
	{
		r=gcd(a,b);
		printf("the gcd is %d",r);
		
	}
	getch();
	return 0;	
	
	
}
