#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stack>
using namespace std;

int main() {
	int num;
	string postfix;
	cin >> num >>postfix;

	stack<double> number;

	for (int index = 0; index < num; index++) {
		char numalp;
		cin >> numalp;
		for (int i = 0; i < postfix.size(); i++) {
			if (postfix[i] == 'A' + index) postfix[i] = numalp;
		}
	}

	for (int i = 0; i < postfix.size(); i++) {
		if (postfix[i] == '*' || postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '/') {
			double two = number.top();
			number.pop();
			double one = number.top();
			number.pop();
			switch (postfix[i]) {
				case '+': number.push(one + two); break;
				case '-': number.push(one - two); break;
				case '*': number.push(one * two); break;
				case '/': number.push(one / two); break;
			}
		
			
		}
		else {
			number.push(postfix[i]-'0');
			
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << number.top();

	return 0;
	
}