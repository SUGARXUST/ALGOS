// least capacity should b max of the array
// incmeneting by one and the comparing with k
// for minimum c

#include <iostream>
using namespace std;
const int nmax = 100005;

// function to find the maximum weight in the array which is the minimum capacity
int maxval(int weight[], int n)
{
    int maxval = weight[1];
    for (int i = 2; i <= n; i++)
        maxval = max(maxval, weight[i]);
    return maxval;
}

// function to calculate the sum of the entire weights array
long long sumof(int weight[], int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += weight[i];
    return sum;
}

int num_of_rides(int weight[], int n, long long capacity)
{
    int no_of_trucks = 1;
    // sum of weight under capacity for truck
    long long sum_of_weight = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sum_of_weight + weight[i] <= capacity)
            sum_of_weight += weight[i];
        else
        {
            no_of_trucks++;
            sum_of_weight = weight[i];
        }
    }
    return no_of_trucks;
}

// binary searching the array which which contains all posiible values of C(capacity)
// it starts from the max value in orginal array to the sum of the complete array
// each capacity has its own k(number of rides) in the numofrides array
// so binary search would give the max k and min capacity required to complete the k

long long bsearch(int weight[], int n, int k)
{
    // the array of capacity would look like and its respective num of rides would b
    //[maximum weight, , , , ,sum of all weights]
    //[ride1, ride2 ,ride3, , , ,1]
    long long left = maxval(weight, n), right = sumof(weight, n), ans;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (num_of_rides(weight, n, mid) > k)
            left = mid + 1;
        else
        {
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
}

// driver code
int main()
{
    int n, k, a[nmax];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << bsearch(a, n, k);
    return 0;
}