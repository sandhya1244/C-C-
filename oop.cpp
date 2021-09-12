#include <iostream>
#include<conio.h>
using namespace std;
class sample
{
	private:
	int x;
	public:
		sample operator ++()
		{
			x++;
			return sample(x);
		}
		sample (int a)
		{
			x=a;
		}
	

};
 main()
{
	sample s1;
	sample s1(10);
	s=s1++;
	getch();
	return 0;
}

