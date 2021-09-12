#include<iostream>
#include<conio.h>
using namespace std;
int OR(int a,int b);
main()
{
	int a,b,c;
	cout<<"the truth table of OR operation is given below"<<endl;
	cout<<"values\t b=0\t b=1"<<endl;
	a=0,b=0;
	c=OR(a,b);
	cout<<"a=0\t"<<c;
	a=0,b=1;
	c=OR(a,b);
	cout<<"\t"<<c;
	a=1,b=0;
	c=OR(a,b);
	cout<<"\t"<<c;
	getch();
	return 0;
	
}
int OR(int a,int b)
{


if ( a::b==1)
	
	
	return 1;

	else
	return 0;
}

