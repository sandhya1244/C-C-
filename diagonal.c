#include<stdio.h>
int main()
{ int a[3][3],i,j,f;
for(i=0;i<3;i++)
{
	for(j=0;j<3;i++)
	{
		printf("\n enter the value a[%d][%]::i,j");
		scanf("%d",&a[i][j]);
	}
}

printf("\n the matrix is...\n");
for(i=0;i<3;i++){
	for(j=0;j<3;i++)
	
	{
	printf("%d",a[i][j]);
		
	}
	printf("\n");
}
for(i=0;i<3;i++)

{for(j=0;j<3;i++)
{
	if(a==j & [a][j]==0)
	{f=1;
	break;
	}
	else if(a!=j & [a][j]!=0) 
	
	{ f=1;
	break;
}

}
}
if(f==0)
{printf("the matrix is diagonal\n");

}
else{ printf("the matrix is non diagonal");
}
getch();
}

