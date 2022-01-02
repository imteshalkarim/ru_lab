//Display all the factors of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1,c=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(f<=n)
    {
        if(n%f==0)
        {
            printf("%d \n",f);
        }
        f++;
    }
    getch();
}