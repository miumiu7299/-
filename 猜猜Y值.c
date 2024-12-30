//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42728


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,num1;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &num1);
        if(num1>=50 && num1<=70)
            printf("%d\n",num1);
        else
            printf("100\n");
        
    }

	return 0;
}