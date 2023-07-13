#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << stoll(A + B) + stoll(C + D); //string to long long
	//숫자가 커지면 int로 감당 x stoi를 사용하지 않고 stoll을 사용해야함
}