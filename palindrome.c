#include <stdio.h>
int main()
{
int rev,r,n,pal;
printf("enter the number");
scanf("%d",&n);
rev=0;
pal=n;
while(n>0)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
}
if(pal==rev)
{
	printf("the given number is palindrome");
}
	else
	{
printf("the given number is not palindrome");
}
return 0;
}
