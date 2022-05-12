#include<stdio.h>
#include<conio.h>
int bincoff(int n,int k)
{
	if(k>n)
	return 0;
	if(k==0||k==n)
	return 1;
	if(n>=k)
	return bincoff(n-1,k-1)+bincoff(n-1,k);
}
int main()
{
	int x,y,res=0;
	printf("Enter total terms and required codefficient\n");
	scanf("%d%d",&x,&y);
	res=bincoff(x,y);
	printf("The result is = %d",res);
	return 0;
}