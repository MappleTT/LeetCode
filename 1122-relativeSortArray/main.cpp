class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ret;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]) {
                    ret.push_back(arr1[j]);
                }
            }
        }
        vector<int>m;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                if(arr1[i]==arr2[j])
                    break;
                if(arr1[i]!=arr1[j]&&j==arr2.size()-1) {
                    m.push_back(arr1[i]);
                }
            }
        }

        sort(m.begin(),m.end());
        for(int i=0;i<m.size();i++){
            ret.push_back(m[i]);
        }
        return ret;
    }
};