//Program to check the string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
	char string[20],org[20];
	
	printf("Enter a string: ");
	scanf("%s",string);
	
	strcpy(org,string);
	
	strrev(string);
	
	if(strcmp(string,org)==0)
	{
		printf("The string is palindrome.");
	}
	
	else
	{
		printf("The string is not palindrome");
	}
	
	return 0;
}
