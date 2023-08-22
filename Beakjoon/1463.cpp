#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1000000; // ������ ũ��� ����

int cnt[MAX_N + 1]; // 0���� N������ ������ �迭 ũ�� ����
void calculation(int N) {
    for (int i = 2; i <= N; i++) {
        cnt[i] = cnt[i - 1] + 1;
        if (i % 2 == 0) cnt[i] = min(cnt[i], cnt[i / 2] + 1);
        if (i % 3 == 0) cnt[i] = min(cnt[i], cnt[i / 3] + 1);
    }
}
//�ݴ�� 1���� ���� N�� �Ǳ������ �����ϴ� ��.
//N�� 10�̶�� 5x2�� �����̹Ƿ� 5�� 1�� �Ǳ���� ���Ŀ� count�� +1�� ���ָ� �ȴٴ� ���̴�!
//5�� 4+1�� �����̹Ƿ� 4�� 1�� �Ǳ���� ���Ŀ� count���� +1
//4�� 2x2�� �����̹Ƿ� 2�� 1�� �Ǳ���� ���Ŀ� count���� +1

int main() {
    int N;
    cin >> N;
    calculation(N);
    cout << cnt[N];
}
