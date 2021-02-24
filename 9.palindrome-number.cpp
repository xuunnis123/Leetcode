class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        else{
            int temp=x;
            int sum=0;
            while(temp!=0){
                if(sum>=INT_MAX/10){return false;}
                else{
                    sum=sum*10+temp%10;
                    temp/=10;
                    std::cout<<"Sum="<<sum <<"\n"<<"temp="<<temp<<"\n";
                }
        }
            return sum==x;


        }
    }
};
