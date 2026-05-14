#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int h,w,maxe = -10e8;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                h = min(heights[i],heights[j]);
                w = abs(i-j);
                maxe = max(maxe,(h*w));
            }
        }
        return maxe;
    }
};
