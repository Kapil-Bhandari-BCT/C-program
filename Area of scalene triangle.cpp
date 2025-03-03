//C program to calculate the area of a triangle given three sides

#include <stdio.h>
#include <math.h>

float calcuateAreaTriangle(int a, int b, int c)
{
    float s;
    float area;

    s = (float)(a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main()
{
    int a;
    int b;
    int c;

    float area;

    printf("Enter the First edge of Triangle: ");
    scanf("%d", &a);

    printf("Enter the Second edge of Triangle: ");
    scanf("%d", &b);

    printf("Enter the Third edge of Triangle: ");
    scanf("%d", &c);

    area = calcuateAreaTriangle(a, b, c);

    printf("Area of a triangle: %f\n", area);

    return 0;
}
