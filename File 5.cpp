#include <stdio.h>

struct students {
    char name[30], address[30];
    int age;
    float phy, C, math;
} s[3], st[3];

int main() {
    FILE *fptr;
    int i;

    // Open file in binary write mode
    fptr = fopen("D:\\std.txt", "wb"); 
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input details for 3 students
    for(i = 0; i < 3; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Enter name and address: ");
        scanf("%s %s", s[i].name, s[i].address);

        printf("Enter age: ");
        scanf("%d", &s[i].age);

        printf("Enter marks in Physics, C, and Math: ");
        scanf("%f %f %f", &s[i].phy, &s[i].C, &s[i].math);
    }

    // Write student data to file
    fwrite(s, sizeof(struct students), 3, fptr);
    fclose(fptr);  // Close the file after writing

    // Open file in binary read mode
    fptr = fopen("D:\\std.txt", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read student data from file
    fread(st, sizeof(struct students), 3, fptr);

    // Display the data read from the file
    printf("\nThe data in the file is:\n");
    for(i = 0; i < 3; i++) {
        printf("Name=%s Address=%s Age=%d Phy_marks=%.2f C_marks=%.2f Math_marks=%.2f\n", 
            st[i].name, st[i].address, st[i].age, st[i].phy, st[i].C, st[i].math);
    }

    fclose(fptr);  // Close the file after reading
    return 0;
}
