class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 ,r = 0;
        int res = 0;
        unordered_map<char, int> mp;
        while(r < s.size()){
            mp[s[r]]++;
            int k = r-l+1;
            while(mp.size() < k){
                mp[s[l]]--;
                 if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
                k = r-l+1;
            }
            if(mp.size()==k){
                int len = r-l+1;
                res = max(res,len);
            }
            
            
            r++;
        }
        return res;
    }
};