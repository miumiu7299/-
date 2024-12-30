//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42595

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int n1,n2;
        scanf("%d%d", &n1,&n2);
        printf("%d\n", n1+n2);
    }
	return 0;
}