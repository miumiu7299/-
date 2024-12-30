//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42616

#include <stdio.h>
#include <stdint.h> // 引入 uint8_t

void decimalToBinary8Bit(int decimal) {
    uint8_t binary; // 使用 uint8_t 確保是 8 位元
    if (decimal >= 0) {
        binary = (uint8_t)decimal;
    } else {
        binary = (uint8_t)(256 + decimal); // 負數的二補數
    }

    // 輸出 8 位元二進位
    for (int i = 7; i >= 0; i--) {
        printf("%d", (binary >> i) & 1);
    }
    printf("\n");
}

int main() {
    int decimal;

    scanf("%d", &decimal);

    decimalToBinary8Bit(decimal);

    return 0;
}