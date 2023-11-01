#include <stdio.h>
#include <ctype.h>

int is_digit(char ch) {
    if (isdigit(ch))
        return 1;
    else
        return 0;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    
    if (is_digit(character))
        printf("The character is a digit.\n");
    else
        printf("The character is not a digit.\n");
    
    return 0;
}