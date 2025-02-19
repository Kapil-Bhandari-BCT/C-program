#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],rev[20];
	printf("Enter a string: ");
	gets(str);
	int i,l;
	l=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		*(rev+i)=*(str+(l-i-1));
	}
	rev[l]='\0';
	printf("The reverse string is %s",rev);
}
