#include<bits/stdc++.h>
using namespace std;
int main ()
{
  // skip some value from the array;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n;i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n;i++)
  {
    if (i==4||i==5)
    continue;
    cout << arr[i] << " ";
  }
  return 0;
}