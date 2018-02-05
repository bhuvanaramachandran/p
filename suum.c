#include<stdio.h>
int main()
{
int a,sum=0;
printf("enter the number");
scanf("%d",&a);
for(a=1;a<10000;a++)
{
sum=sum+a;
printf("the value is %d",sum);
}
return 0;
}
