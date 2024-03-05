#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3,2,1,4,1};
      int n = nums.size();
        int low = 0;
        int high = n-1;
        int operations = 0;
        if(n==2) return 1;  
      int sum = min(nums[0]+nums[1] , min(nums[0] + nums[n-1],nums[n-1]+nums[n-2]));
      cout<<sum<<endl;
        while(low<high){
            if(nums[low]+nums[high]==sum){
                operations++;
                low++;
                high--;
            }
             else if(nums[high-1]+nums[high]==sum){
                operations++;
                high-=2;
            }
            else if(nums[low]+nums[low+1]==sum){
                operations++;
                low+=2;
            }
            else break;
        }
    cout<< operations << endl;
    return 0;
}
