//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42618

#include <stdio.h>

int main() {
    int n, x, y, sum;

    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        sum = 0; 

        if (x <= y) {
            for (int j = x; j <= y; j++) {
                sum += j;
            }
        } else {
            for (int j = x; j >= y; j--) {
                sum += j;
            }
        }

        printf("%d\n", sum); 
    }
    return 0;
}