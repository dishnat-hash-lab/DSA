#include <iostream>
using namespace std;

class Solution{
    public:
    void insertionSort(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }


    void printArray(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<"\t";
        }
        
    }
};

int main(){
    int arr[1000],n,T,i;

    cin>>T;

    while(T--){

    cin>>n;

    for(i=0;i<n;i++)
      cin>>arr[i];

    Solution ob;
    ob.insertionSort(arr, n);
    ob.printArray(arr, n);
    }
}