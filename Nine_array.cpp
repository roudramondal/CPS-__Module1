#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b;
  cin >> a >> b;
  // Check if A and B are in the same row AND B is exactly one greater than A.
  if ((a+1==b)&&(a%3!=0))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
