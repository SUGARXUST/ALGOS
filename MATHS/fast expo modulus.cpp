#include <iostream>
using namespace std;
int fastexp(int a, long long n, int mod)
{

    if (n == 0)
        return 1;
    // a^n%mod
    if (n % 2 == 0)
        // a^n=((a^2)^n/2)
        return fastexp((1LL * a * a) % mod, n / 2, mod);
    // a^n=a*(a^n-1)
    return (1LL * a * fastexp(a, n - 1, mod) % mod);
}
int main()
{
    cout << fastexp(2, 10, 10000007);
}