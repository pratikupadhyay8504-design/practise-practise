class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size() > 1) {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y == x) continue;
            else pq.push(y - x);
        }
        return pq.size() == 0 ? 0 : pq.top();
    }
};