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

    // first loop iterates through elemnts until i-1 positions
    for (int first_pos = 0; first_pos < length_of_arr - 1; first_pos++)
    {

        // second loop to compare rest of the array with first element and swap if uuuuuuui89uuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
        for (int min_pos = first_pos + 1; min_pos < length_of_arr; min_pos++)
        {

            if (arr[first_pos] > arr[min_pos])
            {
                swap(&arr[min_pos], &arr[first_pos]);
                /*int temp = *arr[min_pos];
                 *arr[min_pos] = *arr[first_pos];
                 *arr[first_pos] = temp;
                 */
            }
        }
    }

    // printing the sorted array
    for (int i = 0; i < length_of_arr; i++)
        cout << arr[i];
}