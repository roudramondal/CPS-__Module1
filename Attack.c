#include<stdio.h>
int main ()
{
  long long a, b;
  scanf("%lld%lld", &a, &b);
  long long value = (a + b - 1) / b;
  
  printf("%lld", value);
  return 0;
}