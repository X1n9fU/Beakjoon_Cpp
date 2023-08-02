#include <iostream>
using namespace std;


void qsort(int *arr, int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int f = pivot + 1;
	int b = end;
	int tmp;

	while (f <= b) {
		//피벗보다 큰 값의 인덱스 찾기
		while (f <= end && arr[f] <= arr[pivot]) {
			++f;
		}
		//피벗보다 작은 값의 인덱스 찾기
		while (b > start && arr[b] >= arr[pivot]) {
			++b;
		}

		//엇갈리거나 만나면 끝
		if (f >= b) break;

		//찾은 값들의 위치를 바꿔주기
		tmp = arr[f];
		arr[f] = arr[b];
		arr[b] = tmp;
	}

	//피벗과 피벗보다 작은 값의 자리 바꾸기
	tmp = arr[pivot];
	arr[pivot] = arr[b];
	arr[b] = tmp;

	//자리 바꾼 인덱스를 기준으로 나누어 qsort 진행
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