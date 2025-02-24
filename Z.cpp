#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int sum = a1 + a2 + a3;
    int max = a1;
    int min = a1;
    if (a2>max)
    {
      max = a2;
    }
    if (a3>max)
    {
      max = a3;
    }
    if (a2<min)
    {
      min = a2;
    }
    if (a3<min)
    {
      min = a3;
    }
    int x = sum - max - min;
    int alice = max* 100 + x * 10 + min;
    sum = b1 + b2 + b3;
    max = b1;
    min = b1;
    if (b2>max)
    {
      max = b2;
    }
    if (b3>max)
    {
      max = b3;
    }
    if (b2<min)
    {
      min = b2;
    }
    if (b3<min)
    {
      min = b3;
    }
    int y = sum - max - min;
    int bob = max * 100 + y * 10 + min;
    if (alice<bob)
    {
      cout << "Bob" << endl;
    }
    else if (alice>bob)
    {
      cout << "Alice" << endl;
    }
    else
    {
      cout << "Tie" << endl;
    }
  }
  return 0;
}