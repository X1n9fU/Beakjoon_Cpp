#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	while (num > 0) {
		cout << num;
		cout << '\n';
		//endl ��뺸�� \n ����� �� ����
		num--;
	}
}