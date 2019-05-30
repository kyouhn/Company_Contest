#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;

	int num = 0;
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		if (S[i] == '#') {
			num++;
		}
		else if (S[i] == '.' && num > 0) {
			ans++;
			num--;
		}
	}

	cout << ans << endl;

	return 0;
}