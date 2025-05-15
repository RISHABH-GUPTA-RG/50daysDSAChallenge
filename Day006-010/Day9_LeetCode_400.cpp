class Solution {
    public:
        int findNthDigit(int n) {
            /*
            We have to find the digits int the sequence 1,2,3,4,5,6........
            As we can see the number of digit is 2 for 10 - 99 range
            and 3 for 100 to 999 and so on.
    
            So Instead of linear search throughout the sequence we can skip the whole block 
            DigitInNumber | Range      | Base   | Digits (Base * DigitInNumber) | Total 
            1             | 1 - 9      | 9      | 9                             | 9 
            2             | 10 - 99    | 90     | 180                           | 180 + 9 
            3             | 100 -999   | 900    | 2700                          | 2700 + 189 
            and so on
    
            So we will extract the Number of Digit from the given n
            like if n = 15
            the sequence will be
            1,2,3,4,5,6,7,8,9,10,11,12,13,14,15
            then we know that it will be a 2 digit number as it lies between 9 and 180 
            Similalry for n = 222 we know that it will be 3 digit number as 222 - 9 - 180 < 2700
    
    
            After getting the index for the number, we will find the Number from
            which n belongs Finally we will get the index in the number itself
            */
    
            long long digitInNumber = 1, base = 9, total = 0;
            while (total + digitInNumber * base < n) {
                total += digitInNumber * base;
                base *= 10;
                digitInNumber++;
            }
            
            n-=total;
    
            int num = pow(10,digitInNumber-1);
            num += (n-1)/digitInNumber;
            int index = (n-1)%digitInNumber;
            string s = to_string(num);
            return s[index] - '0';
            
        }
    };