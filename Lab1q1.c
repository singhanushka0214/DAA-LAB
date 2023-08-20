//Second largest and second smallest
#include<stdio.h>
#include<time.h>

int secSmallFunc(int a[], int n)
{
    int min= a[0];
    int secMin = a[1];
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            secMin = min;
            min = a[i];
        }
    } 
    for(int i=0; i<n; i++)
    {
        if(a[i]<secMin && a[i]!=min)
        {
            secMin = a[i];

        }
    }
    return secMin;
}

int secLargeFunc(int a[], int n)
{
    int max= a[0];
    int secMax = a[1];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            secMax = max;
            max = a[i];
        }
    } 
    for(int i=0; i<n; i++)
    {
        if(a[i]>secMax && a[i]!=max)
        {
            secMax = a[i];

        }
    }
    return secMax;


}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &i);
    }
    int small, large;
    small = secSmallFunc(a, n);
    printf("Second Smallest: ");
    printf("%d \n", &small);
    printf("Second Largest: ");
    large = secLargeFunc(a,n);
    printf("%d", &large);



}
