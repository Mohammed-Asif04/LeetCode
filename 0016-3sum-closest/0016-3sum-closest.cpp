class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int res_sum = 0;

        for(int i = 0; i < n-2 ;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                int diff = abs(sum-target);
                if(diff < max_diff){
                    max_diff = diff;
                    res_sum = sum;
                }
                if(sum == target){
                   l++;
                   r--;
                }
                else if(sum < target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return res_sum;
    }
};