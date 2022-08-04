/*BUUBLE SORT
compare consecutive elements in one iteration and do the same
with two for loops*/

#include <iostream>
using namespace std;

// swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// main code
int main()
{
    int length_of_arr;
    cin >> length_of_arr;

    int arr[length_of_arr];

    // array input
    for (int first_pos = 0; first_pos < length_of_arr; first_pos++)
        cin >> arr[first_pos];

    int i, key, j;
    for (i = 1; i < length_of_arr; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    // printing the sorted array
    for (int i = 0; i < length_of_arr; i++)
        cout << arr[i];
}