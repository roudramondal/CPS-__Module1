#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int c = (a + b) / 2;
    if (a<=b)
    {
      int sum = (c - a) + (b - c);
      cout << sum << endl;
    }
    else
    {
      cout << "0" << endl;
    }
  }
  return 0;
}