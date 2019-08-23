class Solution {
public:
    string countAndSay(int n) {
        vector<string>s(n+1,"");
        s[1]="1";
        for(int i=2;i<=n;i++)
        {
            for(int j=0;s[i-1][j]!='\0';j++)
            {
                int x=j;
                int count=1;
                while(s[i-1][x]==s[i-1][j+1])
                {
                    j++;
                    count++;
                }
                int f='0'+count;
                s[i]+=f;
                s[i]+=s[i-1][x];
            }
        }
        return s[n];

    }
};
