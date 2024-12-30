//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42614

#include <stdio.h>

int is_prime(int a){
    if (a <= 1) { 
        return 0;
    }
    for(int i=2; i*i<=a; i++){
        if(a % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num1;
    scanf("%d",&num1);
    for(int i=num1 - 1;i>=1;i--){
        if(is_prime(i)){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}