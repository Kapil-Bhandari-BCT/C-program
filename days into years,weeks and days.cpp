// C program to convert a given number of days into
// days, weeks, and years

#include <stdio.h>

int main()
{
    int ndays;
    int years;
    int weeks;
    int days;

    printf("Enter days: ");
    scanf("%d", &ndays);

    years = ndays / 365;
    weeks = (ndays % 365) / 7;
    days = (ndays % 365) % 7;

    printf("%d years, %d weeks and %d days\n", years, weeks, days);

    return 0;
}
