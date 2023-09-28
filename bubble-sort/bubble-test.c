#include <stdio.h>
#include "bubble.c"

int main(){

    int array[10] = {5, 9, 3, 10, 7, 4, 2, 8, 1, 6};

    int length = sizeof(array) / sizeof(int);

    printf("Original array:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ,", array[i]);
    }

    bubble(array, length);

    printf("\nSorted array:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ,", array[i]);
    }

    return 0;
}