//C program to print ASCII table
#include <stdio.h>
int main()
{
    int i;
    printf("ASCII table\n");
    for (i = 0; i <= 255; i++)
    {
        printf("%d = %c\n", i, i);
    }
    return 0;
}
