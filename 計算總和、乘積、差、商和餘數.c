//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42596

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1,num2;
    scanf("%d%d", &num1,&num2);
    printf("%d+%d=%d\n", num1,num2,num1+num2);
    printf("%d*%d=%d\n", num1,num2,num1*num2);
    printf("%d-%d=%d\n", num1,num2,num1-num2);
    
    int cnt = num1%num2;
    if(cnt<0){
        printf("%d/%d=%d...%d\n", num1, num2, (num1 / num2)-1 , cnt+num2);
    }
    else{
        printf("%d/%d=%d...%d\n", num1, num2, num1 / num2, cnt);
    }
	return 0;
}