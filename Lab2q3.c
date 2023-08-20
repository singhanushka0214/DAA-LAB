//value of sinx
#include <stdio.h>


float power(float x, int n)
{
    double ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= x;
    return ans;
}
float sine(float x, int d)
{
    float sum = 0, term = x, eps = pow(10, -d - 1);
    int i = 1;
    while (abs(term) > eps)
    {
        sum += term;
        term = -term * x * x / (2 * i * (2 * i + 1));
        i++;
    }
    return sum;
}
int main()
{
    float x;
    int d;
    printf("Enter x: ");
   scanf("%f", &x);
    printf("Enter decimal Places: ");
    scanf("%d", &d);
    int result = sine(x,d);
    printf("Result %d", result);
    return 0;
}
