class Solution {
private:
    map<char,int> c_val = {
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
public:
    int romanToInt(string s) {
        int rst = c_val[s.back()];
        for(int i = s.size()-2; i >=0; i--)
        {
            int p = c_val[s.at(i)], n = c_val[s.at(i+1)];
            if(p<n)
                rst-=p;
            else
                rst+=p;
        }
        return rst;
    }
};
