#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

bool checkPowersOfThree(int n)
{
    while (n)
    {
        if (n % 3 > 1)
            return false;
        n /= 3;
    }
    return true;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    unsigned long long int number;
    bool result;

    cin >> number;

    result = checkPowersOfThree(number);

    if (result)
        cout << number << " is sum of power of 3" << endl;
    else
        cout << number << " is not sum of power of 3" << endl;
    return 0;
}