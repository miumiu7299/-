//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42605

#include <stdio.h>
#include <math.h>

int main() {
    int distance;
    double friend_speed_cm, friend_speed_m;
    double relative_speed;
    int time;

    scanf("%d", &distance);

    friend_speed_cm = 30 * 2.54;

    friend_speed_m = friend_speed_cm / 100.0;

    relative_speed = 1.0 - friend_speed_m;

    time = ceil(distance / relative_speed);

    printf("%d\n", time);

    return 0;
}