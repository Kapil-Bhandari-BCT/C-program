#include <stdio.h>

int main() {
    int num;

    start: 
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input! Please try again.\n");
        goto start;  
    }

    printf("You entered: %d\n", num);
    return 0;
}
