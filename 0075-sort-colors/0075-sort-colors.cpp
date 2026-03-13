class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int m = 0;

        while(m <= r){
            if(nums[m]==1){
                m++;
            }
            else if(nums[m] ==2){
                swap(nums[r],nums[m]);
                r--;
            }
            else{
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
        }

    }
};

