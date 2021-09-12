#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class stack
{
	protected:
		int a[10];
		int top;
		public:
			stack()
			{
				top=-1;
			}
			void push(int x)
			{
				a[++ top]=x;
			}
			int pop()
			{
				return a[top--];
			}
			
};
class Stack:public stack
{
	public:
		Stack():stack()
		{
		}
		void push (int x)
		{
			if(top>=10-1)
			{
			
			cout<<"stack overflow:";
			return;
		}
		
		stack::push(x);
}
int pop()
{
	if(top==-1)
	{
		cout<<"stack underflow:";
		getch();
		exit(0);
		
	}
	stack::pop();
}
};
	
main()
{
	Stack s;
	s.push(10);
	s.push(80);
	cout<<"the value popped is:";
	int x=s.pop();
	cout<<x;
	getch();
	return 0;
}
