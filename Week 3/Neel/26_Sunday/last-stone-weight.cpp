class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int ptr;
        while(stones.size() != 1){
            sort(stones.begin(), stones.end());
            stones[stones.size() - 2] = abs(stones[stones.size() - 1] - stones[stones.size() - 2]);
            stones.pop_back();
        }
        return stones[0];
    }
};
