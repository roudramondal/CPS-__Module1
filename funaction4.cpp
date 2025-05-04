#include<bits/stdc++.h>
using namespace  std;
void increment (int &x)
{
  x++;
  int &y=x;
  y++;
}

int  main()
{
  int a;
  cin >> a;
   increment(a);
   cout << a << endl;
   return 0;
}