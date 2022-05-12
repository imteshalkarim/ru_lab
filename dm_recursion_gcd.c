#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
	if(a==0)
	return b;
	if(b==0)
	return a;
	if(a>b)
	gcd(a%b,b);
	if(b>a)
	gcd(a,b%a);
}
void main()
{
	int x,y,res=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	if(x==y)
	printf("The GCD is = %d",x);
	else
	{
	res=gcd(x,y);
	printf("The GCD is = %d",res);
	}
}