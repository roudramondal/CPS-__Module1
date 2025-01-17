#include<stdio.h>
int main ()
{
   int  a, b;
  scanf("%d%d", &a, &b);
  int   d = a/b;
  int   r = a%b;
  double f =((double)a/b);
  printf("%d %d %.5lf\n", d, r, f);

  return 0;
}