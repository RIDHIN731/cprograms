
#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
