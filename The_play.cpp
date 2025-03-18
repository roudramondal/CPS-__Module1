#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int k;
        cin >> k;

        if (k % 3 == 1) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
