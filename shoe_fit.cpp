#include<bits/stdc++.h>
using namespace std;
int main ()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a==0||b==0||c==0)&&(a==1||b==1||c==1))
    {
      cout << "1" << endl;
    }
    else
    {
      cout << "0" << endl;
    }
  }
  return 0;
}