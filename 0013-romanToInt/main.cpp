class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int m=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')
            {
                sum+=1000;
            }
            else if(s[i]=='D')
            {
                sum+=500;
            }
            else if(s[i]=='C')
            {
                if((i+1<m&&s[i+1]=='D')||(i+1<m&&s[i+1]=='M'))
                {
                    sum-=100;
                }
                else
                    sum+=100;
            }
            else if(s[i]=='L')
            {
                sum+=50;
            }
            else if(s[i]=='X')
            {
                if((i+1<m&&s[i+1]=='L')||(i+1<m&&s[i+1]=='C'))
                {
                    sum-=10;
                }
                else
                    sum+=10;
            }
            else if(s[i]=='V')
            {
                sum+=5;
            }
            else if(s[i]=='I')
            {
                if((i+1<m&&s[i+1]=='V')||(i+1<m&&s[i+1]=='X'))
                {
                    sum-=1;
                }
                else
                    sum+=1;
            }
        }
        return sum;

    }
};