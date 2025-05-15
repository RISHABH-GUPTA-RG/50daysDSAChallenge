class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negCount = 0;
        int zeroCount = 0;
        for (int x : nums) {
            if (x < 0)
                negCount++;
            else if (x == 0)
                return 0;
        }
        return (negCount % 2 == 0) ? 1 : -1;
    }
};