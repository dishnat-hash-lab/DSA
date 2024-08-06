
// Given an array arr, write a program segregating even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

// Note:- You don't have to return the array, you have to modify it in-place.

// Example:

// Input: arr[] = [12, 34, 45, 9, 8, 90, 3]
// Output: [8, 12, 34, 90, 3, 9, 45]
// Explanation: Even numbers are 12, 34, 8 and 90. Rest are odd numbers.
// Input: arr[] = [0, 1, 2, 3, 4]
// Output: [0, 2, 4, 1, 3]
// Explanation: 0 2 4 are even and 1 3 are odd numbers.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insert_sort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                for (int k = i; k > j; k--)
                {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
            }
        }
    }
}
void segregateEvenOdd(vector<int> &arr)
{
    int n = arr.size();
    int q = 0;
    insert_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            int temp = arr[i];
            for (int j = i; j > q; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[q] = temp;
            q++;
        }
    }
}