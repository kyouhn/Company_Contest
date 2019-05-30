#include"bits/stdc++.h"

using namespace std;

int main() {
	int N[10];

	for (int i = 0; i < 4; i++) {
		cin >> N[i];
	}

	sort(N, N + 4);

	if (N[0] == 1 && N[1] == 4 && N[2] == 7 && N[3] == 9) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
