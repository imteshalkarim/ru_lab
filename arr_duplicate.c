//WAP to delete all duplicate elements from an array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],c=5,x=0,y=0,z=0; //c is for array size
    printf("Enter elements into the array\n");
    for(x=0;x<5;x++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[x]);
    }
    for(x=0;x<c;x++)
    {
        for(y=x+1;y<c;y++)
        {
            if(a[x]==a[y])
            {
                for(z=y;z<c;z++)
                {
                a[z]=a[z+1];
                }
                c--;
                y--;
            }
        }
        
    }
        printf("The new array is \n");
        for(x=0;x<c;x++)
        {
            printf("%d\n",a[x]);
        }
        getch();
}