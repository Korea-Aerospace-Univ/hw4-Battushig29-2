#include <stdio.h>

int main(void) 
{
    int target;   // 맞춰야 하는 정답 (목표 값)
    int guess;    // 사용자가 입력하는 추측 값
    int count = 0; // 시도 횟수 (몇 번 맞췄는지 카운트)

    // 정답 먼저 입력 받음
    scanf("%d", &target);

    //  최소 1번은 무조건 실행해야 하므로 do-while 사용
    do {
        // 사용자가 숫자 입력
        scanf("%d", &guess);

        // 시도 횟수 증가 (입력할 때마다 +1)
        count++;

        // 입력값과 정답 비교

        if (guess > target)
            printf("%d>?\n", guess);   // 너무 큼 → 더 작은 값 필요

        else if (guess < target)
            printf("%d<?\n", guess);   // 너무 작음 → 더 큰 값 필요

        else
            printf("%d==?\n", guess);  // 정답 맞춤

    } while (guess != target);  // 정답 맞출 때까지 반복

    //  총 시도 횟수 출력
    printf("%d\n", count);

    return 0;
}
