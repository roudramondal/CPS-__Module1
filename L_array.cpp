#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int arr[n-1];
  int freq[n + 1]={};
  for (int i = 0; i < n-1;i++)
  {
    cin >> arr[i];
    freq[arr[i]]++;
  }
  int ans;
  for (int i = 1; i <=n;i++)
  {
   if (freq[i]==0)
   {
     ans = i;
     break;
   }
  }
  cout << ans << endl;
  return 0;
}