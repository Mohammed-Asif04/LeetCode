class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n = nums.size();
        int cnt=0;
        int l = 0;
        int r = 0;
        long long  prod = 1;
        while(r < n){
            prod = prod * nums[r];
            while(prod >= k){
                prod = prod / nums[l];
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }
};