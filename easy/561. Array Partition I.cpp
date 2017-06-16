/*
  Infact, if use hashtable, then it will be faster.
 */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator cur=nums.begin();
        int sum=0;
        while(cur!=nums.end())
        {
            sum+=*cur++;
            cur++;
        }
        return sum;
    }
};
