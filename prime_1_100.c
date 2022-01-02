//All prime numbers between 1 to 100
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int x=1;x<=100;x++)
    {
        int f=1,c=0;
        while(f<=x)
        {
            if(x%f==0)
            c++;
            f++;   
        }
        if(c==2)
        printf("%d\n",x);
    }
    getch();
}