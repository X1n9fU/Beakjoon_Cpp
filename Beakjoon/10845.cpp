#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	int top = -1;

	int stack[10000];
	for (int i = 0; i < num; i++) {
		string command;
		cin >> command;

		if (command == "push") {
			int push;
			cin >> push;
			top++;
			stack[top] = push;
		}
		else if (command == "pop") {
			if (top == -1) {
				cout << -1;
			}
			else {
				cout << stack[top];
				top--;
			}
			cout << '\n';
		}
		else if (command == "size") {
			cout << top + 1 << '\n';
		}
		else if (command == "empty") {
			if (top == -1) cout << 1;
			else cout << 0;
			cout << '\n';
		}
		else if (command == "top") {
			if (top == -1) {
				cout << -1;
			}
			else {
				cout << stack[top];
			}
			cout << '\n';
		}
	}


}