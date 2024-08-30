class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       if(n==1){
           return 1;
       }
       
       else 
    //   (josephus(n - 1, k) + k - 1) % n is used to 
    //   find the correct position in a zero-based index system, 
    //   and adding 1 converts it back to a one-based index.
       return (josephus(n-1,k)+k-1)%n+1;
    }
};
