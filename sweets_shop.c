#include<stdio.h>
int main ()
{
  int n, x;
  scanf("%d%d", &n, &x);
  int value = n - 10 * x;
  int final_value = (value / 20);
  printf("%d\n", final_value);
  return 0;
}