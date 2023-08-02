#include <iostream>
using namespace std;


void qsort(int *arr, int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int f = pivot + 1;
	int b = end;
	int tmp;

	while (f <= b) {
		//�ǹ����� ū ���� �ε��� ã��
		while (f <= end && arr[f] <= arr[pivot]) {
			++f;
		}
		//�ǹ����� ���� ���� �ε��� ã��
		while (b > start && arr[b] >= arr[pivot]) {
			++b;
		}

		//�������ų� ������ ��
		if (f >= b) break;

		//ã�� ������ ��ġ�� �ٲ��ֱ�
		tmp = arr[f];
		arr[f] = arr[b];
		arr[b] = tmp;
	}

	//�ǹ��� �ǹ����� ���� ���� �ڸ� �ٲٱ�
	tmp = arr[pivot];
	arr[pivot] = arr[b];
	arr[b] = tmp;

	//�ڸ� �ٲ� �ε����� �������� ������ qsort ����
	qsort(arr, start, b - 1);
	qsort(arr, b + 1, end);

}

int main() {
	int num;
	cin >> num;

	int* number = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> number[i];
	}

	qsort(number, 0, num-1);

	for (int i = 0; i < num; i++) {
		cout << number[i] << '\n';
	}


}