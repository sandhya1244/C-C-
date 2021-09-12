#include<iostream>
using namespace std;
#include<conio.h>
int OR(int a,int b);
main()
{
	int a,b,c;
	cout<<"the truth table of OR operation is given below"<<endl;
	cout<<"the values\t b=0 \t b=1"<<endl;
	a=0,b=0;
	c=OR(a,b);
	cout<<c<<endl;
	a=1,b=0;
	c=OR(a,b);
	cout<<c<<endl;
	a=1,b=1;
	c=OR(a,b);
	cout<<c;
	getch();
}
int OR(int a,int b)
{
	if (a::b==1)
	return 1;
	else
	return 0;
}
