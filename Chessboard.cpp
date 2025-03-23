#include<bits/stdc++.h>
using namespace std;
int  main ()
{
  char ch[8][9];
  for (int i = 0; i < 8;i++)
  {
    cin >> ch[i];
  }
  int r, c;
  for (int i = 0; i < 8;i++)
  {
    for (int j = 0; j < 9;j++)
    {
      if (ch[i][j]=='*')
      {
        r = i, c = j;
      }
    }
  }
  cout << (char)(c + 97)<<8 - r << endl;
  return 0;
}