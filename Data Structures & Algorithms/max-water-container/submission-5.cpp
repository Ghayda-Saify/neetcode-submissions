#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int h,w,maxe = -10e8;
        int l=0,r=heights.size()-1;
        while(l<r){
            h = min(heights[l],heights[r]);
            w = abs(r-l);
            maxe= max(maxe,(h*w));
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return maxe;
    }
};

