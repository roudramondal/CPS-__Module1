#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        int a[100];
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        // Check if k exists in the array
        bool k_exists = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == k) {
                k_exists = true;
                break;
            }
        }

        if (!k_exists) {
            std::cout << "NO" << std::endl;
            continue;
        }

        // Check for consecutive occurrences of k
        bool consecutive_k = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == k && a[i + 1] == k) {
                consecutive_k = true;
                break;
            }
        }

        if (consecutive_k) {
            std::cout << "YES" << std::endl;
            continue;
        }
        bool found = false;
        for (int start = 0; start < n; ++start) {
            int freq[101] = {0};
            int max_freq = 0;
            for (int end = start; end < n; ++end) {
                ++freq[a[end]];
                if (freq[a[end]] > max_freq) {
                    max_freq = freq[a[end]];
                }
                if (freq[k] == max_freq && freq[k] > (end - start + 1) / 2) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (found) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
