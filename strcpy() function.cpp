#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str2[20];
	printf("Enter a string: ");
	gets(str);
	strcpy(str2,str);
	printf("The copied string is %s",str2);
	return 0;
	
}
