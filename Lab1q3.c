//kth element using partition
#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int low, int high)
{
    int num = a[high];
    int i = low -1;
    for(int j=low; j<high; j++)
    {
        if(a[j]<=num)
        {
            i++;
            swap(&a[i], &a[j]);
        }
        swap(&a[i+1], &a[high]);
        return i+1;

    }
}
int selectFunc(int a[], int low, int high, int k)
{
    if(low<=high)
    {
        int num = partition(a, low, high);
        if(num == k-1)
        {
            return a[num];
        }
        else if(num>k-1)
        {
            return selectFunc(a, low, num-1, k);
        }
        else
        {
            return selectFunc(a, num+1, high, k);
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        // a[i] = (rand()%100)+1;
        // printf("%d ", a[i]);
        scanf("%d", &a[i]);
    }
    int k;
    printf("\nEnter the kth element: ");
    scanf("%d", &k);

    int ksmall = selectFunc(a, 0, n-1, k);
    int kmax = selectFunc(a, 0, n-1, n-k+1);
    printf("%dth Largest: %d\n", &k,&kmax);
    printf("%dth smallest : %d", &k, &ksmall);
    
}
