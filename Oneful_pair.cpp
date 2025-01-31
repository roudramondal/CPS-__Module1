#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b;
  cin >> a >> b;
  int sum = a + b + (a * b);
  if (sum ==111)
  {
    cout << "Yes" << endl;
  }
  else 
  {
    cout << "No" << endl;
  }
  return 0;
}