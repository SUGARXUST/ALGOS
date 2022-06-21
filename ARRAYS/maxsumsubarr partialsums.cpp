#include <iostream>
using namespace std;

const int nmax = 10001;

long long maxsumsubarr(int a[], int n)

// mins comess here from the equation
// sum(Left,right) = subarray[Right]-subarray[left-1]
// so the value of sum would be maximum once subarray[left-1] is minimum
// hence mins comes from above
{
    if (n == 0)
        return 0;
    long long sub_array[nmax], ans = a[1], mins = 0;
    sub_array[1] = a[1];
    for (int i = 2; i <= n; i++)
        sub_array[i] = sub_array[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
    {
        if (sub_array[i] - mins > ans)
            ans = sub_array[i] - mins;
        if (sub_array[i] < mins)
            mins = sub_array[i];
    }
    return ans;
}

int main()
{
    int n, a[nmax];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << maxsumsubarr(a, n);
}