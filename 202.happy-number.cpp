/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
       int thisTime=n;
       if(n==1)return true;
       do{
           thisTime=calSum(thisTime);
       }while(thisTime/10>0);
       if(thisTime==1 || thisTime==7) return true;
       else return thisTime==1;
    }
    int calSum(int n){
        int save=0;
        int buffer=n;
        int remain=1;
        while(remain>0){
        remain=n/10;
        buffer=n%10;
        save+=buffer*buffer;
        if(remain==0)return save;
        n/=10;
       }
        return save;
    }

};
// @lc code=end

