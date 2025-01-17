#include<stdio.h>
int main ()
{
  double r;
  scanf("%lf", &r);
  double area =  3.14159265359 * r * r;
  double circumference = 2 *  3.14159265359* r;
  printf("%6lf %.6lf\n", area, circumference);
  return 0;
}