#include<bits/stdc++.h>
using namespace std;
int main ()
{
  // sum of the column ;
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n;i++)
  {
    for (int j = 0; j < m;j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int j = 0; j < m;j++)
  {
     int sum = 0;
    for (int i = 0; i < n;i++)
    {
     
      sum += arr[i][j];
      
    }
    cout << sum<<" "<<endl;
  }
  
  return 0;
}