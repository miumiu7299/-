//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42729

#include <stdio.h>
#include <math.h>

int main() {
    int n,num1,max;
    
    scanf("%d", &n);
    scanf("%d", &num1);
    max=num1;
    for(int i=0;i<n-1;i++){
        scanf("%d", &num1);
        if(num1>max)
            max=num1;
    }
    printf("%d\n",max);
    return 0;
}