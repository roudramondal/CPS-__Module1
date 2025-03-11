#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int h, w;
  cin >> h >> w;
  char arr[h][w];
  for (int i = 0; i < h;i++)
  {
    for (int j = 0; j < w;j++)
    {
      cin >> arr[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < h;i++)
  {
    for (int j = 0; j < w;j++)
    {
      if (arr[i][j]=='#')
      {
        count++;
       
      }
    }
    
  }
  cout << count << endl;
}