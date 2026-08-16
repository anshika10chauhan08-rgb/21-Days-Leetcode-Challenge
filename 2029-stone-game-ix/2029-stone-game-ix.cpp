class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {

        int count[3] = {0, 0, 0};

        // Count stones according to remainder when divided by 3
        for (int x : stones) {
            count[x % 3]++;
        }

        // If number of 0-remainder stones is even
        if (count[0] % 2 == 0) {
            if (count[1] > 0 && count[2] > 0) {
                return true;
            }
            return false;
        }

        // If number of 0-remainder stones is odd
        if (abs(count[1] - count[2]) > 2) {
            return true;
        }

        return false;
    }
};