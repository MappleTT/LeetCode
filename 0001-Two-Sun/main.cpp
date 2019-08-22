class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans;
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                        //如果它们等于target然后就存入ans容器
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }
            return ans;
        }
};

