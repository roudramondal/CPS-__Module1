#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, x;
  cin >> a >> x;
  int sum1 = 2 * a + x;
  int b, y;
  cin>>b>>y;
  int sum2 = 2 * b + y;
  // cout << sum1 <<" "<<sum2<< endl;
  if (sum1>sum2)
  {
    cout << "Messi" << endl;
  }
  else if (sum1<sum2)
  {
    cout << "Ronaldo" << endl;
  }
  else
  {
    cout << "Equal" << endl;
  }
  return 0;
}