#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	long long * fibo = new long long[90];
	int num;
	cin >> num;

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i <= num; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[num];

}