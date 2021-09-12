#include<iostream>
#include<conio.h>
class my class
{
	private:
		int x,y;
		public:
			void get()
			{
				cin>>x>>y;
			}
			  myclass()
			{
				x=y=0;
				
			}
			friend int add(myclass m)
	};
		int add(my class m)
		{
			return(m.x+m.y);
			
		}
		main()
		{
			my class m1;
			m1.get();
			int s=add (m1)
			cout<<"sum="<<s;
			getch();
			return 0;
		}
		

