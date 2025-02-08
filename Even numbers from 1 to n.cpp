//C program to print even numbers from 1 to n

#include <stdio.h>

int main() {
  
  int i=1;
  int n;
 printf("Enter the value of N: ");
  scanf("%d", & n);
 printf("Odd Numbers from 1 to %d:\n", n);

 
  while (i <= n) {
  if (i % 2 == 0)
  {
  	  printf("%d ",i);
  }
     i++;
  }

  return 0;
}
