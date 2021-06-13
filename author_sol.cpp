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
		vector<vector<int>> a(n);
		for (int i = 0; i < n; i++) {
			a[i].resize(n, 0);
		}
		// fill up the main and secondary diagonals with 1
		for (int i = 0; i < n; i++) {
			a[i][i] = 1;
			a[i][n - 1 - i] = 1;
		}
		// check if 'n' is odd
		if (n % 2) {
			// if yes, then place 1 in the on top of the middle 1 ('n' / 2 - 1, 'n' / 2)
			a[n / 2 - 1][n / 2] = 1;
			// also, place 1 on the adjacent right position of the middle 1 ('n' / 2, 'n' / 2 + 1)
			a[n / 2][n / 2 + 1] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}
