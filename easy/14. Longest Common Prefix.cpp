class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs[0].size()==0) return "";
        string rst(strs[0]);
        for(int i = 1; i < strs.size(); i++)
        {
            int j;
            for(j = 0; j<strs[i].size() && j<rst.size(); j++)
            {
                if(rst[j]!=strs[i][j])
                {
                   break;
                }
            }
            rst=rst.erase(j,rst.npos);
            if(rst.size()==0)
                return "";
        }
        return rst;
    }
};
