#include<stdio.h>

int main() {
    int a = 4;

    if (a > 0) {
        if (a > 5)
            printf("A is greater than 5");
        else
            printf("A is between 1 and 5");
    } 
    else {
        printf("A is not positive");
    }

    return 0;
}

// Output is --

// A is between 1 and 5
