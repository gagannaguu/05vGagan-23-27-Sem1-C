#include <stdio.h>
int main() {
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.", num);
    }
    else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

