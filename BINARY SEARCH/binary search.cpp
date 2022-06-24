#include <iostream>
using namespace std;

int bsearch(int a[], int n, int target)
{
    int left = 1, right = m, mid;
    while (left <= right)
    {
        mid=((left+right)/2;
        if (a[mid]==target)
            return mid;
        elif (a[mid]<target)
            left = mid + 1;
        else
            return mid-1;
    }
    return -1;
}
