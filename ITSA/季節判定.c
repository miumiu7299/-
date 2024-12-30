//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42731

#include <stdio.h>
#include <math.h>

int main() {
    int num1;
    
    scanf("%d", &num1);

    if (num1 <= 5 && num1 >=3) {
        printf("Spring\n");
    }else if (num1 <= 8 && num1 >=6) {
        printf("Summer\n");
    }else if (num1 <= 11 && num1 >=9) {
        printf("Autumn\n");
    }else{
        printf("Winter\n");
    }

    return 0;
}