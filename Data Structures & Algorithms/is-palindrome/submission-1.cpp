#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
       
         for (int i = 0; i < s.size(); i++)
         {
              if (!isalnum(s[i]))
              {
                s.erase(i, 1);
                i--;
              }
              if(s[i]>='A' && s[i]<='Z')
              {
                s[i]=s[i]+32;
              }
              
         }
         cout<<s<<endl;
        string x = s;
        reverse(x.begin(), x.end());
        return x == s;
    }
};