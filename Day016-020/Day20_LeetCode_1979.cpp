class Solution {
private:
    int _gcd(int a, int b) { return (b == 0) ? a : _gcd(b, a % b); }

public:
    int findGCD(vector<int>& nums) {
        int minNo = nums[0];
        int maxNo = nums[0];

        for (int x : nums) {
            minNo = min(minNo, x);
            maxNo = max(maxNo, x);
        }

        return _gcd(minNo, maxNo);
    }
};