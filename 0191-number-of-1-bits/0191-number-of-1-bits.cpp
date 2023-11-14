class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=__builtin_popcount(n);
        return res;
    }
};