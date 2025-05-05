// find gcd
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  int g = 0;
  for (int i = 1; i <= max(x, y);i++)
  {
    if (x%i==0&&y%i==0)
    {
      g = i;
    }
  }
  cout << g << endl;

  // short formula to finding gcd 
  // cout<<__gcd(x,y) <<endl;
  return 0;
}
