// codeup 1092
#include <stdio.h>

int main() {
    int a, b, c;
    int day;

    scanf("%d %d %d", &a, &b, &c);
    day = 1;

    while (1) {
        day++;
        if (day%a==0 && day%b==0 && day%c==0) break;
    }
    printf("%d", day);

    return 0;
}