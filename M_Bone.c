#include<stdio.h>
int main()
{
  int a, b, x, y;
  scanf("%d%d%d%d", &a, &b, &x, &y);
  int value = a * x;
  int value2 = b * y;
  int sum = value + value2;
  printf("%d\n", sum);
  return 0;
}