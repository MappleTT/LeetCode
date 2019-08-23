class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            mapnums1[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            if(mapnums1[nums2[i]]>0){
                arr.push_back(nums2[i]);
                mapnums1[nums2[i]]--;
            }
        }
        return arr;
    }

private:
    map<int,int>mapnums1;
    vector<int>arr;
};