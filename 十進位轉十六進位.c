//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42617

#include <stdio.h>
#include <string.h> // 引入 string.h 以使用字串操作
int main(){
    int decimal;

    scanf("%d", &decimal);

    char hexadecimal[100];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0'; 
        } else {
            hexadecimal[i] = remainder - 10 + 'A'; 
        }
        decimal /= 16;
        i++;
    }

    hexadecimal[i] = '\0'; 


    for (int j = 0; j < i / 2; j++) {
        char temp = hexadecimal[j];
        hexadecimal[j] = hexadecimal[i - 1 - j];
        hexadecimal[i - 1 - j] = temp;
    }

    printf("%s\n", hexadecimal);
}