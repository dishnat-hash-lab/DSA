#include<iostream>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    while(T!=0){
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        for (int i = 0; i < N; i++)
        {
            int count=0;
            for (int j = 0; j < N; j++)
            {
                if (a[i]==a[j])
                {
                    count++;
                }
            }
            if (count%2!=0)
            {
                cout<<a[i]<<endl;
            }    
        }
    T--;
    } 
}