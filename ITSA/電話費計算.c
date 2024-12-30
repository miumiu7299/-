//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42606

#include <stdio.h>

int main() {
    int minutes;
    double cost;

    scanf("%d", &minutes);

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes < 1500) {
        cost = minutes * 0.9 * 0.9; 
    } else {
        cost = minutes * 0.9 * 0.79; 
    }

    printf("%.1f\n", cost);

    return 0;
}