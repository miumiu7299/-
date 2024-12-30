//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42727

#include <stdio.h>

int main() {
    int p;
    double total_price;

    scanf("%d", &p);

    if (p >= 100) {
        total_price = p * 100 * 0.7; // 7 折
    } else if (p >= 30) {
        total_price = p * 100 * 0.8; // 8 折
    } else if (p >= 10) {
        total_price = p * 100 * 0.9; // 9 折
    } else {
        total_price = p * 100; // 無折扣
    }

    printf("%.0f\n", total_price); // 輸出整數價格

    return 0;
}