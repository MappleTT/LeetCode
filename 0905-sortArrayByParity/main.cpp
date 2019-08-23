
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0)
                arr2.push_back(A[i]);
            else
                arr1.push_back(A[i]);
        }
        for(int i=0;i<arr2.size();i++){
            arr.push_back(arr2[i]);
        }
        for(int i=0;i<arr1.size();i++){
            arr.push_back(arr1[i]);
        }
        return arr;
    }
private:
    vector<int>arr,arr1,arr2;
};