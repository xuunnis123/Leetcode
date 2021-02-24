class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result=0;
        int now=0;
        result=numBottles;
        while(numBottles/numExchange>0){
            now=numBottles/numExchange;
            result+=now;
            numBottles=now+(numBottles%numExchange);

        }

        return result;
    }
};
