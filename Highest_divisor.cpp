#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int sum = -1;
  for (int i = 1; i <= 10;i++)
  {
    if (n%i==0)
    {
      sum = max(sum, i);
    }
  }
  cout << sum << endl;
  return 0;
}