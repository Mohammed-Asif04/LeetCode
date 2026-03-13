class Solution {
public:
    // checking valid char
    bool isValid(char s){
        if((s>='A' && s<='Z') || (s>='a' && s<='z') || (s>='0' && s<='9')){
            return true;
        }
        return false;
    }
    // traverse using two pointer
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l < r){
            while(l < r && !isValid(s[l])) l++;
            while(l < r && !isValid(s[r])) r--;

            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};