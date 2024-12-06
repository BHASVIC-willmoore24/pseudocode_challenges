#include <stdio.h>
#include <string.h>

int main (void) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    char string[] = "";

    printf("Enter a string\n");
    fflush(stdin);
    gets(string);

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < strlen(string); i++) {
            if (vowels[i] == string[j, i]) {
                count += 1;
            }
        }
    }

    printf("%d", count);

    return (0);
}