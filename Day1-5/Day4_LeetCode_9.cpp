class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        int y = x;
        int sum = 0;
        while (y) {
            sum = 1LL * sum * 10 + y % 10;
            y /= 10;
        }
        return x == sum;
    }
};
