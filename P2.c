#include<stdio.h>
int main()
{
  int a, b, temp;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  printf("Before Swapping, First number = %d",a);
  printf("\nBefore Swapping, Second number = %d",b);
  temp = a;
  a = b;
  b = temp;
  printf("\nAfter Swapping, First number = %d",a);
  printf("\nAfter Swapping, Second number = %d\n",b);
  return 0;
}
