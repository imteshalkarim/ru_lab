//Perfect Number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1,c=0,s=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(f<n)
    {
        if(n%f==0)
        {
            s=s+f;
        }
        f++;
    }
    if(s==n)
    printf("Perfect Number \n");
    else
    printf("Not a perfect number \n");
    getch();
}