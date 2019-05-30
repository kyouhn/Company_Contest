#include"bits/stdc++.h"

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int>A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	vector<long long>v(N + 1, 0);
	for (int i = 0; i < N; i++)
	{
		v[i + 1] += v[i] + A[i];
	}
	for (int i = 1; i <= N; i++)
	{
		long long ans = 0;
		for (int j = 0; j + i <= N; j++)
		{
			long long now = v[i + j] - v[j];
			ans = max(ans, now);
		}
		cout << ans << endl;
	}

	return 0;
}
