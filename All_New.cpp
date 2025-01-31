#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int x, y;
  cin >> x >> y;
  if (x>y)
  {
    cout << "New" << endl;
  }
  else if (x<y)
  {
    cout << "Old" << endl;
  }
  else
  {
    cout << "Same" << endl;
  }
  return 0;
}