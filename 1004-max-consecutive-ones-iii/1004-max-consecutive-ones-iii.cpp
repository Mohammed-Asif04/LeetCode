class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int res = INT_MIN;
        unordered_map<int,int> mp;

        while(r < nums.size()){
            mp[nums[r]]++;

            while(mp[0] > k){
                mp[nums[l]]--;
                l++;
            }

            while(mp[0]<=k){
                int len = r-l+1;
                res = max(res,len);
                break;
            }
            r++; 
        }
        return res;
    }
};