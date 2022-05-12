 #include<stdio.h>
 #include<conio.h>
 int main()
 {
	FILE *fp;
	char ch;
	fp = fopen("ATOMC_2.c","r");
	while(1)
	{
	ch=fgetc(fp);
	printf("%c",ch);
	if(ch==EOF)
	break;
	}
	return 1;
 }