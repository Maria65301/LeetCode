class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int KEYBORD[128];
        char row1[]="QWERTYUIOPqwertyuiop";
        char row2[]="ASDFGHJKLasdfghjkl";
        char row3[]="ZXCVBNMzxcvbnm";
        memset(KEYBORD, '-1', 128);
        for(int i = 0; i < strlen(row1); i++)
        {KEYBORD[row1[i]]=1;}
        for(int i = 0; i < strlen(row2); i++)
        {KEYBORD[row2[i]]=2;}
        for(int i = 0; i < strlen(row3); i++)
        {KEYBORD[row3[i]]=3;}
        vector<string> rst;
        for(int i = 0; i<words.size(); i++)
        {
            string p=words[i];
            int f=KEYBORD[p.at(0)];
            for(int j = 1; j < p.length(); j++)
            {
                if(f!=KEYBORD[p.at(j)])
                {
                    f=-1;
                    break;
                }
            }
            if(f==-1)
                continue;
            rst.push_back(p);
        }
        return rst;
    }
};
