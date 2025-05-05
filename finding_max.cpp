#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  int value1 = max(x, y);
  int value2 = max(a, b);
  int final_value = max(value1, value2);
  cout << final_value << endl;
  return 0;
}