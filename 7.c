#include <stdio.h>
void main()
{
	int a=7,b,c;
	printf("enter the value");
	scanf("%d",&b);
	c=a*b;
	if(a!=0)
	{
		if(c>a)
		{
			printf("yes multiple %d",c);
		}
		else
		{
			printf("not multiple %d",c);
	
		}
	}
}
