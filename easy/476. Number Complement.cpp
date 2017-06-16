class Solution {
public:
    int findComplement(int num) {
        int n = log(num)/log(2);
        return pow(2.0, n+1)-1-num;
    }
};
