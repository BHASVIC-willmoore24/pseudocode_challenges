#include <stdio.h>

int main (void) {
    int total = 0;
    int numArray[4] = {2, 4, 7, 6};

    for (int i = 0; i < 4; i++) {
        total += numArray[i];
    }

    printf("%d", total);
    return(0);
}