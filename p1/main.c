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
            printf("%d>?\n", input);
        }
        else if (input < answer) {
            printf("%d<?\n", input );
        }
        else {
            printf("%d==? \n", input );
        }

    } while (input != answer);

    
    printf("%d", count);

    return 0;
}
