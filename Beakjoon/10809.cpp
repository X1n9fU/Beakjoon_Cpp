#include <iostream>
using namespace std;

int main() {
	int* alp = new int[26];
	for (int i = 0; i < 26; i++) alp[i] = -1;

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int num = s[i] - 'a';
		if (alp[num] != -1) continue;
		else	alp[num] = i;
	}
	for (int i = 0; i < 26; i++) cout << alp[i] << ' ';
}