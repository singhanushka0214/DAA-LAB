#include <stdio.h>

int recursiveMin(int a[], int n, int depth) {
    if (n == 1) {
        return a[0];
    } else {
        int min = recursiveMin(a, n - 1, depth + 1);
        if(a[n-1]<min)
        {  
            return (a[n-1]);
        }    
        else{
            return min;
        }
        
    }
    
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int depth = 0;
    int min1 = recursiveMin(arr,n, depth);
  
    printf("Minimum value of array: %d\n", min1);
    printf("Recursion depth for array: %d\n", depth);


    return 0;
}
