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

    int i, j;
    for (i = 0; i < length_of_arr - 1; i++)
    {

        // Last i elements are already
        // in place
        for (j = 0; j < length_of_arr - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    // printing the sorted array
    for (int i = 0; i < length_of_arr; i++)
        cout << arr[i];
}