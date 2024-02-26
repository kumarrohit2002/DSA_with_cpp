#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
}
int maxEnvelopes(vector<vector<int>>& env) {
    int n = env.size();
    if (n == 0) return 0;
    sort(env.begin(), env.end(), cmp);
    vector<int> dp(n, 1);
    int maxCount = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (env[i][1] > env[j][1]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxCount = max(maxCount, dp[i]);
    }
    return maxCount;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> env(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> env[i][0] >> env[i][1];
    }
    int result = maxEnvelopes(env);
    cout << "Max nested envelopes: " << result << endl;
    return 0;
}
