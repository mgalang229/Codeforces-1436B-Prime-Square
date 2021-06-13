#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// there are two cases: 'n' is even or 'n' is odd
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (n % 2 == 0) {
					// output 1 to all the diagonal positions (to produce sum of 2)
					if (i == j || j == n - 1 - i) {
						cout << 1;
					} else {
						cout << 0;
					}
				} else {
					// output 1 to all diagonal positions as well as all the middle positions
					// (middle rows or columns) of the first and last row and column (to
					// produce a sum of 3 which is also a prime number)
					if (i == j || j == n - 1 - i) {
						cout << 1;
					} else if ((i == 0 || i == n - 1) && j == n / 2) {
						cout << 1;
					} else if (i == n / 2 && (j == 0 || j == n - 1)) {
						cout << 1;
					} else {
						cout << 0;
					}
				}
				cout << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}
