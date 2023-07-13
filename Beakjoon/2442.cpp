#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		int star = 2 * i - 1;
		for (int j = i + num - 1; j > 0; j--) {
			if (j <= star) {
				cout << '*';
			}
			else cout << ' ';
		}
		cout << '\n';
	}
}