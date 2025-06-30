#include <stdio.h>

int n, k;           // 전체 칸 수와 블록 개수
int blocks[20];     // 블록의 크기 배열
int result = 0;     // 가능한 경우의 수

// 재귀를 이용한 백트래킹
void solve(int index, int position) {
    // 모든 블록을 배치했을 때
    if (index == k) {
        if (position <= n) result++; // 남은 공간이 조건을 만족하면 경우의 수 증가
        return;
    }

    // 현재 블록을 배치할 수 있는 위치 탐색
    int remaining_length = 0;
    for (int i = index; i < k; i++) {
        remaining_length += blocks[i] + 1; // 각 블록과 공백 포함 길이
    }
    remaining_length--; // 마지막 블록 뒤에는 공백이 필요 없음

    // 블록을 배치할 수 있는 모든 위치 탐색
    for (int i = position; i + remaining_length <= n; i++) {
        solve(index + 1, i + blocks[index] + 1); // 다음 블록으로 이동 (공백 포함)
    }
}

int main() {
    // 입력
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &blocks[i]);
    }

    // 첫 블록부터 배치 시작
    solve(0, 0);

    // 결과 출력
    printf("%d\n", result);

    return 0;
}
