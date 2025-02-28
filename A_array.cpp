#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n;i++)
  {
    int ans = 0;
    int wk[7];
    for (int j = 0; j <7;j++)
    {
      cin >> wk[j];
      ans += wk[j];
    }
    cout << ans <<" ";
  }
  return 0;
}