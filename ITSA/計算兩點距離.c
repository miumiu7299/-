//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42619

#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2; // 使用 double 儲存座標，避免精度損失

    scanf("%lf %lf", &x1, &y1); // 使用 %lf 讀取 double

    scanf("%lf %lf", &x2, &y2); // 使用 %lf 讀取 double

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("%.2lf\n", distance); // 使用 %lf 輸出 double

    return 0;
}
