#include <iostream>
using namespace std;

const int nmax = 10001;
bool fr[nmax];
int a[nmax], n;

int longestConsecNumSubArr()
{

    for (int left = 1; left <= n; left++)
    {
        for (int i = 1; i <= n; i++)
            fr[i] = false;
        int minimum = a[left], maximum = a[left];
        int ans = 0;
        for (int right = left; right <= n; right++)
        {

            if (fr[a[right]] == true)
                break;
            fr[a[right]] = true;
            minimum = min(minimum, a[right]);
            maximum = max(maximum, a[right]);
            if (right - left == maximum - minimum)
                ans = max(ans, right - left + 1);
        }
        return ans;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << longestConsecNumSubArr();
    return 0;
}
