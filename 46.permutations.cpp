class Solution {
public:

        vector<vector<int>> result;
        vector<vector<int>> perm(vector<int> list,int i,int n){
            int j;
            vector<int> one;
            if(i==n){
                for(j=0;j<n;j++){
                    one.push_back(list[j]);
                }
            }
            else{
                for(j=i;j<n;j++){
                    std::swap(list[i],list[j]);
                    perm(list,i+1,n);
                    std::swap(list[i],list[j]);

                }
            }

            if(one.size()>0){

            result.push_back(one);
            }

            return result;
        }

       vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> resultPerm;
        int n=nums.size();
        resultPerm=perm(nums,0,n);
        sort(resultPerm.begin(),resultPerm.end());

        return resultPerm;
    }



};
