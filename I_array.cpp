#include <bits/stdc++.h>
using namespace std;
bool isSquar(long long s){
    if(s>=0){
        long long  sr = sqrt(s);
        return (sr * sr == s);
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long  a[n];
        long long  sum = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(isSquar(sum) == true) 
        {
          cout << "Yes" << endl;
        }
        else{
          cout << "No" << endl;
        }
    }
}