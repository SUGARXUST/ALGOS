#include <iostream>
using namespace std;

long long maxsubarr(int a[], int n)
{

    long long sum = 0, ans = a[0];
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > ans)
            ans = sum;
        if (sum < 0)
            ans = 0;
    }
    return ans;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxsubarr(a, n);
}