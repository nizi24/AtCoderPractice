#include <bits/stdc++.h>
using namespace std;
#define INF INT32_MAX / 2
#define REP(i, n) for (int i = 0; i < n; i++)
template <class T>
inline bool chmin(T &a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
template <class T>
inline bool chmax(T &a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n+1000);
    REP(i, n) cin >> h[i];
    vector<int> dp(n+1000, INF);
    dp[0] = 0;
    REP(i, n) {
        for (int j = 1; j <= k; j++) {
            chmin(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
        }
    }
    cout << dp[n-1] << endl;
}