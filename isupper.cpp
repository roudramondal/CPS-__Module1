// use isupper() and islower() function that's it 
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  char x;
  cin >> x;
  if (isupper(x)>='A'&&isupper(x)<='Z')
  {
    cout << "Value is upper " << endl;
  }
  else
  {
    cout << "Value is not upper " << endl;
  }
  return 0;
}