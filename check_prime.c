//Check for prime number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=2,c=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(f<n)
    {
        if(n%f==0)
        {
            c++;
            break;
        }
        f++;
    }
    if(c==0)
    printf("Prime number \n");
    else
    printf("Not a prime number");
    getch();
}