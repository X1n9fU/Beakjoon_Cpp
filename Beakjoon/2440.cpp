#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int j = 0; j < num; j++) {
		for (int i = j; i < num; i++) {
			cout << '*';
		}
		cout << '\n';
	}
}