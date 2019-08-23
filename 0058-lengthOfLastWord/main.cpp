class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        if(s.size()==0)
            return 0;
        else
        {
            int i=s.size()-1;
            while(s[i]==' ')
            {
                i--;
            }
            while(s[i]!=' '&&i>=0)
            {
                count++;
                i--;
            }
        }
        return count;
    }
};