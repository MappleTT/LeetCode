class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();)
        {
            while(target>nums[i])
            {
                i++;
                if(i>nums.size()-1) {
                    nums.push_back(target);
                    return nums.size()-1;
                }
            }
            if(target==nums[i])
                return i;
            else
            {

                nums.insert(nums.begin() + i, target);
                return i;
            }
        }
        return 0;
    }
};