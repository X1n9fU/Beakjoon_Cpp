#include <iostream>
using namespace std;

int w, h;
int** island;
int dx[8]{ 1,1,0,-1,-1,-1,0,1 };
int dy[8]{ 0, 1, 1, 1, 0, -1, -1, -1};
static void searchIsland(int **island, int k, int m) { 
	if (island[k][m] == 0 || island[k][m] == 2) return;
	island[k][m] = 2;
	for (int i = 0; i < 8; i++) {
		int x = k + dx[i];
		int y = m + dy[i];
		if (x<0 || y<0 || x>=h || y>=w) continue;
		searchIsland(island, x, y);
	}
}

int main() {
	while (true) {
		cin >> ::w >> ::h;

		if (w == 0 && h == 0) break;

		island = new int* [::h];
		for (int i = 0; i < ::h; i++) {
			island[i] = new int[::w];
		}
		for (int i = 0; i < ::h; i++) {
			for (int j = 0; j < ::w; j++) {
				cin >> island[i][j];
			}
		}

		int k, m;
		int count = 0;
		for (k = 0; k < h; k++) {
			for (m = 0;m < w; m++) {
				if (island[k][m] == 1) {
					searchIsland(island, k,m);
					count++;
				}
				else island[k][m] = 2;
			}
		}
		cout << count << '\n';
	}


}