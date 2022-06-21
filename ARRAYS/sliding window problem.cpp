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
}