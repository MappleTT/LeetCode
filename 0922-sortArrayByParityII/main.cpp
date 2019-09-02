class Solution {
public:
vector<int> sortArrayByParityII(vector<int>& A){
        for(int i=0;i<A.size();i++){
             if(A[i]%2!=0)
                  //存储奇数
                  arr1.push_back(A[i]);
             else
                  //存储偶数
                  arr2.push_back(A[i]);
}
        for(int i=0;i<A.size()/2;i++){
               ans.push_back(arr2[i]);
               ans.push_back(arr1[i]);
}
        return ans;
}

private:
     vector<int>arr1,arr2,ans;
};