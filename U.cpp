#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int value = min(20, x / y);
    cout << value << endl;
  }
   
  return 0;
}