
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    b=a;
    a=temp;
}

int partition(int arr[],int l,int h){
    int pvt=arr[l];

    int i=l-1;
    int j=h+1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i]<pvt);
        do
        {
            j--;
        } while (arr[j]>pvt);
        if (i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}