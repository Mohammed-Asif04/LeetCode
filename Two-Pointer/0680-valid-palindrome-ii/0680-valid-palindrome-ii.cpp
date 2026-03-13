class Solution {
public:
    bool palindromeHelper(string &s ,int l , int r){
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() -1;

        while(l<r){
            if(s[l] != s[r]){
                return palindromeHelper(s,l+1,r) || palindromeHelper(s,l,r-1);
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
};