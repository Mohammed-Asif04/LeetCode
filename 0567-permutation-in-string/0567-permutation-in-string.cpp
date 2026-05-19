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
            int len = r-l+1;
            while(len > s1.size()){ 
                have[s2[l]]--;
                l++;
                len = r-l+1;
            }
            if(need == have){
                return true;
            }
            r++;
        }
        return false;
    }
};