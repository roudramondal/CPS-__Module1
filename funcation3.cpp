#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;
  return;
}
int main()
{
  int x, y;
  cin >> x >> y;
  swap(x, y);
  cout << x <<" "<< y;
  return 0;
}