#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int max_quality = INT_MIN;
    int response_number = 0;
    for (int i = 1; i <= n;i++)
    {
      int a, b;
      cin >> a >> b;
      if (a>10)
      {
        continue;
      }
      if (b>max_quality)
      {
        max_quality = b;
        response_number = i;
      }
     
    }
    cout << response_number << endl;
 }
 return 0;
}