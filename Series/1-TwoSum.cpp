#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec twoSum(vec &arr, int target)
{
    vec result;
    unordered_map<int, int> counter;

    for (int i = 0; i < arr.size(); i++)
    {
        int compliment = target - arr[i];
        if (counter.count(compliment))
            return {counter[compliment], i};
        counter[arr[i]] = i;
    }
    return {};
}

int main()
{
    system("cls");
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    vec arr, result;
    ll size, el, target;

    cin >> size >> target;

    for (int i = 0; i < size; i++)
        cin >> el, arr.push_back(el);

    result = twoSum(arr, target);

    for (auto &tr : result)
        cout << tr << endl;

    return 0;
}