#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    string n;
    cin >> n;
    for (char &c:n)
    {
      c = tolower(c);
    }
    if (n=="yes")
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}