#include <vector>
using namespace std;
void quickSort(vector<int> &arr, int low, int high)
{
    // code here
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    // code here
    int pvt = arr[low];

    int i = low - 1;
    int j = high + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pvt);
        do
        {
            j--;
        } while (arr[j] > pvt);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}