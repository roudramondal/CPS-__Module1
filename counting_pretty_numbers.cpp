#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int l, r;
    cin >> l >> r;
    int count = 0;
      for (int i = l; i <=r;++i)
      {
        int last_digit = i % 10;
        if (last_digit==2||last_digit==3||last_digit==9)
        {
          count++;
          
        }
      }
    cout << count << endl;
  }
  return 0;
}