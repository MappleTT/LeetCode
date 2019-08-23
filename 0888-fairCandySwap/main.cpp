class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        for(int i=0;i<A.size();i++)
            suma+=A[i];
        for(int i=0;i<B.size();i++)
            sumb+=B[i];
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                if(suma-A[i]+B[j]==sumb-B[j]+A[i])
                {
                    ret.push_back(A[i]);
                    ret.push_back(B[j]);
                    return ret;
                }
            }
        }
        return ret;
    }
private:
    int suma=0,sumb=0;
    vector<int>ret;
};