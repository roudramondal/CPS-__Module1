#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a>b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
  if (a>c)
  {
    int temp = a;
    a = c;
    c = temp;
  }
  if (b>c)
  {
    int temp = b;
    b = c;
    c = temp;
  }
  cout << a << " " << b << " " << c << endl;
  return 0;
}