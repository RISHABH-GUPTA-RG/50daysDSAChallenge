class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";     
        while (columnNumber > 0) {  
        // columnNumber is 1-indexed, so we need to subtract 1 from it
        // to convert it to 0-indexed
        // For example, 1 -> A, 2 -> B, ..., 26 -> Z, 27 -> AA, 28 -> AB, ...
            columnNumber--;
            // Get the last character of the column name
            // by taking the modulo of 26
            res = (char)(columnNumber % 26 + 'A') + res;
            // Divide the column number by 26 to get the next character
            columnNumber /= 26;
        }
        return res;
    }
};