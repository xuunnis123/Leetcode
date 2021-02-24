/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */
// mindset:https://xuunnis1011.medium.com/leetcode-5-longest-palindromic-substring-81492361a090
// @lc code=start
class Solution {
public:
    int palindrome(string s,int left,int right){
        int bufferLeft=left;
        int bufferRight=right;
        bool matchBefore=false;
        while(left >= 0 && right<s.size() && left<=right){
            
            
            if(s[left]==s[right]){
               
                left--;
                right++;
                matchBefore=true;
            }
            else{ 
               
                break;
            }
           
        }
        
        if(matchBefore){
            left=left+1;
            right=right-1;
            matchBefore=false;
            return right-left+1;
        }else{
            return 0;
        }
       
        
    

    }
    string longestPalindrome(string s) {
        int size=s.size();
        int right=size;
        int left=0;
        int len=0;
        int saveMax=0;
        int maxI=0;
        for(int i=0;i<size;i++){
            int lenOdd=palindrome(s,i,i);
            int lenEven=palindrome(s,i,i+1);
            len=max(lenOdd,lenEven);
            if (len>saveMax){saveMax=len;
            maxI=i;}
            
        }   
         left=maxI-(saveMax-1)/2;
         right=maxI+saveMax/2;
        return s.substr(left,right-left+1);
    }
    
};
// @lc code=end

