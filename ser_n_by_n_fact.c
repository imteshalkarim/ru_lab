//WAP to display the sum of  1/1! + 2/2! + ...+ n/n!
#include<stdio.h>
#include<conio.h>
void main()
{
    float n,s=0.0;
    printf("Enter a number\n");
    scanf("%f",&n);
    for(float x=1;x<=n;x++)
    {
        float a=x,f=1.0;
        while(a>0)
        {
            f=f*a;
            a--;
        }
        s=s+x/f;
    }
    printf("Result = %f", s);
    getch();
}