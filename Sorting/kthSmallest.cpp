#include <vector>
using namespace std;
int partition(vector<int> &arr, int l, int h, int k)
{
    int p = h; // we assume pivot element to be last element always

    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] <= arr[p])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[p]);

    if (i + 1 == k - 1)
        return arr[i + 1];
    else if (i + 1 > k - 1)
        partition(arr, l, i, k);
    else
        partition(arr, i + 2, h, k);
}

int kthSmallest(vector<int> &arr, int k)
{
    // code here
    int n = arr.size();

    return partition(arr, 0, n - 1, k);
}