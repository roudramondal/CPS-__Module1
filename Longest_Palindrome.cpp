#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int n = s.length();
  int max_len = 1;
  for (int i = 0; i < n;i++)
  {
    for (int j = i; j < n;j++)
    {
      bool is_palindrome = true;
      for (int k = 0; k <= (j - i) / 2;k++)
      {
        if (s[i+k]!=s[j-k])
        {
          is_palindrome = false;
          break;
        }
      }
      if (is_palindrome)
      {
        int curr_len = j - i + 1;
        if (curr_len>max_len)
        {
          max_len = curr_len;
        }
      }
    }
  }
  cout << max_len << endl;
  return 0;
}