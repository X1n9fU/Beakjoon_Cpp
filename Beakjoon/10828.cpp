#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	int front = 0;
	int rear = 0;

	int queue[10000];
	for (int i = 0; i < num; i++) {
		string command;
		cin >> command;
		
		if (command == "push") {
			int push;
			cin >> push;
			queue[rear++] = push;
		}
		else if (command == "pop") {
			if (rear > front) {
				cout << queue[front++];
			}
			else {
				cout << -1;
			}
			cout << '\n';
		}
		else if (command == "size") {
			cout << rear-front  <<'\n';
		}
		else if (command == "empty") {
			if (rear>front) cout << 0;
			else cout << 1;
			cout << '\n';
		}
		else if (command == "front") {
			if (rear>front) cout << queue[front];
			else cout << -1;
			cout << '\n';
		}
		else if (command == "back") {
			if (rear>front) cout << queue[rear-1];
			else cout << -1;
			cout << '\n';
		}
	}
	

}