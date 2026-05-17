class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        int k = l;
        while( k <= r){
            int l1= 0;
            int r1= 0;
            int sum = 0;
            while(r1 < n){
                sum = sum + nums[r1];
                int len = r1 -l1 + 1;
                while(len  > k){
                    sum = sum - nums[l1];
                    l1++;
                    len = r1-l1+1;
                }
                while(len == k){
                    if(sum > 0){
                        ans = min(ans,sum);
                    }
                    break;
                }
                r1++;
            } 
            k++;
        }
        return (ans == INT_MAX)? -1 : ans;
    }
};