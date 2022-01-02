/* Write a function to find whether a given no. is prime or not. Use the same to
generate theprime numbers less than 100. */
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
    printf("Not a prime number\n");
    printf("Now printing prime numbers less than 100\n");
    for(int x=1;x<=100;x++)
    {
        int fa=2,ctr=0;
        while(fa<x)
        {
            if(x%fa==0)
            {
                ctr++;
                break;
            }
            fa++;   
        }
        if(ctr==0)
        printf("%d\n",x);
    }
    getch();
}