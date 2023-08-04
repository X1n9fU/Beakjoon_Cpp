#include <iostream>
#include <vector>
#include <queue>
using namespace std;



bool visited[1001];
vector<int> vec[10001];


void DFS(int V) {
	visited[V] = true;
	cout << V << ' ';
	for (int i=0; i< vec[V].size(); i++) {
		int value = vec[V][i];
		if (!visited[value]) {
			DFS(value);
		}
	}
}

void BFS(int V) {
	queue<int> q;
	visited[V] = true;
	cout << V << ' ';
	q.push(V);
	while (!q.empty()) {
		V = q.front();
		q.pop();
		for (int i = 0; i < vec[V].size(); i++) {
			int value = vec[V][i];
			if (!visited[value]) {
				visited[value] = true;
				cout << value << ' ';
				q.push(value);
			}
		}

	}
}

int main() {
	int N, M, V;
	int from, to;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> from >> to;
		vec[from].push_back(to);
		vec[to].push_back(from);
		visited[from] = false;
	}

	for (int i = 0; i <= M; i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			for (int k = j; k < vec[i].size(); k++) {
				if (vec[i][j] > vec[i][k]) {
					int tmp = vec[i][j];
					vec[i][j] = vec[i][k];
					vec[i][k] = tmp;
				}
			}
		}
	}

	

	DFS(V);

	cout << '\n';
	for (int i = 1; i <= N; i++) {
		visited[i] = false;
	}

	BFS(V);


}