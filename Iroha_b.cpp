#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string S;
	int K;
	cin >> S >> K;

	for (int i = 0; i < K; i++)
	{
		S.append(1, S[0]);
		S.erase(S.begin());
	}

	cout << S << endl;

	return 0;
}