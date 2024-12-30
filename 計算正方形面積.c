// https://etutor2.itsa.org.tw/mod/topics/view.php?id=42594

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n;
    double w;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%lf", &w);
        double ans = w*w;
        ans = round(ans*10)/10;
        printf("%.1lf\n", ans);
    }

    
	return 0;
}

