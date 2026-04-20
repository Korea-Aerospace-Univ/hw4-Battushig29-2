#include <stdio.h>

int main() {
    int answer, input;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &input);
        count++;

        if (input > answer) {
            printf("%d보다 낮습니다\n", input);
        }
        else if (input < answer) {
            printf("%d보다 높습니다\n", input);
        }
        else {
            printf("%d 정답입니다\n", input);
        }

    } while (input != answer);
    
    printf("%d\n", answer, count);

    return 0;
}
