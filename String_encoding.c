#include <stdio.h>
#include <stdlib.h>

int columnToNumber(const char *column) {
    int result = 0;
    int len = strlen(column);
    
    // 遍歷每個字符，計算它在對應數字系統中的值
    for (int i = 0; i < len; i++) {
        result = result * 26 + (column[i] - 'A' + 1);
    }
    
    return result;
}

int main() {
    char column[100]; // 假設列標籤不會超過 100 字符

    // 讀取多行輸入，直到文件結束
    while (scanf("%s", column) != EOF) {
        // 呼叫函數並輸出結果
        printf("%d\n", columnToNumber(column));
    }

    return 0;
}