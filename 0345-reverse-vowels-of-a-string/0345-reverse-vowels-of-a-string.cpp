class Solution {
public:
    bool isValid(char &c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;

        while(l < r){
            while(l < r && !isValid(s[l])){
                l++;
            }
            while(l < r && !isValid(s[r])){
                r--;
            }
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};