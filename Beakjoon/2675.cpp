#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int * count = new int[num];
	string * s = new string[num];

	for (int i = 0; i < num; i++) {
		cin >> count[i] >> s[i];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < s[i].size(); j++) {
			for (int k = 0; k < count[i]; k++) {
				cout << s[i][j];
			}
		}
		cout << '\n';
	}
}