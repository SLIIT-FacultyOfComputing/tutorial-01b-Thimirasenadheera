/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int n1 , n2 ;
  float avg ;
  printf("enter marks : ");
  scanf("%d%d",&n1,&n2);

  avg = n1 + n2 / 2.0 ;

  printf("%.2f",avg);


  
  return 0;
}

