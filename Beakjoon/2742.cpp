#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	while (num > 0) {
		cout << num;
		cout << '\n';
		//endl 사용보다 \n 사용이 더 빠름
		num--;
	}
}