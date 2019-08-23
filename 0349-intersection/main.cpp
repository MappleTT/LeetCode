class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        for(int i=0;i<nums1.size();i++) {
            setnums1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(setnums1.find(nums2[i])!=setnums1.end()) {
                arr.push_back(nums2[i]);
                setnums1.erase(nums2[i]);
            }
        }
        return arr;
    }
private:
    set<int>setnums1;
    vector<int> arr;
};