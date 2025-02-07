//C program to find the number of vowels in a string

#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	strupr(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
		}
	}
	
	printf("The number of vowel letters in given string is %d",count);
	return 0;
}
