#include <stdio.h>

int main() {
    int answer, input;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &input);
        count++;

        if (input > answer) {
            printf("%d>? %d보다 낮습니다\n", input, answer);
        }
        else if (input < answer) {
            printf("%d<? %d보다 높습니다\n", input, answer);
        }
        else {
            printf("%d==? %d 정답입니다\n", input, answer);
        }

    } while (input != answer);

    printf("%d 시도횟수는 %d회\n", answer, count);

    return 0;
}
