class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int b=numBottles;
        int e=numExchange;
        return (b*e-1)/(e-1);
        
    }
};