class Solution {
public:
    queue<int> v;
    string encode(vector<string>& strs) {
        string res;
        for(int i=0;i<strs.size();i++){
            res += strs[i];
            int x = strs[i].size();
            v.push(x);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int curr = 0;
        while(!v.empty()){
            int len = v.front();
            v.pop();
            res.push_back(s.substr(curr, len));
            curr += len;
        }
        return res;
    }
};