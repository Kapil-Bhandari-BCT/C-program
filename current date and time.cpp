//C program to get current System Date and Time.
#include <stdio.h>
#include <time.h>
int main()
{
    time t;
    time(&t);
    printf("System Date and Time: %s", ctime(&t));
    return 0;
}
