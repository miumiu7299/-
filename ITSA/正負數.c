//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42723

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);


    if (n>0) {
        printf("正數\n");
    } else if(n<0){
        printf("負數\n");
    }else{
        printf("0\n");
    }

    return 0;
}