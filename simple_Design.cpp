#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
    int k;
    cin>>x>>k;
    while (true)
    {
      int sum = 0, temp = x;
      while (temp>0)
      {
        sum += temp % 10;
        temp /= 10;
      }
      if (sum%k==0)
    {
      cout << x << endl;
      break;
    }
    else{
      x++;
    }
    }

   // cout << endl;
}
return 0;
}