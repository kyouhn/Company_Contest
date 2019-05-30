#include"bits/stdc++.h"
 
using namespace std;
 
int main() {
	int ab[10];
 
	for (int i = 1; i <= 4; i++) ab[i] = 0;
		for (int i = 0; i < 6; i++) {
			int n;
			cin >> n;
			ab[n]++;
		}
 
	if (ab[1] <= 2 && ab[2] <= 2 && ab[3] <= 2 && ab[4] <= 2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
 
	return 0;
}