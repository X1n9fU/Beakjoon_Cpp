#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int star = 0;
	for (int i = 0; i < num*2-1; i++) {
		int j;
		if (i < num) { //�þ�� ��
			star++;
			for (j = 1; j <= num; j++) {
				if (j <= star) cout << '*';
				else cout << ' ';
			}
			for (j = num; j > 0; j--) {
				if (j <= star) cout << '*';
				else cout << ' ';
			}
		}
		else { //�پ��� ��
			star--;
			for (j = 1; j <= num; j++) {
				if (j <= star) cout << '*';
				else cout << ' ';
			}
			for (j = num; j > 0; j--) {
				if (j <= star) cout << '*';
				else cout << ' ';
			}
			
		}
		cout << '\n';
		
	}
}