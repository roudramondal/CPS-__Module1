#include <bits/stdc++.h>
using namespace std;
int main  ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    int sum = x * y;
    int time = z * 24 * 60;
    if (sum <= time)
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