#include <iostream>
using namespace std;
int main()
 {
    int N;
    cin >> N;
    long long H[100000];

    for (int i = 0; i < N; ++i) 
    {
      cin >> H[i];
    }

    int current_index = 0;
    while (current_index < N - 1 && H[current_index + 1] > H[current_index]) {
        current_index++;
    }

    cout << H[current_index] <<endl;

    return 0;
}
