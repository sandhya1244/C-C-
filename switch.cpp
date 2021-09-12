#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
{
	int a,b,c=0;
	char op;
	printf("enter two integer:\n");
	scanf("%d %d",&a,&b);
	printf("choose an operator(+,-,*,/,%)\n");
	scanf("%c",&op);
	switch(op)
	{
		case'+':
			c=a+b;
			printf("the sum is %d\n",c);
			break;
			case'-':
				c=a-b;
				printf("the difference is %d\n",c);
				break;
				case'*':
					printf("the product is %d\n",a*b);
					break;
					case'/':
						printf("the quotient is%d\n",a/b);
						break;
						case'%':
							printf("the remainder is %d\n",a%b);
							break;
							default:
								printf("invalid operation.\n");
								break;
	}
	getch();
	return 0;
}
