//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42604

#include <stdio.h>
#include <math.h> 

int main() {
    int w, h;

    scanf("%d %d", &w, &h);

    // 將身高從公分轉換為公尺
    double height_in_meters = (double)h / 100.0;

    // 計算 BMI
    double bmi = (double)w / pow(height_in_meters, 2);

    // 四捨五入到小數第二位
    bmi = round(bmi * 100.0) / 100.0;

    printf("%.2f\n", bmi);

    return 0;
}