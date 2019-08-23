class Solution {
public:
    int search(vector<int>& nums, int target) {
        hight=nums.size()-1;
        while(low<=hight){
            mid=(hight-low)/2+low;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                hight=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
private:
    int low=0;
    int hight;
    int mid;
};