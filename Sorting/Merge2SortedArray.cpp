#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0, r = 0;
    vector<int> f = nums1;
    while (i < m && j < n)
    {
        if (f[i] < nums2[j])
        {
            nums1[r] = f[i];
            i++;
            r++;
        }
        else
        {
            nums1[r] = nums2[j];
            j++;
            r++;
        }
    }

    while (i < m)
    {
        nums1[r] = f[i];
        i++;
        r++;
    }

    while (j < n)
    {
        nums1[r] = nums2[j];
        j++;
        r++;
    }
}