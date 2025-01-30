#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int r1, r2, d1, d2;
  cin >> r1 >> r2 >> d1 >> d2;
  int value1 = r1+d1;
  int value2 = r2+d2;
  
  if (value1>value2)
  {
    cout << "Dominater" << endl;
  }
  else 
  {
    cout << "Everule" << endl;
  }
  return 0;
}