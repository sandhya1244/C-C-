#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return(a+b);
}
float sum(float x,float y)
{
	return(x+y);
}
main()
{
	int a,b;
	cout<<"enter the two integer:";
	cin>>a>>b;
	cout<<"the sum of"<<a<<"and"<<b<<"is"<<sum(a,b);
	float x,y;
	cout<<"enter two floating point value:";
	cin>>x>>y;
	cout<<"the sum of"<<x<<"and"<<y<<"is"<<sum(x,y);
	return 0;
	
	
}
