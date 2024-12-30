//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42611

#include <stdio.h>
#include <math.h>

int main() {
    int t, s;

    scanf("%d %d", &t, &s);
    

    float total_m = 0;

    if(t<=60){
        total_m = s*60;
    }else if(t<=120){
        t = t - 60;
        total_m = 60*s+t*s*1.33;
    }else{
        t = t - 120;
        total_m = 60*s+60*s*1.33+t*s*1.66;
    }


    printf("%.1f\n", total_m);

    return 0;
}