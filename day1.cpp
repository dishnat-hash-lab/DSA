/*
Question 1: Rohan and Raju have a candy where each square has a number. Rohan wants to
find out how many ways she can break the bar into a contiguous segment such that:
1. The segment length matches Raju's birth month.
2. The sum of the numbers in the segment equals Raju's birth day.
Inputs:
• An array of integers representing the chocolate squares.
• Two integers representing Raju's birth day and birth month.
Output:
• The number of valid ways to divide the bar.

*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n,day,mon;
//     int count=0;
//     cout<<"Enter the total number of candies:";
//     cin>>n;
//     int a[n];
//     cout<<"\nInput number of square in candy:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"\nEnter Raju's birth day and birth month:";
//     cin>>day>>mon;
//     for ( int i = 0; i < n-1; i++)
//     {
//         int sum=0;
//         for (int j = 0; j < mon; j++)
//         {
//             sum=sum+a[i+j];
//         }
//         if (sum==day)
//         {
//             count++;
//         }
//     }
    
//     cout<<"\nOutput:"<<count;
// }

/*
Question 2: Given an array of integers and an integer k, determine the number of (i, j) pairs
where i<j and the sum of the pair is divisible by k.
Inputs:
• An array of integers.
• An integer k.
Output:
• The number of valid (i, j) pairs.
*/

#include<iostream>
using namespace std;

int main(){
    int n,k;
    float res;
    int count=0;
    cout<<"Enter the total number of entries:";
    cin>>n;
    int a[n];
    cout<<"\nInput Array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nInput k:";
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            res=(a[i]+a[j])%k;
            if (res==0)
            {
                count++;
            }
        }
    }

    cout<<"\nOutput:"<<count;

}