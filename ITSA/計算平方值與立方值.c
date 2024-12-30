//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42599

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,num1;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &num1);
        printf("%d %d %d\n", num1,num1*num1,num1*num1*num1);
        
    }
    
	return 0;
}