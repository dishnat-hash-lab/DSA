#include <vector>
#include <climits>
using namespace std;

int findMinDiff(vector<int> &a, int m)
{
    // code here
    int n = a.size();
    int res = INT_MAX;

    // sort(a.begin(), a.end());

    for (int i = 0; i < n - m + 1; i++)
    {
        res = min(res, a[i + m - 1] - a[i]);
    }

    return res;
}