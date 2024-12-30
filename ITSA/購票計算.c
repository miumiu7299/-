//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42603

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    printf("NT10=%d\n",n/10);
    n=n%10;
    printf("NT5=%d\n",n/5);
    n=n%5;
    printf("NT1=%d\n",n);

       
	return 0;
}