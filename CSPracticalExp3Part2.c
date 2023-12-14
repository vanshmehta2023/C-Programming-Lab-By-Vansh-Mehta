#include <stdio.h>

int main() {
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);

    if (x == 0){
        printf("Zero is neither even nor odd.\n");
    }
    else if (x%2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");    
    }
    return 0;
}