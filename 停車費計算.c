//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42610

#include <stdio.h>
#include <math.h>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int total_minutes, fee = 0;

    scanf("%d %d", &start_hour, &start_minute);
    scanf("%d %d", &end_hour, &end_minute);

    total_minutes = (end_hour * 60 + end_minute) - (start_hour * 60 + start_minute);

    if(total_minutes/60<2 || (total_minutes/60==2 && total_minutes%60==0)){
        fee = total_minutes/30*30;
    }else if(total_minutes/60<4){
        total_minutes = total_minutes-60*2;
        fee = 30*4+total_minutes*40;
    }else{
        total_minutes = total_minutes-60*4;
        fee = 30*4+40*4+total_minutes/30*60;
    }


    printf("%d\n", fee);

    return 0;
}