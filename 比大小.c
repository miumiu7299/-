//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42598

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,num1;
    scanf("%d", &n);
    
    for(int i=0;i<2;i++){
        scanf("%d", &num1);
        if(num1>n)
            n=num1;
        
    }
    printf("%d\n", n);
	return 0;
}