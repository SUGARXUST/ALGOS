// sieeve of eratosthenes
#include <iostream>
using namespace std;
const int Nmax = 100001;
bool prime[Nmax];
void sive(int n)
{
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (prime[i])
            == true;
        for (int j = 2 * i; j <= n; j += i)
        {
            prime[j] == false;
        }
    }
}
int main()
{
    sive(20);
    for (int i = 2; i <= 20; i++)
        cout << i << " ";
    return 0;
}