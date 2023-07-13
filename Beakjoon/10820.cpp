#include <iostream>
#include <string>
using namespace std;

int main() {
	int* sdns = new int[4]; //소문자 대문자 숫자 공백

	string s;

	while (getline(cin, s)) {
		for (int i = 0; i < 4; i++) sdns[i] = 0;
		

		for (int i = 0; i < s.size(); i++) {
			if ('a' <= s[i] && s[i] <= 'z') sdns[0]++;
			if ('A' <= s[i] && s[i] <= 'Z') sdns[1]++;
			if (s[i] == ' ') sdns[3]++;
			if ('0' <= s[i] && s[i] <= '9') sdns[2]++;
		}

		for (int i = 0; i < 4; i++) {
			cout << sdns[i] << ' ';
		}
		
		cout << '\n';
	}
	delete[]sdns;
}