#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int  main ()
{
  int n, m, k;
  cin >> n >> k >> m;
  int s = 0;
  for (int i = 0; i < n - 1;i++)// loop 
  {
    int a;
    cin >> a;
    s += a;
  }
  int remaining = n * m - s;
  if (remaining>k)// condition check 
  {
    cout << "-1" << endl;
  }
  else 
  {
    cout << max(0, remaining) << endl;
  }
  return 0;
}
