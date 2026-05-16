class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0 ,r = 0;
        int res = -1;
        unordered_map<int, int> mp;
        while(r < fruits.size()){
            mp[fruits[r]]++;
            
            while(mp.size() > 2){
                mp[fruits[l]]--;
                 if (mp[fruits[l]] == 0) {
                    mp.erase(fruits[l]);
                }
                l++;
            }
            int len = r-l+1;
            res = max(res,len);
            
            r++;
        }
        return res;
    }
};