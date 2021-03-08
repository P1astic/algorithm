#include <stdio.h>

int main() {
    int count = 0, input;
    scanf("%d", &input);

    while (1) {
        if (input % 5 == 0) {
            count += input / 5;
            printf("%d", count);
            break;
        }

        input = input - 3;
        count++;

        if (input < 0) {
            printf("-1");
            break;
        }
    }
    return 0;
}