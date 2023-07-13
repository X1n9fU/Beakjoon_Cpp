#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int space = i;
		for (int j = i + 1; j <= num * 2 - 1; j++) {
			if (space > 0) {
				cout << ' ';
				space--;
			}
			else cout << '*';

		}
		cout << '\n';
	}
}