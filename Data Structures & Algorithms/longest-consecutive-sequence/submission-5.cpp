#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int cnt=1;
                int j=nums[i]+1;
                while(s.find(j)!=s.end()){
                    cnt++;
                    j++;
                }
                ans=max(ans,cnt);
            }

        }
        return ans;
    }
};



