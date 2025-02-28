#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n;i++)
    {
      int a;
      cin >> a;
      if (a%2!=0)
      {
        count++;
      }
      else{

      }
    }
    cout << count << endl;
  }
  
}