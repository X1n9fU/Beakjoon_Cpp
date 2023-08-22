#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1000000; // 적절한 크기로 조절

int cnt[MAX_N + 1]; // 0부터 N까지의 범위로 배열 크기 조절
void calculation(int N) {
    for (int i = 2; i <= N; i++) {
        cnt[i] = cnt[i - 1] + 1;
        if (i % 2 == 0) cnt[i] = min(cnt[i], cnt[i / 2] + 1);
        if (i % 3 == 0) cnt[i] = min(cnt[i], cnt[i / 3] + 1);
    }
}
//반대로 1에서 부터 N이 되기까지를 생각하는 것.
//N이 10이라면 5x2의 형태이므로 5가 1이 되기까지 거쳐온 count에 +1을 해주면 된다는 것이다!
//5는 4+1의 형태이므로 4가 1이 되기까지 거쳐온 count에서 +1
//4는 2x2의 형태이므로 2가 1이 되기까지 거쳐온 count에서 +1

int main() {
    int N;
    cin >> N;
    calculation(N);
    cout << cnt[N];
}
