class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int len = columnTitle.size();
        
        for(int i=0;i<len;i++){

            int digitNumber = columnTitle[i] - 'A' + 1;
            result = result * 26 + digitNumber;

        }

        return result;
    }
};