//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42613

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    int greatestCommonDivisor = gcd(num1, num2);
    printf("%d\n",greatestCommonDivisor);

    return 0;
}