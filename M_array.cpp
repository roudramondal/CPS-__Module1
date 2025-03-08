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
    int sum=0;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
      cin>>arr[i];
    }
    for (int i = 0; i < n;i++)
    {
       arr[i]++;
       int min = 1;
       for (int j = 0; j < n;j++)
       {
         min *= arr[j];
       }
        if (min>sum)
         {
           sum = min;
         }
         arr[i]--;
    }
 cout << sum << endl;
}
return 0;
}