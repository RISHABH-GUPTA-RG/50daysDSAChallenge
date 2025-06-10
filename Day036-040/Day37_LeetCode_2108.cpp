class Solution {
private:
    bool palindrome(string x) {
        int isPal = 1;
        int n = x.size();
        for (int i = 0; i < n / 2; i++) {
            if (x[i] != x[n - 1 - i]) {
                isPal = 0;
                return 0;
            }
        }
        return 1;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for (auto s : words) {
            if (palindrome(s)) {
                return s;
            }
        }
        return "";
    }
};