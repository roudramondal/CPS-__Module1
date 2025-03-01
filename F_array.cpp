#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s[8];
  for (int i = 0; i < 8;i++)
  {
    cin >> s[i];
  }
  for (int i = 0; i < 7;i++)
  {
    if (s[i]>s[i+1])
    {
      cout << "No" << endl;
      return 0;
    }
    if (s[i]<100||s[i]>675)
    {
      cout << "No" << endl;
      return 0;
    }
    if (s[i]%25!=0)
    {
      cout << "No" << endl;
      return 0;
    }
    if (s[i]<100||s[i]>675||s[i]%25!=0)
    {
      cout << "No" << endl;
    }
  }
  cout << "Yes" << endl;
  return 0;
}