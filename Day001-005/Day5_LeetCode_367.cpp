class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num -= i;     
            i +=2;      
            if(!num) return true;
        }
        return false;
    }
};

/*Intiution 
Each next perfect square is sum of odd numbers
ex:
1 = 1
1 + 3 = 4
1 + 3 + 5 = 8
1 + 3 + 5 + 7 = 16
........
*/
