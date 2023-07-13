#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		string s;
		getline(cin, s);
		if (s == "#") break;
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
				count++;
		}
		cout << count << '\n';
	}
}