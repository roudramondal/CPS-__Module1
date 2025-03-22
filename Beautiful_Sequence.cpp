#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    
    while (t--) {
        int n;
        cin >> n;  
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        bool isBeautiful = false;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == i + 1) {  
                isBeautiful = true;
                break;
            }
        }
        
        if (isBeautiful)
        {
          cout << "YES" << endl;
        } else 
        {
        cout << "NO" << endl;
        }
    }
    
    return 0;
}
