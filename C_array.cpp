#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  for (int i = n - k; i <= n-1;i++)
  {
    cout << a[i]<<" ";
  }
  for (int j = 0; j < n - k;j++)
  {
    cout << a[j]<<" ";
  }
  return 0;
}