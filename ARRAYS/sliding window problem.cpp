// window sliding techique used in subarrays
// when we have an upper limit 'K'
// and then slowly sliding the window from 1 to k

// Example : given an array of natural nums find the longest sub array with atmost k distinct elements

#include <iostream>
using namespace std;

const int nmax = 100005;
int fr[nmax];

int slidingwindow(int a[], int n, int k)
{
    int ans = 0, cnt = 0, right;
    for (right = 1; right <= n; right++)
    {
        if (++fr[a[right]] == 1)
            cnt++;
        if (cnt > k)
            break;
    }
    for (int left = 2; left <= n; left++)
    {
        if (--fr[a[left - 1]] == 0)
            cnt--;
        while (right < n)
        {
            if (++fr[a[right]] == 1)
                cnt++;
            if (cnt > k)
                break;
        }
        if (cnt <= k)
            return max(ans, n - left + 1);
        if (--fr[a[left - 1]] == 0)
            cnt--;
        ans = max(ans, right - left + 1);
    }
    return ans;
}

int main()
{
    int n, k, a[nmax];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << slidingwindow(a, n, k);
    return 0;
}