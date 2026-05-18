class Solution {
public:
    bool shai(vector<int>& need, vector<int>& have) {
        for (int i = 0; i < 128; i++) {
            if (have[i] < need[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        vector<int> need(128,0);
        vector<int> have(128,0);
        int l = 0;
        int r = 0;
        int start = 0;
        int ans = INT_MAX;
        for(auto c : t){
            need[c]++;
        }
        while(r < s.size()){
            have[s[r]]++;
            while(shai(need,have)){
                int len = r-l+1;
                if(ans > len){
                    ans=len;
                    start = l;
                }
                have[s[l]]--;
                l++;
            }
            r++;
        }
        return (ans == INT_MAX)? "":s.substr(start,ans);
    }
};