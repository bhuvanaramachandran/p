#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
switch(ch)
{
	case'a':
	case'A':
	case'e':
	case'E':
	case'i':
	case'I':
	case'o':
	case'O':
	case'u':
	case'U':
	printf("\n%c is vowel",ch);
	break;
	printf("\n %c is not a vowel",ch);
	break;
}
return 0;
}
