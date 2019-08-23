class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k=digits.size()-1;
        digits[k]+=1;
        int m=0;
        while(digits[k]>9)
        {
            digits[k]=0;
            k--;
            if(k==-1)
            {
                m=1;
                break;
            }
            digits[k]++;
        }
        if(m==1)
        {
            digits[0]=1;
            for(int i=1;i<digits.size();i++)
            {
                digits[i]=0;
            }
            digits.push_back(0);
        }
        return digits;
    }
};