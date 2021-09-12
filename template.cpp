#include<iostream>
using namespace std;
template <class t>
void sort (t a[],int n)
{
	int i,j;
	t temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
}
main()
{
	int a[10];
	cout<<"input 10 integer:";
	int i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	sort(a,5);
	cout<<"sorted list of integer:";
	for(i=0;i<5;i++)
	cout<<a[i]<<endl;
	char c[5];
	cout<<"input 10 character:";
	for(i=0;i<5;i++)
	cin>>c[i];
	sort(c,5);
	cout<<"sorted list of character:";
	for(i=0;i<5;i++)
	cout<<c[i]<<endl;
	return 0;
	
	
	
}
