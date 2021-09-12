#include<iostream>
#include<conio.h>
using namespace std;
class radian
{
	private:
		float r;
		public:
			radian()
			{
				r=0;
				
			}
			radian(float radian)
			{
				r=radian;
				
			}
			void display()
			{
				cout<<"the radian is:";
				cout<<r;
			}
};
class degree
{
	private:
		float d;
		public:
			degree()
			{
				d=0;
			}
			degree(float degree)
			{
				d=degree;
				
			}
			void display()
			{
				cout<<"the degree is:";
				cout<<d;
				
			}
			operator radian()
			{
				float a;
				a=d*0.0175;
				return radian (a);
			}
};
main()
{
	radian r;
	degree d(80);
	r=d;
	d.display();
	r.display();
	getch();
	return 0;
}
