#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    int sum = x * y;
    double value = (z*100.0)/sum;
    if (value>50)
    {
      cout << "YES" << endl;
    }
    else 
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}