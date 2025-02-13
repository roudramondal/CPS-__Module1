#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
  	int n, rated;
  	cin >> n >> rated;
  	int total = 2 * n;
  	int unrated = total - rated;
  	if (unrated >= rated) {
  		cout << 0 << '\n';
  	}
  	else {
  		cout << abs(rated - unrated) << '\n';
  	}
  }
    return 0;
}