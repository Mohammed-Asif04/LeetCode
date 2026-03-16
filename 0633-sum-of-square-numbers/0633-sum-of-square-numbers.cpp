class Solution {
public:
    bool judgeSquareSum(int c) {
        long l = 0;
        long r = (int) sqrt(c);
        while(l<=r){
            long sqr = l*l + r*r;
            if(sqr > c){
                r--;
            }
            else if (sqr < c){
                l++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};