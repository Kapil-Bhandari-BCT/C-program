// C program to read coordinate point and determine its quadrant

#include <stdio.h>

int main()
{
    int X;
    int Y;

    int ret = 0;

    printf("Enter the value of X: ");
    scanf("%d", &X);

    printf("Enter the value of Y: ");
    scanf("%d", &Y);
  
   if (X == 0 && Y == 0)
        {
        	printf("The coordinate lies on the origin");
		}
    else if (X > 0 && Y > 0)
        {
        	printf("The coordinate lies in the first quadrant");
		}
    else if (X < 0 && Y > 0)
        {
        	printf("The coordinate lies in the second quadrant");	
		}
    else if (X < 0 && Y < 0)
        {
        	printf("The coordinate lies in the third quadrant");
		}
    else if (X > 0 && Y < 0)
        {
        	printf("The coordinate lies in the fourth quadrant");
		}

    return 0;
}
