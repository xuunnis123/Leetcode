class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> result;
        vector<int> sortedA;
        for(auto a: A){
          sortedA.push_back(a*a);
        }
        sort(sortedA.begin(),sortedA.end());
        return sortedA;
    }
};
