class Solution {
public:
    //no of set bit is 1 and bit position will be odd 
    //ex 16 is 10000 and 15 is 1111 so (16 & 15)==0
    bool isPowerOfFour(int n) {
        return n>0 && (n & (n-1))==0 && (n-1)%3==0; 
    }
};