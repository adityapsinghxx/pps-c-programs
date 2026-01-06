#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *p;

    p = (int*) calloc(5, sizeof(int));

    if(p == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Values after calloc:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}
