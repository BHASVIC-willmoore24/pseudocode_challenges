#include <stdio.h>

int main (void) {
    int maxVal = 0;
    int numArray[4] = {2, 4, 7, 6};

    for (int i = 0; i < 4; i++) {
        if (numArray[i] > maxVal) {
            maxVal = numArray[i];
        }
    }

    printf("%d", maxVal);
    return (0);
}