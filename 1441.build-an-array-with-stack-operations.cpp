class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> returnOpt={};


        int j=0;
        for(int i=1;i<=n;i++){
            returnOpt.push_back("Push");

            if(target[target.size()-1]<=i){

                    break;
            }
            else{

                if(i==target[j]){

                j++;
                        continue;
                }
                else{

                 returnOpt.push_back("Pop");

                }
            }


        }


        return returnOpt;
    }
};
