//gcd of k and kth fibonacci number
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int a = 0, b = 1, c;
    int loop;
    for (int i = 2; i <= k; i++)
    {
        c = a + b;
        a = b;
        b = c;
        loop++;
    }
    cout << k << "th and " << k + 1 << "th Fibonacci numbers : " << a << " " << b << endl;
    cout<<loop;
    cout << "GCD = " << gcd(a, b) << endl;
    return 0;
}
