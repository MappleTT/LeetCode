class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        for(int i = left;i <= right;i++){
            int m = 1;
            int j=i;

            int k=i;
            while(j>0){

                int a = j%10;
                if(a==0) {
                    m=0;
                    break;
                }
                if(k % a == 0) {
                    j/=10;
                    continue;
                }
                else {
                    m=0;
                    break;
                }
            }
            if(m==1)
                arr.push_back(i);
        }
        return arr;
    }
private:
    vector<int>arr;
};