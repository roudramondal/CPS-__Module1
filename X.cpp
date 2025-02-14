#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    double sum =(double(20 * x) / 100);
    double final = 100 / sum;
    cout << ceil(final) << endl;
  }
  return 0;
}