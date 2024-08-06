// Given an array A of non-negative integers. Sort the array in ascending order such that element at the Kth position in unsorted array stays unmoved and all other elements are sorted.
#include <iostream>
using namespace std;
class Solution
{
public:
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void strangeSort(int arr[], int n, int k)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    if (j == k - 1)
                    {
                        if (j != 0 && arr[j - 1] > arr[j + 1])
                        {
                            swap(arr[j - 1], arr[j + 1]);
                        }
                    }
                    else if (j + 1 == k - 1)
                    {
                        if (j + 2 != n && arr[j] > arr[j + 2])
                        {
                            swap(arr[j], arr[j + 2]);
                        }
                    }
                    else
                        swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};