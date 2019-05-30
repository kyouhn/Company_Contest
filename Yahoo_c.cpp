#include"bits/stdc++.h"

using namespace std;

int main() {
	long long K, A, B;
	cin >> K >> A >> B;

	long long ans = max(K + 1, (A + (K - (A - 1))/ 2 * (B - A)) + (K - (A - 1)) % 2);

	cout << ans << endl;

	return 0;
}