/* WAP to display 1
                  1 2
                  1 2 3
                  1 2 3 4
                  1 2 3 4 5 */
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int x=1;x<=5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    getch();
}