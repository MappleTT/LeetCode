class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans="";
        if(strs.size()==0)
            return ans;
        char m;
        for(int i=0;i<strs[0].size();i++)
        {
            m=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(i>=strs[j].size()||m!=strs[j][i])
                    return ans;
            }
            ans+=m;
        }
        return ans;
    }
};