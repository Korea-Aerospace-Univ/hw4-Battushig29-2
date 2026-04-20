#include <stdio.h>

int main() {
    int answer, input;
    int count = 0;

    printf("정답 입력 : ");
    scanf("%d", &answer);

    do {
        scanf("%d", &input);
        count++;

        if (input > answer) {
            printf("%d>? %d 보다 낮습니다\n", input, input);
        }
        else if (input < answer) {
            printf("%d<? %d 보다 높습니다\n", input, input);
        }
        else {
            printf("%d==? %d 정답입니다\n", input, input);
        }

    } while (input != answer);

    printf("%d ", answer);
    printf("시도횟수는 %d회", count);

    return 0;
}
