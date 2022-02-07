/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
  float average;

  printf("Enter the 1st mark = ");
  scanf("%d",&mark1);
  printf("Enter the 2nd mark = ");
  scanf("%d",&mark2);

  average = (mark1 + mark2)/2;

  printf("average = %.2f",average);
  
  return 0;
}

