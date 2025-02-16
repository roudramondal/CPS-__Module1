#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, d;
    cin >> n >> x >> d;
    int sum1 = 5 * x;
    int sum2 = n / sum1;
    int sum3 = sum2 + d;
    cout << sum3 << endl;
  }
  return 0;
}