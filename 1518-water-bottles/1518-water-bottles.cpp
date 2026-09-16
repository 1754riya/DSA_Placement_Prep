class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            int newbottles=empty/numExchange;
            ans+=newbottles;
            empty=empty%numExchange+newbottles;
        }
        return ans;
    }
};