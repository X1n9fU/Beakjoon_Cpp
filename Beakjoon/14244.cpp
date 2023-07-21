#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (m == 2) {
		for (int i = 0; i < n - 1; i++) {
			cout << i << ' ' << i + 1 << '\n';
		}
	}
	else if (m == (n - 1)) {
		cout << 0 << ' ' << 1 << '\n';
		for (int i = 2; i < n; i++) {
			cout << 1 << ' ' << i << '\n';
		}
	}
	else {
		int i;
		cout << 0 << ' ' << 1 << '\n';
		for (i = 2; i < m + 1; i++) {
			cout << 1 << ' ' << i << '\n';
		}
		for (int j = i - 1; j < n - 1; j++) {
			cout << j << ' ' << j + 1 << '\n';
		}
	}
}