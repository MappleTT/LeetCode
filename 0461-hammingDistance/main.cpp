class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        while(a){
            if(a&1){
                num++;
            }
            a>>=1;
        }
        return num;
    }
private:
    int num=0;
};