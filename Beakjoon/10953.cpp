#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		string s;
		cin >> s;
		cout << s[0] - '0' + s[2] - '0' << "\n";
	}

	
}