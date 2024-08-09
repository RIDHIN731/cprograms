
#include <stdio.h>

void print_diamond(int n) {
    int i, j;

    
    for (i = 0; i < n; i++) {
        
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    
    for (i = n - 2; i >= 0; i--) {

        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print_diamond(n);
    return 0;
}
