class Solution {
public:
    int trailingZeroes(int n) {

        int num = n;
        int ans = 0;
        while(num!=0){
            num = num/5;
            ans += num;
        }
        return  ans;
    }
};

