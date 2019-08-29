#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll N, K;
	cin >> N >> K;
	vector<int>A(N);
	vector<int>X(N, 0), Y(N, 0);
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	for (int i = 0; i < N; i++){
		for (int j = i + 1; j < N; j++) {
			if (A[i] > A[j]) {
				X[i] += 1;
			}
			else if (A[i] < A[j]) {
				Y[i] += 1;
			}
		}
	}

	ll mod = 1e9 + 7;
	ll ans = 0;

	for (int i = 0; i < N; i++){
		ans += (K * (K + 1) / 2 % mod) * X[i] % mod + (K * (K - 1) / 2 % mod) * Y[i] % mod;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
