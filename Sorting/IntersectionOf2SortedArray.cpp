#include <vector>
#include <unordered_map>
using namespace std;
vector<int> intersection(vector<int> &arr1, vector<int> &arr2)
{
    // Your code here
    // vector<int> res;
    // unordered_map<int, int> mp;

    // for (int x : arr1)
    // {
    //     mp[x]++;
    // }

    // for (int x : arr2)
    // {
    //     if (mp.find(x) != mp.end())
    //     {
    //         res.push_back(x);
    //         mp.erase(x);
    //     }
    // }

    // return res;

    vector<int> res;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return res;
}