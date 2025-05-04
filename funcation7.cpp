#include<bits/stdc++.h>
using namespace std;
void swap (char &x,char &y)
{
  char temp = x;
  x = y;
  y=temp;
  
}
void reverse (char s[])
{
  int  len=strlen(s);
  for (int i = 0, j = len - 1; i < j;i++,j--)
  {
    swap(s[i],s[j]);
  }
}
int ispalindrome(char s[])
{
  int len = strlen(s);
  char temp[len+1];
  for (int i = 0; i < len;i++)
  {
    temp[i] = s[i];
  }
  temp[len] = '\0';
  reverse(temp);
  for (int i = 0; i < len;i++)
  {
    if (s[i]!=temp[i])
      return 0;
  }
    return 1;
} 
int main()
{
  char s[100];
  cin >> s;
  if (ispalindrome(s))
  {
    cout << "1" << endl;
  }
  else
  {
    cout << "0" << endl;
  }
  return 0;
  
}