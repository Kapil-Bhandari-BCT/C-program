//C program to reverse a number and check palindrome

#include<stdio.h>
int main()
{
	int n,r,org,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	org=n;
	
	while(n!=0)
	{
		r=n%10;
		s=10*s+r;
		n=n/10;
	}
	
	printf("The reverse number is %d\n",s);
	
	if(s==org)
	{
		printf("The number is a palindrome.");
		
	}
	else
	{
		printf("The number is not palindrome.");
	}
	return 0;
}
