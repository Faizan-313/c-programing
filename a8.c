#include <stdio.h>

int isSpecialSymbol(char c) {
    if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~')) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (isSpecialSymbol(c)) {
        printf("%c is a special symbol.\n", c);
    } else {
        printf("%c is not a special symbol.\n", c);
    }
    
    return 0;
}