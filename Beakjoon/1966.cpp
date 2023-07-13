#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		int number, find, priority;
		cin >> number>> find;

		priority_queue< int > pq; 
		queue< pair<int, int>> q; //우선순위, 순위


		for (int i = 0; i < number; i++) {
			cin >> priority;
			pq.push(priority); 
			q.emplace(priority, i); //오브젝트를 만들지 않고 바로 push
		}
		//우선순위 큐를 사용하여 중요도로 잘 정렬되어 있는 문서들 중 내가 찾고자 하는 문서의 위치를 알아야함
		//중요도가 다를 경우 queue 뒤로 보내고, 다음 문서와 중요도를 비교
		//중요도가 같으면 count를 세면서 중요도를 따라 위치를 찾아가고, 같은 중요도 사이에서 내가 찾고자 하는 인덱스를 찾아 count++해준다.
		
		int count=0;
		while (!q.empty()) {
			int l = q.front().second;
			int v = q.front().first;
			q.pop();

			if (pq.top() == v) {
				pq.pop();
				++count;
				if (find == l) {
					cout << count << '\n';
					break;
				}
			}
			else q.emplace(v,l);
			
		}
	}

}