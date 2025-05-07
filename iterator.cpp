#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v(5);
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end();it++)
  {
    cout << *it << " ";
  }
  return 0;
}