#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    char s[3][4];
    for (int i = 0; i < 3;i++)
    {
      cin >> s[i];
    }
    int F[3];
    for (int i = 0; i < 3;i++)
    {
      for (int j = 0; j < 3;j++)
      {
        if (s[i][j]!='?')
        {
          int ind = s[i][j] - 65;
          F[ind]++;
        }
      }
    }
  if (F[0]==2)
  {
    cout << "A" << endl;
  }
  else if (F[1]==2)
  {
    cout << "B" << endl;
  }
  else
  {
    cout << "C" << endl;
  }
  }
  return 0;
}