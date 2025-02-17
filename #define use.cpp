#include<stdio.h>
#define PI 3.14

int main()
{
	float r,area;
	printf("Enter radius of circle: ");
	scanf("%f",&r);
	area=PI*r*r;
	printf("The area of circle is %.2f",area);
	return 0;
	
}
