class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++){
            if(A[i].size()>capacity)
                capacity=(int)A[i].size();
        }
        arr=vector<vector<int>>(A.size(),vector<int>(capacity,0));
        for(int i=0;i<A.size();i++){
            k=0;
            for(int j=(int)A[i].size()-1;j>=0;j--){
                arr[i][k++]= A[i][j] == 0 ? 1 : 0;
            }
        }
        return arr;
    }
private:
    int capacity=0;
    vector<vector<int>>arr;
    int k=0;
};