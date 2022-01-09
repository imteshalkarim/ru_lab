//WAP to calculate the sum of 1 - x^2/2! + x^3/3! - x^4/4!
#include<stdio.h>
#include<conio.h>
void main()
{
    float s=1.0,n=0.0;
    printf("Enter a number \n");
    scanf("%f",&n);
    for(int x=2;x<=4;x++)
    {
        float a=x,f=1.0,p=1.0;
        while(a>0)
        {
            f=f*a;
            a--;
        }
        for(int y=1;y<=x;y++)
        {
            p=p*n;
        }
        if(x%2==0)
        s=s-p/f;
        else
        s=s+p/f;
    }
    printf("Result = %f",s);
    getch();
}