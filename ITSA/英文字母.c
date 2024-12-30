//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42724

#include <stdio.h>
#include <ctype.h> 

int main() {
    char c;

    scanf(" %c", &c); 

    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("母音\n");
    } else {
        printf("子音\n");
    }

    return 0;
}