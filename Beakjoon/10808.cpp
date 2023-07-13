#include <iostream>
using namespace std;

int main() {
	int* alp = new int[26];
	for (int i = 0; i < 26; i++) alp[i] = 0;

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int num = s[i] - 'a';
		alp[num]++;
	}
	for (int i = 0; i < 26; i++) cout << alp[i] << ' ';
}