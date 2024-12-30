//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42615

#include <stdio.h>
#include <math.h>


int main() {
    int num1,sum=0;
    scanf("%d", &num1);

    for (int i = num1; i >= 1; i--) { 
        if (i%2==0 && i%3==0 && i%12!=0) {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    

    return 0;
}