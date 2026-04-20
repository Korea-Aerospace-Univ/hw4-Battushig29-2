#include <stdio.h>

int main() {
    int answer;
    int input;
    int count = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &input);
        count++;

        if (input > answer) 
            printf("%d>?\n", input);
        else if (input < answer)
            printf("%d<?\n", input);
        else 
            printf("%d 정답입니다\n", input);

    } while (input != answer);

    printf("%d\n", count);

    return 0;
}
