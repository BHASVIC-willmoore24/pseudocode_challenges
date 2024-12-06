#include <stdbool.h>
#include <stdio.h>

int main (void) {
    bool prime = true;
    int number = 0;
    int sqrt = 0;
    printf("Number: \n");
    fflush(stdin);
    scanf("%d", &number);
    sqrt = int(sqrt(number));
    for (int i = 0; i < sqrt; i++) {
        if (number & i == 0) {
            prime = false;
        }
    }
    return (0);
}