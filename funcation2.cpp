#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(int x)
{
  int sum = 0;
  while (x>0)
  {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}
int main()
{
  int a, b;
  cin >> a >> b;
  if (sum_of_digit(a)>sum_of_digit(b))
  {
    cout << "A is grater than B" << endl;
  }
  else if (sum_of_digit(a)<sum_of_digit(b))
  {
    cout << "B is grater than A" << endl;
  }
  else
  {
    cout << "Both are equal" << endl;
  }
  return 0;
}