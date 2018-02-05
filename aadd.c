#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of  a and b");
	scanf("%d %d",&a,&b);
c=a+b;
if(c%2==0)
{
	printf("the value is %d even",c);
}
else
{
	printf("the value is %d odd",c);
}
return 0;
}
