class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
    int x = tomatoSlices / 2 - cheeseSlices;
    int y = cheeseSlices - x;
    if (4 * x + 2 * y == tomatoSlices && x >= 0 && y >= 0) return {x, y};
    return {};

    }
};
