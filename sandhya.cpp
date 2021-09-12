#include<iostream.h>
#include<conio.h>
using namespace std
float simple_interest(float p,floatt=0.5,float r=5);
main()
{
	float p,t,r,i;
	cout<<"input p,t,r";
	cin>>p>>t>>r;
	i=simple_interest(p,t,r);
	cout<<"si="<<i<<endl;
	cout<<"si with default interest=";
	i=simple interest(p,t);
	cout<<i;
	cout<<"si with default t and r=";
	i=simple_interest(p);
	cout<<i;
	getch();
	return0;
}
