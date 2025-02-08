// C program to check a given character is an uppercase character or not without using library function

#include <stdio.h>

int isUppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
    	return 1;
	}
       else{
       	  return 0;
	   } 
  
}

int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (isUppercase(ch))
        printf("Given character is an uppercase character\n");
    else
        printf("Given character is not an uppercase character\n");

    return 0;
}
