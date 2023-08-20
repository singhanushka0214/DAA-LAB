
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Size of the array should be greater than 1.\n");
        return 1;
    }

    int input_array[n];
    int output_array[n];
    int overall_product = 1;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &input_array[i]);
        overall_product *= input_array[i];
    }

    for (int i = 0; i < n; i++) {
        output_array[i] = overall_product / input_array[i];
    }

    printf("Output Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", output_array[i]);
    }
    printf("\n");

    return 0;
}
