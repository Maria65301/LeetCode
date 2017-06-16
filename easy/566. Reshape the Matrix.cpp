class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rr = nums.size();
        int cc = nums[0].size();
        if(rr*cc != r*c || rr*cc == 0)
            return nums;
        vector<vector<int>> rst;
        vector<int> temp(c,0);
        int p = 0;
        for(int ii=0; ii<rr; ii++)
        {
            for(int jj=0; jj<cc; jj++)
            {
                temp[p++]=nums[ii][jj];
                if(p>=c)
                {
                    rst.push_back(temp);
                    p=0;
                }
            }
        }
        return rst;
    }
};
