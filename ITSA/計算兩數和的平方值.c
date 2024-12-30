//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42597

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1,num2,n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d%d", &num1,&num2);
        printf("%d\n", (num1+num2)*(num1+num2));
    }
    
	return 0;
}