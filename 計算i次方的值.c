//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42600

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,num1;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &num1);
        int total=2;
        if(num1>=31){
            printf("Value of more than 31\n");
        }else{
            for(int j=0;j<num1-1;j++){
                total = total * 2;
            }
            printf("%d\n", total);
        }
        
        

    }
    
	return 0;
}