//WAP to check if a number is palindrome or not. Palindrome numbers are those which are the same even when reversed. Ex - 121
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,s=0;
	printf("Enter a number \n");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		int d=a%10;
		s=s*10+d;
		a=a/10;
	}
	if(s==n)
	printf("Palindrome Number");
	else
	printf("Not a palindrome number");
	getch();
}