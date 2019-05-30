#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, X, Y;
	cin >> N >> X >> Y;
	vector<int>A(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A.rbegin(), A.rend());

	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0) {
			X += A[i];
		}
		else {
			Y += A[i];
		}
	}

	if (X == Y) {
		cout << "Draw" << endl;
	}
	else if (X > Y) {
		cout << "Takahashi" << endl;
	}
	else {
		cout << "Aoki" << endl;
	}
	return 0;
}