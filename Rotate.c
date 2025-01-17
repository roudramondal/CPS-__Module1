#include<stdio.h>
int main()
{
  char  a, b, c;
  scanf("%c%c%c", &a, &b, &c);
  int d1=a-'0';
  int d2 = b - '0';
  int d3 = c - '0';
  int sum =111*(d1 + d2 + d3);
  printf("%d\n", sum);
  return 0;
}