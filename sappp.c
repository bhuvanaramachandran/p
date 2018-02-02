#include <stdio.h>
 
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		int t;
		t=a;
		a=b;
		b=t;
		printf(" after the swapping %d %d",a,b);
	}
}
