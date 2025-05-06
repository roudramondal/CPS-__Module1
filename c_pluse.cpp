#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int x, y;
    cin >> x >> y;
    for (int i = x; i <= y;i++)
    {
      if (i%2==0)
      {
        cout << i << endl;
        return;
      }
    }
    cout << -1 << endl;
}
int main ()
{
  int T;
  cin >> T;
  for (int tc = 1; tc <= T;tc++)
  {
    solve();
  }
  return 0;
}