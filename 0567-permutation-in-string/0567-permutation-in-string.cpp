class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> need(128,0);
        vector<int> have(128,0);
        int l = 0;
        int r = 0;

        for(auto c : s1){
            need[c]++;
        }
        while( r < s2.size()){
            have[s2[r]]++;
            if(r >= s1.size()){
                have[s2[l]]--;
                l++;
            }
            if(need == have){
                return true;
            }
            r++;
        }
        return false;
    }
};