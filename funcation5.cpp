#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n;
void swap (int &a, int &b)
{
  int temp = a;
  a=b;
  b = temp;
}
void reverse ()
{
  for (int i = 0,j = n - 1; i < j;i++,j--)
  {
    swap(arr[i], arr[j]);
  }
}

int main()
{
  cin >> n;
  for (int i = 0; i < n;i++)
  {
    cin >> arr[i];
  }
  reverse();
  
  for (int i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}