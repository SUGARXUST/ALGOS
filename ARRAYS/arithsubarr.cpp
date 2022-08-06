#include "bits/stdc++.h"
using namespace std;

int main()
{
    int length_of_arr;
    cin >> length_of_arr;

    int arr[length_of_arr];

    // array input
    for (int first_pos = 0; first_pos < length_of_arr; first_pos++)
        cin >> arr[first_pos];

    int pd = arr[1] - arr[0], j = 1, ans = 1, current_count = 1;

    while (j < length_of_arr)
    {

        if (pd == arr[j] - arr[j - 1])
            current_count++;
        else
        {
            pd = arr[j] - arr[j - 1];
            current_count = 1;
        }
        j++;
        ans = max(current_count, ans);
    }
    cout << ans;
}