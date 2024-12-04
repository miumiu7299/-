#include <stdio.h>

int min_steps_to_one(int N) {
    int steps = 0;
    while (N > 1) {
        if (N % 2 == 0) {
            // 如果是偶數，除以 2
            N /= 2;
        } else {
            // 如果是奇數，選擇加一或減一
            if (N == 3 || N % 4 == 1) {
                // 當 N 為 3 或者 N 是 4 的倍數加 1 的情況，減一比較合適
                N -= 1;
            } else {
                // 否則加一
                N += 1;
            }
        }
        steps++;
    }
    return steps;
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        printf("%d\n", min_steps_to_one(N));
    }

    return 0;
}
