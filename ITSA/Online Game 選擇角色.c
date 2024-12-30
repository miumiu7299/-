//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42730

#include <stdio.h>
#include <math.h>

int main() {
    int num1;
    
    scanf("%d", &num1);

    switch(num1){
        case 1:
            printf("Person\n");
            break;
        case 2:
            printf("Fairy\n");
            break;
        case 3:
            printf("Dwarf\n");
            break;
    }
    return 0;
}