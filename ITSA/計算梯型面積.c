//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42593

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,a2,h;
    scanf("%d%d%d", &a,&a2,&h);
    double ans = (a+a2)*h/2.0;
    printf("Trapezoid area:%.1f\n", ans);
	return 0;
}

