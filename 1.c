#include<stdio.h>
void main()
 {
  int first, second, temp;
  printf("Enter integerr: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %d}
