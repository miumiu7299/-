//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42725

#include <stdio.h>
#include <stdlib.h>

int is_prime(int a){
    if(a == 1 || a == 0)
        return 0;
    for(int i=2; i*i<=a; i++){
        if(a % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    if(is_prime(n))
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}