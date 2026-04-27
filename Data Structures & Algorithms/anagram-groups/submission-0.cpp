#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        for(string i:strs){
            string s = i;
            sort(s.begin(), s.end());
            int flag=0;
            for(int j=0;j<ans.size();j++){
                string t = ans[j][0];
                sort(t.begin(), t.end());
                if(t==s){
                    ans[j].push_back(i);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ans.push_back({i});
            }
        }
        return ans;
    }
};



