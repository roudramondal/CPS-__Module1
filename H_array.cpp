#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int arr[n];
  int p, q, r, s;
  cin >> p >> q >> r >> s;
  for (int i = 0; i < n;i++)
  {
    cin >> arr[i];
  }
  for (int i = p - 1, j=r- 1; i < q;i++,j++)
  {
    swap(arr[i], arr[j]);
  }
  for (int i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }

    return 0;
}