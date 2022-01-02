// Sum of series s= 1+ 1/2 +1/3 + 1/4 + ... +1/n
#include<stdio.h>
#include<conio.h>
void main()
{
    float n,s=0.0,x=1.0;
    printf("Enter a limit \n");
    scanf("%f",&n);
    while(x<=n)
    {
        s=s+(1/x);
        x++;
    }
    printf("The sum is = %f",s);
    getch();
}