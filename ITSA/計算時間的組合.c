//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42612

#include <stdio.h>

#define SECONDS_PER_MINUTE 60
#define MINUTES_PER_HOUR 60
#define HOURS_PER_DAY 24

int main() {
    int total_seconds;

    scanf("%d", &total_seconds);

    int days = total_seconds / (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    total_seconds %= (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

    int hours = total_seconds / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    total_seconds %= (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

    int minutes = total_seconds / SECONDS_PER_MINUTE;
    total_seconds %= SECONDS_PER_MINUTE;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", total_seconds);

    return 0;
}
