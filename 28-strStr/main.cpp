class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        if (haystack.size() == 0)
            return -1;
        getnext(&needle[0]);
        int Tlen=haystack.size();
        int Plen=needle.size();
        for(int i=0,j=0;i<Tlen;i++)
        {
            while(j>0&&haystack[i]!=needle[j])
            {
                j=next1[j-1];
            }
            if(haystack[i]==needle[j])
            {
                j++;
            }
            if(j==Plen)
                return i-j+1;
        }
        return -1;

    }
private:
    vector<int>next1;
    void getnext(char *s)
    {
        next1=vector<int>(strlen(s)+1);
        next1[0]=0;
        int k;
        for(int i=1,k=0;i<strlen(s);i++)
        {
            while(k>0&&s[k]!=s[i])
            {
                k=next1[k-1];
            }
            if(s[k]==s[i])
                k++;
            next1[i]=k;
        }
    }
};