#include <stdio.h>

int main()
{
    int n;                  // 입력받는 문자열의 길이 (N)
    char str[101];         // 입력받는 문자열 저장 배열

    int alpha_count = 0;   // 현재까지 이어진 소문자 연속 개수
    int digit_count = 0;   // 현재까지 이어진 숫자 연속 개수

    int max_alpha = 0;     // 지금까지 나온 소문자 연속 길이 중 최대값
    int max_digit = 0;     // 지금까지 나온 숫자 연속 길이 중 최대값

    scanf("%d", &n);       // 문자열 길이 입력
    scanf("%s", str);      // 문자열 입력

    for (int i = 0; i < n; i++) {   // 문자열 처음부터 끝까지 하나씩 확인

        // 🔹 소문자 (a ~ z) 인 경우
        if (str[i] >= 'a' && str[i] <= 'z') {

            alpha_count++;     // 소문자가 계속 이어지고 있으므로 +1 증가
            digit_count = 0;    // 숫자 연속은 끊겼기 때문에 0으로 초기화

        }

        // 🔹 숫자 (0 ~ 9) 인 경우
        else if (str[i] >= '0' && str[i] <= '9') {

            digit_count++;     // 숫자가 계속 이어지고 있으므로 +1 증가
            alpha_count = 0;   // 소문자 연속은 끊겼기 때문에 0으로 초기화
        }

        //  그 외 문자 (문제에서는 거의 없음)
        else {
            alpha_count = 0;   // 모든 연속 카운트 초기화
            digit_count = 0;
        }

        //현재까지 나온 소문자 연속 길이가 최대값보다 크면 갱신
        if (alpha_count > max_alpha)
            max_alpha = alpha_count;

        // 🔥 현재까지 나온 숫자 연속 길이가 최대값보다 크면 갱신
        if (digit_count > max_digit)
            max_digit = digit_count;
    }

    // 🔚 최종 결과 출력
    printf("%d\n", max_alpha);   // 가장 긴 소문자 연속 길이
    printf("%d\n", max_digit);   // 가장 긴 숫자 연속 길이

    return 0;
}
