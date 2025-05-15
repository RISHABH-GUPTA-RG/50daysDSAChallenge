class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int sum = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                int pair = num / i;
                if (i != pair) { 
                    sum += pair;
                }
            }
        }

        return sum == num;
    }
};

/*
OR

class Solution {
public:
    bool checkPerfectNumber(int num) {
        return (num==6 || num==28 || num==496 || num==8128 || num==33550336); 
    }
};

Beacuse there are only these many perfect numbers in range 0 to 10^8
*/
