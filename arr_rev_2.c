//Reversing an array without reverse looping
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3];
    int a=0,b=2,c=0;
    printf("Enter elements \n");
    for(int x=0;x<3;x++)
    {
        printf("Enter element\n");
        scanf("%d",&arr[x]);
    }
    while(a<b)
    {
        c=arr[a];
        arr[a]=arr[b];
        arr[b]=c;
        a++;
        b--;
    }
    printf("In Reverse \n");
    for(int x=0;x<3;x++)
    {
        printf("%d",arr[x]);
    }
    getch();
}