//without use global veriable 
#include<bits/stdc++.h>
using namespace std;
void swap (int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;

}
void reverse (int x[],int y)
{
  for (int i = 0, j = y - 1; i < j;i++,j--)
  {
    swap(x[i], x[j]);
  }
}
int main()
{
  int arr[100];
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
    cin>>arr[i];
    
  }
  reverse(arr, n);
  for (int i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
