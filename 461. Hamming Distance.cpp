class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int i = 0;
        while(z)
        {
            i=i+z%2;
            z=z>>1;
        }
        return i;
    }
};
