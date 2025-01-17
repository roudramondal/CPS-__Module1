#include<stdio.h>
int main()
{
  int x, y;
  scanf("%d%d", &x, &y);
  int x2 = x;
  int x3 = x;
  int x4 = x;
  int x5 = x;
  int x6 = x;
  int sum = x + x2 + x3 + x4 + x5 + x6 + y;
  printf("%d\n", sum);
  return 0;
}