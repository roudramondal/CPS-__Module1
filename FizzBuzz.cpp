#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n;
        int count = (n / 15) * 4;
        if (n % 15 >= 0||n%15>=1||n%15>=2||n%15>=15)
        {
          count++;
        } 
        cout << count << endl;
    }

    return 0;
}
