#include "bits/stdc++.h"
using namespace std;

int main()
{

    // length of the array
    int length_of_arr;
    cin >> length_of_arr;

    int arr[length_of_arr];

    // array input
    for (int first_pos = 0; first_pos < length_of_arr; first_pos++)
        cin >> arr[first_pos];

    // i is the index for start of each subarray possible
    int cur_sum = 0;
    for (int i = 0; i < length_of_arr; i++)
    {

        // sum of the subarray for each iteration
        cur_sum = 0;
        for (int j = i; j < length_of_arr; j++)
        {
            cur_sum += arr[j];
            cout << cur_sum;
        }
    }
}