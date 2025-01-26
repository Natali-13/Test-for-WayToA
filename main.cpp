#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> white(n, 0);
        for (int i = 0; i < n; ++i) {
            white[i] = (s[i] == 'w');
        }

        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + white[i];
        }

        int min_white = n;
        for (int i = 0; i <= n - k; ++i) {
            int current_white = prefixSum[i + k] - prefixSum[i];
            min_white = min(min_white, current_white);
        }

        cout << min_white << endl;
    }
}

int main() {
    solve();
    return 0;
}
