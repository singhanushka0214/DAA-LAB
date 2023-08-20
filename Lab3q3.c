
#include <stdio.h>
#include <stdlib.h>

int basic_operations = 0;

int *unique(int a[], int n, int *result_size)
{
    int *result = (int *)malloc(n * sizeof(int));
    int unique_count = 0;

    for (int i = 0; i < n; i++)
    {
        int is_duplicate = 0;
        for (int j = 0; j < unique_count; j++)
        {
            basic_operations++;
            if (result[j] == a[i])
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
        {
            result[unique_count] = a[i];
            unique_count++;
        }
    }

    *result_size = unique_count;
    return result;
}

int main()
{
    // int input_sizes[] = {10, 50, 100, 500};

        int size = 5;
        int *input_array = (int *)malloc(size * sizeof(int));

        for (int j = 0; j < size; j++)
        {
            input_array[j] = rand()%10+1;  // Generating random numbers between 0 and size-1
        }

        basic_operations = 0;
        int result_size;
        int *unique_array = unique(input_array, size, &result_size);

        printf("Input size: %d, Unique count: %d, Basic operations: %d\n", size, result_size, basic_operations);
        for(int i=0; i<10; i++)
        {
            printf("%d", unique_array);
        }
        free(input_array);
        free(unique_array);
    

    return 0;
}
