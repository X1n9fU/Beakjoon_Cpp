#include <iostream>
using namespace std;

long A, B;
long check = 0;

void DFS(long depth, long a) {
	if (B == a) {
		cout << depth;
		check = 1;
		return;
	}
	if (a > B) return;
	DFS(depth+1, 2 * a);
	DFS(depth+1, a*10 + 1);
}


int main() {
	cin >> A >> B;
	DFS(1, A);
	if (check == 0) cout << -1;
}