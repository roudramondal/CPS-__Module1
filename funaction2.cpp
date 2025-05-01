#include<bits/stdc++.h>
using namespace std;
int max_value(int a, int b)
{
  int max;
  if (a>b)
  {
    max = a;
  }
  else
  {
    max = b;
  }
  return max;
}
int main()
{
  int x, y;
  cin >> x >> y;
  int final_value = max_value(x, y);
  cout << final_value << endl;
  return 0;
}