/*INSERTION SORT
this sort compares the current element (key) to its predecessor.
If the key element is smaller than its predecessor,
compare it to the elements before.
Move the greater elements one position up to make space for the swapped element.*/

#include <iostream>
using namespace std;

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