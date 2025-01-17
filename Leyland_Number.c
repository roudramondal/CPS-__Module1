#include<stdio.h>
#include<math.h>
int main ()
{
  int a, b;
  scanf("%d%d", &a, &b);
  int sum = pow(a, b) + pow(b, a);
  printf("%d\n", sum);
  return 0;
}