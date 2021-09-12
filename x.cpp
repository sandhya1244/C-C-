#include<iostream>
#include<conio.h>
using namespace std;
class number
{
	private:
		int i ;
		public:
			number()
			{
				i=3;
				int function(int);
			}
			
			int function(int j)
			{
				return(j+2);
			}
			int number::function(int j)
			{
				int temp=i;
				i=j;
				return(temp+i);
				
			}
		};
			int main()
			{
				int i=7;
				number n;
				cont<<n.f(i)<<endl;
				cont<<f(i)<<endl;
				cont<<n.f(i)<<endl;
				return 0;
				
			}



