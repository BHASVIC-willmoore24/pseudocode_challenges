#include <stdio.h>
#include <string.h>

int main (void) {
    char newString[] = "";

    char string[] = "";
    printf("Enter a string\n");
    fflush(stdin);
    gets(string);

    for (int i = (strlen(string) - 1); i > 0; i--) {
        newString += string[i];
    }

    return (0);
}
