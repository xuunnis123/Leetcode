/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> handle_map(vector<string> &result, string buffer,int pos, unordered_map<char,string> &mapping_letter, string &digits){
        //bottom
        if(pos==digits.length()){
           
            result.push_back(buffer);
            return result;
        }

        //every element recurrsion
        for(int i = 0;i < mapping_letter[digits[pos]].length();i++){
            
            handle_map(result, buffer+mapping_letter[digits[pos]][i], pos+1, mapping_letter, digits);
        }


        return result;
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        int len = digits.length();
        if(len == 0) return result;
        int pos = 0;
        
        unordered_map<char,string> mapping_letter;

        mapping_letter['2'] = "abc";
        mapping_letter['3'] = "def";
        mapping_letter['4'] = "ghi";
        mapping_letter['5'] = "jkl";
        mapping_letter['6'] = "mno";
        mapping_letter['7'] = "pqrs";
        mapping_letter['8'] = "tuv";
        mapping_letter['9'] = "wxyz";

        result= handle_map(result,"", pos, mapping_letter, digits );
        
        
        
        return result;
    }
};
// @lc code=end

