class Solution {
public:
    bool judgeSquareSum(int c) {
        set<int>arr;
        for(int i=0;i<=sqrt(c);i++){
            arr.insert(i*i);
        }
        for(int i=0;i<=sqrt(c);i++){
            if(arr.find(c-i*i)!=arr.end())
                return true;
        }
        return false;
    }
};