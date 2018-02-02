#include <stdio.h>
 int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
if(a!=0)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf(" after swapping %d %d",a,b);
	return 0;
}
}
