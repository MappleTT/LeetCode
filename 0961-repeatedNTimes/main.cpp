class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int,int>arr;
        int count=(int)A.size()/2;
        for(int i=0;i<A.size();i++){
            if(arr.find(A[i])!=arr.end()){
                arr.at(A[i])++;
                if(arr.at(A[i])==count)
                    return A[i];
            }
            arr.insert(pair<int,int>(A[i],1));
        }
        return -1;
    }
};