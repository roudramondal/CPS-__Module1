#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int A = a1 - a2;
    int B = b1 - b2;
    int sum = A + B;
    if (sum<=-1)
    {
      cout << "YES" << endl;
    }
    else 
    {
      cout << "NO" << endl;
    }
  }
  
}