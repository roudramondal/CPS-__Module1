#include<bits/stdc++.h>
using namespace std;
int  main ()
{
  int n, m;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  int ans = 0;
  for (int j = 0; j < m;j++)
  {
    int k;
    cin >> k;
    ans += a[k - 1];
  }
  cout << ans << endl;
  return 0;
}