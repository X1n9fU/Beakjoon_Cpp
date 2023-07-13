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
		queue< pair<int, int>> q; //�켱����, ����


		for (int i = 0; i < number; i++) {
			cin >> priority;
			pq.push(priority); 
			q.emplace(priority, i); //������Ʈ�� ������ �ʰ� �ٷ� push
		}
		//�켱���� ť�� ����Ͽ� �߿䵵�� �� ���ĵǾ� �ִ� ������ �� ���� ã���� �ϴ� ������ ��ġ�� �˾ƾ���
		//�߿䵵�� �ٸ� ��� queue �ڷ� ������, ���� ������ �߿䵵�� ��
		//�߿䵵�� ������ count�� ���鼭 �߿䵵�� ���� ��ġ�� ã�ư���, ���� �߿䵵 ���̿��� ���� ã���� �ϴ� �ε����� ã�� count++���ش�.
		
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