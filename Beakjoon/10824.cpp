#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << stoll(A + B) + stoll(C + D); //string to long long
	//���ڰ� Ŀ���� int�� ���� x stoi�� ������� �ʰ� stoll�� ����ؾ���
}