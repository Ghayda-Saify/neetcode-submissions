#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    vector<vector<int>> ans;
    int n = nums.size();
    set<int> s(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        for (int k = j + 1; k < n; k++)
        {
          int x = -(nums[i] + nums[j]);
          if (nums[k]==x && i!=k && i!=j && j!=k)
          {
            vector<int> temp = {nums[i], nums[j], x};
            sort(temp.begin(), temp.end());
            if (find(ans.begin(), ans.end(), temp) == ans.end())
            {
              ans.push_back(temp);
            }
          }
        }
      }
    }
    return ans;
  }
};
