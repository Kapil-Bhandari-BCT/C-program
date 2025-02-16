//C program to print value in Decimal, Octal, Hexadecimal using printf
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a decimal numer: ");
    scanf("%d",&a);
    printf("Value of a in Decimal: %d\n", a);
    printf("Value of a in Octal: %o\n", a);
    printf("Value of a in Hexadecimal: %X\n", a);
    return 0;
}
