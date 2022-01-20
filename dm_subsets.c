#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    char str[]="abcd";
    int len,steps,i,j,ctr=0;
    len=strlen(str);
    steps=pow(2,len);
    while(ctr<steps)
    {
        j=0;
        while(j<len)
        {
            if(ctr & (1<<j))
            {
                printf("%c",str[j]);
            }
            j++;
        }
        ctr++;
        printf("\n");
    }
}