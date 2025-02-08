/* C Program to demonstrate example of left shift (<<) operator.*/

#include <stdio.h>

int main()
{

    int num = 7;

    printf("\nValue of num = %d before left shift.", num);

    /*shifting 2 bytes left*/
    num = (num << 2);
    printf("\nValue of num = %d after left shift.", num);

    return 0;
}
