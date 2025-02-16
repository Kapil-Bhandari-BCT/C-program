//C program to convert Celsius into Fahrenheit
#include<stdio.h>
int main()
{
	 float f, c;  
	  printf("Enter temperature in Celsius: ");
      scanf("%f", &c);
	  f = (c * 9 / 5) + 32;
      printf("Temperature in Fahrenheit = %.2f\n", f);
      return 0;
}
