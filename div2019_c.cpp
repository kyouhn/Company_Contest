#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int ans = 0;
	int cnt_BA = 0;
	int cnt_A = 0;
	int cnt_B = 0;
	string A;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		for (int j = 1; j < A.size(); j++) {
			if (A[j - 1] == 'A'&&A[j] == 'B') {
				ans++;
			}
		}
		if (A[0] == 'B' && A[A.size() - 1] == 'A') {
			cnt_BA++;
		}
		else if (A[0] == 'B') {
			cnt_B++;
		}
		else if (A[A.size()-1] == 'A') {
			cnt_A++;
		}
	}
	if (cnt_A + cnt_B == 0 && cnt_BA > 0) {
		ans += cnt_BA - 1;
	}
	else {
		ans += cnt_BA + min(cnt_A, cnt_B);
	}
	cout << ans << endl;

	return 0;
}