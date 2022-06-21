#include <iostream>
using namespace std;
int f[100], expo[100], len;
void primefact(int n);
int d = 2;
while (n > 1 && d * d <= n)
{
    int k = 0;
    while (n % d == 0)
    {
        k++;
        n = n / d;
    }
    if (k > 0)
    {
        len++;
        f[len] = d;
        expo[len] = k;
    }
    d++;
}
if (n > 1)
{
    len++;
    f[len] = d;
    expo[len] = k;
}

int main()
{
    primefact(13);
    return 0;
}