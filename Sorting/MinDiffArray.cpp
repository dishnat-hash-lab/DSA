#include <vector>
#include <math.h>
#include <climits>
using namespace std;

// naive solution
//  int  minimum_difference(vector<int>nums){
//      // Code here
//      int res=INT_MAX;
//      for(int i=0;i<nums.size()-1;i++){
//          for(int j=i+1;j<nums.size();j++){
//              res=min(abs(nums[i]-nums[j]),res);
//          }
//      }
//      return res;
//  }

// optimal solution

int minimum_difference(vector<int> nums)
{
    // Code here
    int res = INT_MAX;
    // sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        res = min(abs(nums[i] - nums[i + 1]), res);
    }

    return res;
}