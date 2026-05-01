#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int zcount = 0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0)pro *= nums[i];
            else zcount++;
        }
        if (zcount>1)return vector<int>(nums.size(),0);
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(zcount==1){
                if(nums[i]==0)ans[i] = pro;
                else ans[i] = 0;
            }
            else{
                ans[i] = pro/nums[i];
            }
        }
        return ans;
    }
};




