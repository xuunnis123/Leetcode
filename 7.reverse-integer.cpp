/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        //int size=x.size();
        int result=0;
        bool overflow=false;
        if(x==0) return 0;
        else{
            while(x!=0){
                if(result>INT_MAX/10 ||result<INT_MIN/10) {
                    overflow=true;
                    break;
                    }
                result=result*10+x%10;
                
                x/=10;
            }
            if(overflow) return 0;
            else return result;
        }
    }
};
// @lc code=end

