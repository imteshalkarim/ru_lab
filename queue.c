#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[5];
int max=5,front=-1,rear=-1;
int item;
void main()
{
    int choice;
    while(1)
    {
    printf("Menu \n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Traverse \n");
    printf("4. Exit\n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: traverse();
                break;
        case 4: exit(0);
        default: printf("Fuck you\n");
    }
    }
    getch();
}
void enqueue()
{
    if(rear==max-1)
    printf("Overflow\n");
   else if(front==-1)
    {
            front =0;
            rear =0; 
    }
    else{
        printf("Enter data value\n");
        scanf("%d",&item);
        a[rear]=item;
        rear=rear+1;
    }
}
void dequeue()
{
    if(front =-1)
    printf("Underflow");
    else{
        item=a[front];
        printf("Removed element = %d\n",item);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
        front = front +1;
        }
    }
}
void traverse()
{
    for(int x=0;x<max;x++)
    {
        printf("Elements = %d\n",a[x]);
    }
}