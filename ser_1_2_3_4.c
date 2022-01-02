//Sum of series 1-2+3-4...
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,x=1;
    printf("Enter a limit \n");
    scanf("%d",&n);
    while(x<=n)
    {
        if(x%2!=0)
        s=s+x;
        else if(x%2==0)
        s=s-x;
        x++;
    }
    printf("The sum is = %d",s);
    getch();
}