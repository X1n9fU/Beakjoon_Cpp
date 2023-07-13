#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int j;
	int star = 0;
	for (int i = 0; i < num*2-1; i++) {
		if (i < num) {
			star++;
			for (int j = 0; j < num; j++) {
				if (star > j) {
					cout << '*';
				}
			}
			cout << '\n';
		}
		else {
			star--;
			for (int j = 0; j <num ; j++) {
				if (star > j) {
					cout << '*';
				}
			}
			cout << '\n';
		}
	}
}