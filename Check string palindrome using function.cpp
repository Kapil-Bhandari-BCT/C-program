#include<stdio.h>
#include<string.h>
void pali(char str[])
{
char org[10];
strcpy(org,str);
strrev(str);
if(strcmp(str,org)==0)
{
	printf("The string is palindrome ");
	
}
else{
	printf("The strig is not palindrome.");
}
	
}
int main()
{
	char s[10];
	gets(s);
	pali(s);
}
