class Solution {
public:
    int find(vector<int>& freq) {
        int maxi = 0;
        for (int i = 0; i < 26; i++) {
            maxi = max(maxi, freq[i]);
        }
        return maxi;
    }

    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int l = 0;
        int r = 0;
        int res = INT_MIN;
        while( r < s.size()){
            freq[s[r] - 'A']++;
            int len = r-l+1;
            int maxcnt = find(freq);
            int diff = len - maxcnt;
            
            while(diff > k){
                freq[s[l]-'A']--;
                l++;
                maxcnt = find(freq);
                len = r-l+1;
                diff = len - maxcnt;
            }
            while(diff <= k){
                len = r-l+1;
                res = max(res,len);
                break;
            }
            r++;
        }
        return res;
    }
};