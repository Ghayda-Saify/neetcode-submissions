#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unique(nums.begin(), nums.end());
        if(nums.size()==0)return 0;
        int ans = 1, cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                ans = max(ans,cnt);
                cnt=1;
            }
        }
        return max(ans,cnt);
    }
};



