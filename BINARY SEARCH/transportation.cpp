#include <iostream>
using namespace std;

int maxval(int a[], int n)
{
}

long long bsearch(int a[], int n, int k)
{
    long long left = maxval(a, n), right = sum(a, n), ans;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (rides(a, n, mid) > k)
            left = mid + 1;
        else
            ans = mid;
        right = mid - 1;
    }
}