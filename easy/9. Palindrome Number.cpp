/* I've read otherones' solusion, and I learnt it.*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0) return true;
        if(x<0 || x%10==0) return false;
        int k = 0;
        while(k<x)
        {
            k=k*10+x%10;
            x/=10;
        }
        return k==x || k/10==x;
    }
};
