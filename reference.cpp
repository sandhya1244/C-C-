#include<iostream>
#include<conio.h>
using namespace std;
void swap(int&,int&);
main()
{
	int a=10;
	int b=20;
	cout<<"a="<<a<<"and b="<<b<<endl;
	swap(a,b);
	cout<<"after swap a="<<a<<"and b="<<b<<endl;
	getch();
	return 0;
	
}
void swap(int&x,int&y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
