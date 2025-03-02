// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/?envType=daily-question&envId=2025-03-02
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
{
    vector<vector<int>> result;
    int n = nums1.size(), m = nums2.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (nums1[i][0] == nums2[j][0])
        {
            result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
            i++;
            j++;
        }
        else if (nums1[i][0] < nums2[j][0])
        {
            result.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        else
        {
            result.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }
    }

    while (i < n)
    {
        result.push_back({nums1[i][0], nums1[i][1]});
        i++;
    }
    while (j < m)
    {
        result.push_back({nums2[j][0], nums2[j][1]});
        j++;
    }
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

    vector<vector<int>> inputArray1, inputArray2;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        inputArray1[i].resize(2);
        cin >> inputArray1[i][0] >> inputArray1[i][1];
    }

    for (int i = 0; i < size; i++)
    {
        inputArray2[i].resize(2);
        cin >> inputArray2[i][0] >> inputArray2[i][1];
    }

    vector<vector<int>> result = mergeArrays(inputArray1, inputArray2);

    for (const auto &row : result)
    {
        cout << row[0] << " " << row[1] << endl;
    }

    return 0;
}