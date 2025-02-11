#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, n;
    cin >> x >> n;
    if (x==n || x<=n)
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