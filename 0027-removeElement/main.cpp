class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]==val){
                n--;
                nums.erase(nums.begin() + i);
                if(i>=nums.size())
                    break;
            }
        }
        return n;
    }
};